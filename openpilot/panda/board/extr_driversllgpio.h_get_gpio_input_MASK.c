
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int IDR; } ;
typedef TYPE_1__ GPIO_TypeDef ;



int FUNC_0(GPIO_TypeDef *VAR_0, unsigned int VAR_1) {
  return (VAR_0->IDR & (1U << VAR_1)) == (1U << VAR_1);
}
