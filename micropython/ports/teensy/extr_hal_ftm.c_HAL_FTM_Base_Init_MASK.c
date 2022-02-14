
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {scalar_t__ CounterMode; int PrescalerShift; int Period; } ;
struct TYPE_8__ {int State; TYPE_1__ Init; TYPE_2__* Instance; } ;
struct TYPE_7__ {int SC; int MOD; int MODE; } ;
typedef TYPE_2__ FTM_TypeDef ;
typedef TYPE_3__ FTM_HandleTypeDef ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

void FUNC_6(FTM_HandleTypeDef *VAR_5) {

    FTM_TypeDef *VAR_6 = VAR_5->Instance;
    FUNC_5(FUNC_2(VAR_6));
    FUNC_5(FUNC_4(VAR_5->Init.PrescalerShift));
    FUNC_5(FUNC_1(VAR_5->Init.CounterMode));
    FUNC_5(FUNC_3(VAR_5->Init.Period));

    VAR_5->State = VAR_3;

    VAR_6->MODE = VAR_1;
    VAR_6->SC = 0;
    VAR_6->MOD = VAR_5->Init.Period;
    uint32_t VAR_7 = FUNC_0(VAR_5->Init.PrescalerShift);
    if (VAR_5->Init.CounterMode == VAR_0) {
      VAR_7 |= VAR_2;
    }
    VAR_6->SC = VAR_7;

    VAR_5->State = VAR_4;
}
