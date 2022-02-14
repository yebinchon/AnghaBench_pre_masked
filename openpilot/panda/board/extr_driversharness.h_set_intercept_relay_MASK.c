
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* harness_config; } ;
struct TYPE_3__ {int pin_relay_flipped; int GPIO_relay_flipped; int pin_relay_normal; int GPIO_relay_normal; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int) ;

void FUNC_2(bool VAR_4) {
  if (VAR_2 != VAR_0) {
    if (VAR_4) {
      FUNC_0("switching harness to intercept (relay on)\n");
    } else {
      FUNC_0("switching harness to passthrough (relay off)\n");
    }

    if(VAR_2 == VAR_1){
      FUNC_1(VAR_3->harness_config->GPIO_relay_normal, VAR_3->harness_config->pin_relay_normal, !VAR_4);
    } else {
      FUNC_1(VAR_3->harness_config->GPIO_relay_flipped, VAR_3->harness_config->pin_relay_flipped, !VAR_4);
    }
  }
}
