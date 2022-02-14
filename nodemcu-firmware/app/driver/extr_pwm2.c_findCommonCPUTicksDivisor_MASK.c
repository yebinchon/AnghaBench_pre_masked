
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {TYPE_1__* pin; } ;
struct TYPE_7__ {TYPE_2__ setupData; } ;
typedef TYPE_3__ pwm2_module_data_t ;
struct TYPE_5__ {scalar_t__ pulseResolutions; int resolutionCPUTicks; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static uint32_t FUNC_1(pwm2_module_data_t *VAR_1) {
  uint32_t VAR_2 = 0;
  for (int VAR_3 = 1; VAR_3 < VAR_0; VAR_3++) {
    if (VAR_1->setupData.pin[VAR_3].pulseResolutions > 0) {
      VAR_2 = FUNC_0(VAR_1->setupData.pin[VAR_3].resolutionCPUTicks, VAR_2);
    }
  }
  return VAR_2;
}
