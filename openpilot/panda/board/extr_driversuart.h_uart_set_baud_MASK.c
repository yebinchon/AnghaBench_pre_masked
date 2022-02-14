
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* BRR; } ;
typedef TYPE_1__ USART_TypeDef ;


 TYPE_1__* VAR_0 ;
 void* FUNC_0 (unsigned int,unsigned int) ;

void FUNC_1(USART_TypeDef *VAR_1, unsigned int VAR_2) {
  if (VAR_1 == VAR_0) {

    VAR_1->BRR = FUNC_0(48000000U, VAR_2);
  } else {
    VAR_1->BRR = FUNC_0(24000000U, VAR_2);
  }
}
