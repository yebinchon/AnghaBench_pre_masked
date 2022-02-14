
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef unsigned int uint16_t ;
struct TYPE_3__ {unsigned int CCR1; unsigned int CCR2; unsigned int CCR3; unsigned int CCR4; } ;
typedef TYPE_1__ TIM_TypeDef ;


 unsigned int VAR_0 ;

void FUNC_0(TIM_TypeDef *VAR_1, uint8_t VAR_2, uint8_t VAR_3){
    uint16_t VAR_4 = (((uint16_t) VAR_3 * VAR_0) / 100U);
    switch(VAR_2){
        case 1U:
            VAR_1->CCR1 = VAR_4;
            break;
        case 2U:
            VAR_1->CCR2 = VAR_4;
            break;
        case 3U:
            VAR_1->CCR3 = VAR_4;
            break;
        case 4U:
            VAR_1->CCR4 = VAR_4;
            break;
        default:
            break;
    }
}
