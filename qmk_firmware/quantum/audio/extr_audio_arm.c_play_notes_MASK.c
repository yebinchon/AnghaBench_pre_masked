
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {scalar_t__ enable; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 () ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,unsigned int) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int*** VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_5 () ;

void FUNC_6(float (*VAR_15)[][2], uint16_t VAR_16, bool VAR_17) {
    if (!VAR_2) {
        FUNC_2();
    }

    if (VAR_1.enable) {

        if (VAR_13) {
            FUNC_5();
        }

        VAR_14 = 1;

        VAR_10 = VAR_15;
        VAR_9 = VAR_16;
        VAR_11 = VAR_17;

        VAR_12 = 0;
        VAR_3 = 0;

        VAR_5 = (*VAR_10)[VAR_3][0];
        VAR_6 = ((*VAR_10)[VAR_3][1] / 4) * (((float)VAR_8) / 100);
        VAR_7 = 0;

        FUNC_3(&VAR_0, &VAR_4);
        FUNC_4(&VAR_0, 2U);
        FUNC_0();
        FUNC_1();
    }
}
