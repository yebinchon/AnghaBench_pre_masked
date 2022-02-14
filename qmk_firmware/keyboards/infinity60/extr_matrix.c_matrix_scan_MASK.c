
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int matrix_row_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int* VAR_7 ;
 int* VAR_8 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;

uint8_t FUNC_7(void)
{
    for (int VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
        matrix_row_t VAR_10 = 0;
        switch (VAR_9) {
            case 0: FUNC_3(VAR_1, 0); break;
            case 1: FUNC_3(VAR_1, 1); break;
            case 2: FUNC_3(VAR_1, 2); break;
            case 3: FUNC_3(VAR_1, 3); break;
            case 4: FUNC_3(VAR_1, 16); break;
            case 5: FUNC_3(VAR_1, 17); break;
            case 6: FUNC_3(VAR_2, 4); break;
            case 7: FUNC_3(VAR_2, 5); break;
            case 8: FUNC_3(VAR_3, 0); break;
        }







        FUNC_6(20);


        VAR_10 = (FUNC_2(VAR_3)>>1);
        switch (VAR_9) {
            case 0: FUNC_1(VAR_1, 0); break;
            case 1: FUNC_1(VAR_1, 1); break;
            case 2: FUNC_1(VAR_1, 2); break;
            case 3: FUNC_1(VAR_1, 3); break;
            case 4: FUNC_1(VAR_1, 16); break;
            case 5: FUNC_1(VAR_1, 17); break;
            case 6: FUNC_1(VAR_2, 4); break;
            case 7: FUNC_1(VAR_2, 5); break;
            case 8: FUNC_1(VAR_3, 0); break;
        }


        if (VAR_8[VAR_9] != VAR_10) {
            VAR_8[VAR_9] = VAR_10;
            VAR_5 = 1;
            VAR_6 = FUNC_5();
        }
    }

    if (VAR_5 && FUNC_4(VAR_6) > VAR_0) {
        for (int VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {
            VAR_7[VAR_11] = VAR_8[VAR_11];
        }
        VAR_5 = 0;
    }
    FUNC_0();
    return 1;
}
