
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
 int VAR_7 ;
 scalar_t__ FUNC_0 () ;
 int* VAR_8 ;
 int* VAR_9 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;

uint8_t FUNC_8(void)
{
    for (int VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
        matrix_row_t VAR_11 = 0;


        switch (VAR_10) {
            case 0: FUNC_4(VAR_1, 2); break;
            case 1: FUNC_4(VAR_1, 3); break;
            case 2: FUNC_4(VAR_1, 18); break;
            case 3: FUNC_4(VAR_1, 19); break;
            case 4: FUNC_4(VAR_2, 0); break;
            case 5: FUNC_4(VAR_2, 9); break;
            case 6: FUNC_4(VAR_2, 10); break;
            case 7: FUNC_4(VAR_2, 11); break;
            case 8: FUNC_4(VAR_3, 0); break;
        }






        FUNC_7(20);


        VAR_11 = ((FUNC_3(VAR_3) & 0xF0) >> 3) |
               ((FUNC_3(VAR_3) & 0x02) >> 1);


        switch (VAR_10) {
            case 0: FUNC_2(VAR_1, 2); break;
            case 1: FUNC_2(VAR_1, 3); break;
            case 2: FUNC_2(VAR_1, 18); break;
            case 3: FUNC_2(VAR_1, 19); break;
            case 4: FUNC_2(VAR_2, 0); break;
            case 5: FUNC_2(VAR_2, 9); break;
            case 6: FUNC_2(VAR_2, 10); break;
            case 7: FUNC_2(VAR_2, 11); break;
            case 8: FUNC_2(VAR_3, 0); break;
        }

        if (VAR_9[VAR_10] != VAR_11) {
            VAR_9[VAR_10] = VAR_11;
            VAR_6 = 1;
            VAR_7 = FUNC_6();
        }
    }

    uint8_t VAR_12 = 0;






    if (VAR_6 && FUNC_5(VAR_7) > VAR_0) {
        for (int VAR_13 = 0; VAR_13 < VAR_4; VAR_13++) {
            VAR_8[VAR_12 + VAR_13] = VAR_9[VAR_13];
        }
        VAR_6 = 0;
    }
    FUNC_1();
    return 1;
}
