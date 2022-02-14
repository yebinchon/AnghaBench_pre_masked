
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {scalar_t__ enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_0 () ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int*** VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int FUNC_1 () ;

void FUNC_2(float (*VAR_19)[][2], uint16_t VAR_20, bool VAR_21) {
    if (!VAR_7) {
        FUNC_0();
    }

    if (VAR_6.enable) {
        if (VAR_17) FUNC_1();

        VAR_18 = 1;

        VAR_14 = VAR_19;
        VAR_13 = VAR_20;
        VAR_15 = VAR_21;

        VAR_16 = 0;
        VAR_8 = 0;

        VAR_9 = (*VAR_14)[VAR_8][0];
        VAR_10 = ((*VAR_14)[VAR_8][1] / 4) * (((float)VAR_12) / 100);
        VAR_11 = 0;
    }
}
