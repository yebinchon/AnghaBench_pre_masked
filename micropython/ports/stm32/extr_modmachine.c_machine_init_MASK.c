
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int CSR; int CSR1; int CPUCR; int SR1; int SCR; int CR1; int CR; } ;
struct TYPE_3__ {int RCC_SR; } ;


 TYPE_2__* VAR_0 ;
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
 TYPE_1__* VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;

void FUNC_0(void) {
    {

        uint32_t VAR_23 = VAR_15->RCC_SR;
        if (VAR_23 & VAR_17 || VAR_23 & VAR_21) {
            VAR_22 = VAR_14;
        } else if (VAR_23 & VAR_19

            || VAR_23 & VAR_16

            ) {
            VAR_22 = VAR_12;
        } else if (VAR_23 & VAR_18) {
            VAR_22 = VAR_11;
        } else {

            VAR_22 = VAR_13;
        }
    }

    VAR_15->RCC_SR |= VAR_20;
}
