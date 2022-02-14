
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int matrix_row_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (int) ;
 int* VAR_4 ;
 int VAR_5 ;
 int* VAR_6 ;
 int FUNC_9 () ;
 int FUNC_10 () ;

uint8_t FUNC_11(void)
{
    matrix_row_t *VAR_7;

    VAR_7 = VAR_6;
    VAR_6 = VAR_4;
    VAR_4 = VAR_7;

    uint8_t VAR_8, VAR_9;
    for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
        FUNC_5(VAR_9);
        for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {

            FUNC_6(VAR_8);
            FUNC_8(2);


            if (VAR_6[VAR_8] & (1<<VAR_9)) {
                FUNC_2();
            }
            FUNC_8(10);




            uint8_t VAR_10 = VAR_2;

            FUNC_0();


            FUNC_8(2);

            if (FUNC_3()) {
                VAR_4[VAR_8] &= ~(1<<VAR_9);
            } else {
                VAR_4[VAR_8] |= (1<<VAR_9);
            }




            if (FUNC_7(VAR_2, VAR_10) > 20/(1000000/VAR_3)) {
                VAR_4[VAR_8] = VAR_6[VAR_8];
            }

            FUNC_8(5);
            FUNC_1();
            FUNC_4();



            FUNC_8(75);
        }
        if (VAR_4[VAR_8] ^ VAR_6[VAR_8]) {
            VAR_5 = FUNC_10();
        }
    }
    FUNC_9();
    return 1;
}
