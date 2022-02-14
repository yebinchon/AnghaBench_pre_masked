
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 float VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 float* VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__* VAR_10 ;

void FUNC_1(float VAR_11) {
    if (VAR_6) {
        if (!VAR_3) {
            FUNC_0();
        }



        for (int VAR_12 = 7; VAR_12 >= 0; VAR_12--) {
            if (VAR_4[VAR_12] == VAR_11) {
                VAR_4[VAR_12] = 0;
                VAR_10[VAR_12] = 0;
                for (int VAR_13 = VAR_12; (VAR_13 < 7); VAR_13++) {
                    VAR_4[VAR_13] = VAR_4[VAR_13 + 1];
                    VAR_4[VAR_13 + 1] = 0;
                    VAR_10[VAR_13] = VAR_10[VAR_13 + 1];
                    VAR_10[VAR_13 + 1] = 0;
                }
                break;
            }
        }
        VAR_8--;
        if (VAR_8 < 0) VAR_8 = 0;
        if (VAR_7 >= VAR_8) {
            VAR_7 = 0;
        }
        if (VAR_8 == 0) {



            VAR_0;
            VAR_1;

            VAR_5 = 0;
            VAR_9 = 0;
            VAR_6 = 0;
        }
    }
}
