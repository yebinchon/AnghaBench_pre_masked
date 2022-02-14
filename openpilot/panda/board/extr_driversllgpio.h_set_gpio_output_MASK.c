
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int ODR; } ;
typedef TYPE_1__ GPIO_TypeDef ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,unsigned int,int ) ;

void FUNC_3(GPIO_TypeDef *VAR_1, unsigned int VAR_2, bool VAR_3) {
  FUNC_0();
  if (VAR_3) {
    VAR_1->ODR |= (1U << VAR_2);
  } else {
    VAR_1->ODR &= ~(1U << VAR_2);
  }
  FUNC_2(VAR_1, VAR_2, VAR_0);
  FUNC_1();
}
