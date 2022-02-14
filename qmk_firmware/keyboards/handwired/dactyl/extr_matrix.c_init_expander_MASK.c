
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__* VAR_5 ;
 int* VAR_6 ;
 int VAR_7 ;
 int* VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 () ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;

void FUNC_5(void) {
    if (! VAR_10) {
        FUNC_0();
        FUNC_4(1000000);
    }

    if (! VAR_7) {

        for (int VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
            if (VAR_5[VAR_11]) {
                VAR_7 |= (1 << VAR_6[VAR_11]);
            }
        }





    }

    VAR_9 = FUNC_1(VAR_1); if (VAR_9) goto out;
    VAR_9 = FUNC_3(VAR_2); if (VAR_9) goto out;
        VAR_9 = FUNC_3(VAR_7); if (VAR_9) goto out;
        VAR_9 = FUNC_3(0); if (VAR_9) goto out;
    FUNC_2();





    VAR_9 = FUNC_1(VAR_1); if (VAR_9) goto out;
    VAR_9 = FUNC_3(VAR_0); if (VAR_9) goto out;


        VAR_9 = FUNC_3(VAR_7); if (VAR_9) goto out;
        VAR_9 = FUNC_3(0); if (VAR_9) goto out;
out:
    FUNC_2();
}
