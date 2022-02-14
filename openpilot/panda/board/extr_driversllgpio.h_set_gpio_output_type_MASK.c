
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int OTYPER; } ;
typedef TYPE_1__ GPIO_TypeDef ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 unsigned int VAR_0 ;

void FUNC_2(GPIO_TypeDef *VAR_1, unsigned int VAR_2, unsigned int VAR_3){
  FUNC_0();
  if(VAR_3 == VAR_0) {
    VAR_1->OTYPER |= (1U << VAR_2);
  } else {
    VAR_1->OTYPER &= ~(1U << VAR_2);
  }
  FUNC_1();
}
