
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int State; TYPE_1__* Instance; } ;
struct TYPE_5__ {int SC; scalar_t__ CNT; } ;
typedef TYPE_1__ FTM_TypeDef ;
typedef TYPE_2__ FTM_HandleTypeDef ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;

void FUNC_3(FTM_HandleTypeDef *VAR_3) {
    FTM_TypeDef *VAR_4 = VAR_3->Instance;
    FUNC_2(FUNC_1(VAR_4));

    VAR_3->State = VAR_1;

    VAR_4->CNT = 0;
    VAR_4->SC |= FUNC_0(1) | VAR_0;

    VAR_3->State = VAR_2;
}
