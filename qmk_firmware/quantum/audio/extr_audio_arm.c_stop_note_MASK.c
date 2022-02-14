
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 (char*,int) ;
 float* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int *) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__* VAR_9 ;

void FUNC_5(float VAR_10) {
    FUNC_3("audio stop note freq=%d", (int)VAR_10);

    if (VAR_5) {
        if (!VAR_1) {
            FUNC_2();
        }
        for (int VAR_11 = 7; VAR_11 >= 0; VAR_11--) {
            if (VAR_2[VAR_11] == VAR_10) {
                VAR_2[VAR_11] = 0;
                VAR_9[VAR_11] = 0;
                for (int VAR_12 = VAR_11; (VAR_12 < 7); VAR_12++) {
                    VAR_2[VAR_12] = VAR_2[VAR_12 + 1];
                    VAR_2[VAR_12 + 1] = 0;
                    VAR_9[VAR_12] = VAR_9[VAR_12 + 1];
                    VAR_9[VAR_12 + 1] = 0;
                }
                break;
            }
        }
        VAR_7--;
        if (VAR_7 < 0) {
            VAR_7 = 0;
        }
        if (VAR_6 >= VAR_7) {
            VAR_6 = 0;
        }
        if (VAR_7 == 0) {
            FUNC_0();
            FUNC_1();
            FUNC_4(&VAR_0);
            VAR_3 = 0;
            VAR_4 = 0;
            VAR_8 = 0;
            VAR_5 = 0;
        }
    }
}
