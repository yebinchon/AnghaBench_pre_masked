
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* pin; } ;
struct TYPE_8__ {TYPE_2__ interruptData; } ;
typedef TYPE_3__ pwm2_module_data_t ;
struct TYPE_6__ {scalar_t__ currentInterruptCounter; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int) ;

__attribute__((used)) static void FUNC_1(pwm2_module_data_t *VAR_1) {
  for (int VAR_2 = 1; VAR_2 < VAR_0; VAR_2++) {
    if (FUNC_0(VAR_1, VAR_2)) {
      VAR_1->interruptData.pin[VAR_2].currentInterruptCounter = 0;
    }
  }
}
