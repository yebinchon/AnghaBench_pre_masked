
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_11__ {int State; TYPE_2__* Instance; } ;
struct TYPE_10__ {int ICPolarity; } ;
struct TYPE_9__ {TYPE_1__* channel; } ;
struct TYPE_8__ {int CSC; } ;
typedef TYPE_2__ FTM_TypeDef ;
typedef TYPE_3__ FTM_IC_InitTypeDef ;
typedef TYPE_4__ FTM_HandleTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;

void FUNC_4(FTM_HandleTypeDef *VAR_2, FTM_IC_InitTypeDef* VAR_3, uint32_t VAR_4) {
    FTM_TypeDef *VAR_5 = VAR_2->Instance;
    FUNC_3(FUNC_2(VAR_5));
    FUNC_3(FUNC_0(VAR_4));
    FUNC_3(FUNC_1(VAR_3->ICPolarity));

    VAR_2->State = VAR_0;

    VAR_5->channel[VAR_4].CSC = VAR_3->ICPolarity;

    VAR_2->State = VAR_1;
}
