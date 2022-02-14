
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct TYPE_3__ {unsigned int PUPDR; } ;
typedef TYPE_1__ GPIO_TypeDef ;


 int FUNC_0 () ;
 int FUNC_1 () ;

void FUNC_2(GPIO_TypeDef *VAR_0, unsigned int VAR_1, unsigned int VAR_2) {
  FUNC_0();
  uint32_t VAR_3 = VAR_0->PUPDR;
  VAR_3 &= ~(3U << (VAR_1 * 2U));
  VAR_3 |= (VAR_2 << (VAR_1 * 2U));
  VAR_0->PUPDR = VAR_3;
  FUNC_1();
}
