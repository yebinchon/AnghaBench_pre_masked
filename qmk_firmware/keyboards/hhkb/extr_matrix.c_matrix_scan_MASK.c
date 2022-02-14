
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (size_t,size_t) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 () ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 int FUNC_9 (size_t,size_t) ;
 size_t VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_10 (int) ;
 int* VAR_8 ;
 int VAR_9 ;
 int* VAR_10 ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 () ;

uint8_t FUNC_15(void)
{
    uint8_t *VAR_11;

    VAR_11 = VAR_10;
    VAR_10 = VAR_8;
    VAR_8 = VAR_11;


    if (!FUNC_3()) FUNC_2();
    for (uint8_t VAR_12 = 0; VAR_12 < VAR_4; VAR_12++) {
        for (uint8_t VAR_13 = 0; VAR_13 < VAR_2; VAR_13++) {
            FUNC_6(VAR_12, VAR_13);
            FUNC_10(5);


            if (VAR_10[VAR_12] & (1<<VAR_13)) {
                FUNC_5();
            }
            FUNC_10(10);




            uint8_t VAR_14 = VAR_5;

            FUNC_0();
            FUNC_10(5);

            if (FUNC_7()) {
                VAR_8[VAR_12] &= ~(1<<VAR_13);
            } else {
                VAR_8[VAR_12] |= (1<<VAR_13);
            }




            if (FUNC_9(VAR_5, VAR_14) > 20/(1000000/VAR_6)) {
                VAR_8[VAR_12] = VAR_10[VAR_12];
            }

            FUNC_10(5);
            FUNC_4();
            FUNC_8();
            FUNC_10(75);

        }
        if (VAR_8[VAR_12] ^ VAR_10[VAR_12]) VAR_9 = FUNC_14();
    }

    if (FUNC_3() &&
            (VAR_7 == VAR_0 ||
             VAR_7 == VAR_1 ) &&
            FUNC_13(VAR_9) > VAR_3) {
        FUNC_1();
        FUNC_12();
    }

    FUNC_11();

    return 1;
}
