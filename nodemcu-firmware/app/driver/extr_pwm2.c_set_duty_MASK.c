
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
struct TYPE_9__ {int duty; } ;
typedef TYPE_3__ pwm2_pin_setup_t ;
typedef int pwm2_pin_interrupt_t ;
struct TYPE_8__ {int * pin; } ;
struct TYPE_7__ {TYPE_3__* pin; } ;
struct TYPE_10__ {TYPE_2__ interruptData; TYPE_1__ setupData; } ;
typedef TYPE_4__ pwm2_module_data_t ;


 int FUNC_0 (int *,TYPE_3__*) ;

__attribute__((used)) static void FUNC_1(pwm2_module_data_t *VAR_0, const uint8_t VAR_1, const uint32_t VAR_2) {
  pwm2_pin_setup_t *VAR_3 = &VAR_0->setupData.pin[VAR_1];
  pwm2_pin_interrupt_t *VAR_4 = &VAR_0->interruptData.pin[VAR_1];
  VAR_3->duty = VAR_2;
  FUNC_0(VAR_4, VAR_3);
}
