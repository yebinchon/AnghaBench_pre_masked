
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int duty; int resolutionInterruptCounterMultiplier; int pulseResolutions; } ;
typedef TYPE_1__ pwm2_pin_setup_t ;
struct TYPE_6__ {int offInterruptCounter; } ;
typedef TYPE_2__ pwm2_pin_interrupt_t ;


 int FUNC_0 (int,int ) ;

__attribute__((used)) static void FUNC_1(pwm2_pin_interrupt_t *VAR_0, pwm2_pin_setup_t *VAR_1) {
  VAR_0->offInterruptCounter = (VAR_1->duty + FUNC_0(VAR_1->duty, VAR_1->pulseResolutions)) * VAR_1->resolutionInterruptCounterMultiplier;
}
