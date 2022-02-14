
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
struct TYPE_10__ {int OCPolarity; int Pulse; int OCMode; } ;
struct TYPE_9__ {int POL; TYPE_1__* channel; } ;
struct TYPE_8__ {int CV; int CSC; } ;
typedef TYPE_2__ FTM_TypeDef ;
typedef TYPE_3__ FTM_OC_InitTypeDef ;
typedef TYPE_4__ FTM_HandleTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

void FUNC_6(FTM_HandleTypeDef *VAR_2, FTM_OC_InitTypeDef* VAR_3, uint32_t VAR_4) {
    FTM_TypeDef *VAR_5 = VAR_2->Instance;
    FUNC_5(FUNC_1(VAR_5));
    FUNC_5(FUNC_0(VAR_4));
    FUNC_5(FUNC_4(VAR_3->OCMode));
    FUNC_5(FUNC_3(VAR_3->Pulse));
    FUNC_5(FUNC_2(VAR_3->OCPolarity));

    VAR_2->State = VAR_0;

    VAR_5->channel[VAR_4].CSC = VAR_3->OCMode;
    VAR_5->channel[VAR_4].CV = VAR_3->Pulse;
    if (VAR_3->OCPolarity & 1) {
      VAR_5->POL |= (1 << VAR_4);
    } else {
      VAR_5->POL &= ~(1 << VAR_4);
    }

    VAR_2->State = VAR_1;
}
