
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int CR1; int CCMR1; int CCMR2; int EGR; int ARR; int CCER; } ;
typedef TYPE_1__ TIM_TypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

void FUNC_0(TIM_TypeDef *VAR_20, uint8_t VAR_21){

    VAR_20->CR1 = VAR_18 | VAR_17;


    switch(VAR_21){
        case 1U:
            VAR_20->CCMR1 |= (VAR_6 | VAR_5 | VAR_7);
            VAR_20->CCER |= VAR_1;
            break;
        case 2U:
            VAR_20->CCMR1 |= (VAR_9 | VAR_8 | VAR_10);
            VAR_20->CCER |= VAR_2;
            break;
        case 3U:
            VAR_20->CCMR2 |= (VAR_12 | VAR_11 | VAR_13);
            VAR_20->CCER |= VAR_3;
            break;
        case 4U:
            VAR_20->CCMR2 |= (VAR_15 | VAR_14 | VAR_16);
            VAR_20->CCER |= VAR_4;
            break;
        default:
            break;
    }


    VAR_20->ARR = VAR_0;


    VAR_20->EGR |= VAR_19;
}
