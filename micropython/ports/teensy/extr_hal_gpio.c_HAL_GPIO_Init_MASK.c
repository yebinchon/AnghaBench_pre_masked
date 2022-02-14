
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_12__ {int IMR; int EMR; int RTSR; int FTSR; } ;
struct TYPE_11__ {int* EXTICR; } ;
struct TYPE_10__ {int Pin; int Mode; scalar_t__ Pull; int Alternate; scalar_t__ Speed; } ;
struct TYPE_9__ {int PDDR; } ;
typedef TYPE_1__ GPIO_TypeDef ;
typedef TYPE_2__ GPIO_InitTypeDef ;


 TYPE_8__* VAR_0 ;
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
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int* FUNC_0 (TYPE_1__*,int) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int volatile VAR_16 ;
 int volatile FUNC_6 (int) ;
 int volatile VAR_17 ;
 int volatile VAR_18 ;
 int volatile VAR_19 ;
 int volatile VAR_20 ;
 int volatile VAR_21 ;
 int VAR_22 ;
 TYPE_4__* VAR_23 ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int VAR_24 ;
 int VAR_25 ;

void FUNC_10(GPIO_TypeDef *VAR_26, GPIO_InitTypeDef *VAR_27)
{

    FUNC_9(FUNC_3(VAR_27->Pin));
    FUNC_9(FUNC_2(VAR_27->Mode));
    FUNC_9(FUNC_4(VAR_27->Pull));


    for (uint32_t VAR_28 = 0; VAR_28 < VAR_12; VAR_28++) {
        uint32_t VAR_29 = 1 << VAR_28;
        if ((VAR_27->Pin & VAR_29) == 0) {
            continue;
        }
        volatile uint32_t *VAR_30 = FUNC_0(VAR_26, VAR_28);



        if ((VAR_27->Mode == VAR_4) || (VAR_27->Mode == VAR_3)) {

            FUNC_9(FUNC_1(VAR_27->Alternate));
        }
        else if (VAR_27->Mode == VAR_5) {
            VAR_27->Alternate = 0;
        }
        else {
            VAR_27->Alternate = 1;
        }


        *VAR_30 &= ~VAR_17;
        *VAR_30 |= FUNC_6(VAR_27->Alternate);


        if (VAR_27->Mode == VAR_7 || VAR_27->Mode == VAR_5) {
            VAR_26->PDDR &= ~VAR_29;
        } else {
            VAR_26->PDDR |= VAR_29;
        }


        if ((VAR_27->Mode == VAR_10) || (VAR_27->Mode == VAR_4) ||
            (VAR_27->Mode == VAR_9) || (VAR_27->Mode == VAR_3)) {

            FUNC_9(FUNC_5(VAR_27->Speed));

            *VAR_30 |= VAR_16;


            if (VAR_27->Speed > VAR_15) {
                *VAR_30 &= ~VAR_21;
            } else {
                *VAR_30 |= VAR_21;
            }


            if (VAR_27->Mode & VAR_13) {
                *VAR_30 |= VAR_18;
            } else {
                *VAR_30 &= ~VAR_18;
            }
        } else {
            *VAR_30 &= ~VAR_16;
        }


        if (VAR_27->Pull == VAR_11) {
            *VAR_30 &= ~VAR_19;
        } else {
            *VAR_30 |= VAR_19;
            if (VAR_27->Pull == VAR_14) {
                *VAR_30 &= ~VAR_20;
            } else {
                *VAR_30 |= VAR_20;
            }
        }
    }
}
