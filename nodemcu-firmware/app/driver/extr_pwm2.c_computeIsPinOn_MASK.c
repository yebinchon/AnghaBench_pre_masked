
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int currentInterruptCounter; int pulseInterruptCcounter; int offInterruptCounter; int gpioMask; } ;
typedef TYPE_1__ pwm2_pin_interrupt_t ;



__attribute__((used)) static inline void FUNC_0(pwm2_pin_interrupt_t *VAR_0, uint16_t *VAR_1) {
  if (VAR_0->currentInterruptCounter == VAR_0->pulseInterruptCcounter) {
    VAR_0->currentInterruptCounter = 1;
  } else {
    VAR_0->currentInterruptCounter++;
  }

  if (VAR_0->currentInterruptCounter < VAR_0->offInterruptCounter) {
    *VAR_1 |= VAR_0->gpioMask;
  }
}
