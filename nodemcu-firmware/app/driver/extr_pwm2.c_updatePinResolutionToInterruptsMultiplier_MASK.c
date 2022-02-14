
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int resolutionInterruptCounterMultiplier; int resolutionCPUTicks; } ;
typedef TYPE_1__ pwm2_pin_setup_t ;



__attribute__((used)) static void FUNC_0(pwm2_pin_setup_t *VAR_0, uint32_t VAR_1) {
  VAR_0->resolutionInterruptCounterMultiplier = VAR_0->resolutionCPUTicks / VAR_1;
}
