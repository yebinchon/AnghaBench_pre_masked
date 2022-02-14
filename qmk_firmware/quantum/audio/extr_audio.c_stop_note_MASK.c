
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 int FUNC_1 (char*,int) ;
 float* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__* VAR_12 ;

void FUNC_2(float VAR_13) {
    FUNC_1("audio stop note freq=%d", (int)VAR_13);

    if (VAR_8) {
        if (!VAR_4) {
            FUNC_0();
        }
        for (int VAR_14 = 7; VAR_14 >= 0; VAR_14--) {
            if (VAR_5[VAR_14] == VAR_13) {
                VAR_5[VAR_14] = 0;
                VAR_12[VAR_14] = 0;
                for (int VAR_15 = VAR_14; (VAR_15 < 7); VAR_15++) {
                    VAR_5[VAR_15] = VAR_5[VAR_15 + 1];
                    VAR_5[VAR_15 + 1] = 0;
                    VAR_12[VAR_15] = VAR_12[VAR_15 + 1];
                    VAR_12[VAR_15 + 1] = 0;
                }
                break;
            }
        }
        VAR_10--;
        if (VAR_10 < 0) VAR_10 = 0;
        if (VAR_9 >= VAR_10) {
            VAR_9 = 0;
        }
        if (VAR_10 == 0) {
            VAR_6 = 0;
            VAR_7 = 0;
            VAR_11 = 0;
            VAR_8 = 0;
        }
    }
}
