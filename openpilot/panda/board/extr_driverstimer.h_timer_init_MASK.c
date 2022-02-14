
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int PSC; scalar_t__ SR; int CR1; int DIER; } ;
typedef TYPE_1__ TIM_TypeDef ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(TIM_TypeDef *VAR_2, int VAR_3) {
  VAR_2->PSC = VAR_3-1;
  VAR_2->DIER = VAR_1;
  VAR_2->CR1 = VAR_0;
  VAR_2->SR = 0;
}
