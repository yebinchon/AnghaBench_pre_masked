
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_8__ {TYPE_2__* Instance; } ;
struct TYPE_7__ {TYPE_1__* channel; } ;
struct TYPE_6__ {int CSC; } ;
typedef TYPE_2__ FTM_TypeDef ;
typedef TYPE_3__ FTM_HandleTypeDef ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;

void FUNC_2(FTM_HandleTypeDef *VAR_1, uint32_t VAR_2) {
    FTM_TypeDef *VAR_3 = VAR_1->Instance;
    FUNC_1(FUNC_0(VAR_3));

    VAR_3->channel[VAR_2].CSC |= VAR_0;
}
