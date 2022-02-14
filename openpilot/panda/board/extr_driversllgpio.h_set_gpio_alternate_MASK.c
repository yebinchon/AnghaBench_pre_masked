
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int* AFR; } ;
typedef TYPE_1__ GPIO_TypeDef ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,unsigned int,int ) ;

void FUNC_3(GPIO_TypeDef *VAR_1, unsigned int VAR_2, unsigned int VAR_3) {
  FUNC_0();
  uint32_t VAR_4 = VAR_1->AFR[VAR_2 >> 3U];
  VAR_4 &= ~(0xFU << ((VAR_2 & 7U) * 4U));
  VAR_4 |= VAR_3 << ((VAR_2 & 7U) * 4U);
  VAR_1->AFR[VAR_2 >> 3] = VAR_4;
  FUNC_2(VAR_1, VAR_2, VAR_0);
  FUNC_1();
}
