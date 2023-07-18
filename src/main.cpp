#include <Arduino.h>
#include "soft_timer.h"
// put function declarations here:
int myFunction(int, int);
Timer_t tim;

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
  tim.timeMs = 120;
  tim.start  = 1;
}

void loop() {
  fbTimer(&tim);
  // put your main code here, to run repeatedly:
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}