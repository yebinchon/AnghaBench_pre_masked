
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int * pin; int interruptTimerCPUTicks; int interruptTimerTicks; } ;
struct TYPE_8__ {int * pin; int enabledGpioMask; } ;
struct TYPE_10__ {TYPE_2__ setupData; TYPE_1__ interruptData; } ;
typedef TYPE_3__ pwm2_module_data_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static void FUNC_7(pwm2_module_data_t *VAR_1) {
  VAR_1->interruptData.enabledGpioMask = FUNC_1(VAR_1);
  VAR_1->setupData.interruptTimerCPUTicks = FUNC_2(VAR_1);
  VAR_1->setupData.interruptTimerTicks = FUNC_0(VAR_1->setupData.interruptTimerCPUTicks);
  for (int VAR_2 = 1; VAR_2 < VAR_0; VAR_2++) {
    if (FUNC_3(VAR_1, VAR_2)) {
      FUNC_6(&VAR_1->setupData.pin[VAR_2], VAR_1->setupData.interruptTimerCPUTicks);
      FUNC_5(&VAR_1->interruptData.pin[VAR_2], &VAR_1->setupData.pin[VAR_2]);
      FUNC_4(&VAR_1->interruptData.pin[VAR_2], &VAR_1->setupData.pin[VAR_2]);
    }
  }
}
