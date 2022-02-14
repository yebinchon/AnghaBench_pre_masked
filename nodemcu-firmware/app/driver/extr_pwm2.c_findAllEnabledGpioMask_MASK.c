
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_10__ {TYPE_3__* pin; } ;
struct TYPE_8__ {TYPE_1__* pin; } ;
struct TYPE_11__ {TYPE_4__ interruptData; TYPE_2__ setupData; } ;
typedef TYPE_5__ pwm2_module_data_t ;
struct TYPE_9__ {int gpioMask; } ;
struct TYPE_7__ {scalar_t__ pulseResolutions; } ;


 int VAR_0 ;

__attribute__((used)) static uint16_t FUNC_0(pwm2_module_data_t *VAR_1) {
  uint16_t VAR_2 = 0;
  for (int VAR_3 = 1; VAR_3 < VAR_0; VAR_3++) {
    if (VAR_1->setupData.pin[VAR_3].pulseResolutions > 0) {
      VAR_2 |= VAR_1->interruptData.pin[VAR_3].gpioMask;
    }
  }
  return VAR_2;
}
