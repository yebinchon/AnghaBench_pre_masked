
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int OSPEEDR; } ;
typedef TYPE_1__ GPIO_TypeDef ;



void FUNC_0(uint32_t VAR_0, uint32_t VAR_1) {
    GPIO_TypeDef *VAR_2 = (GPIO_TypeDef*)(VAR_0 & ~0xf);
    uint32_t VAR_3 = VAR_0 & 0xf;
    VAR_2->OSPEEDR = (VAR_2->OSPEEDR & ~(3 << (2 * VAR_3))) | (VAR_1 << (2 * VAR_3));
}
