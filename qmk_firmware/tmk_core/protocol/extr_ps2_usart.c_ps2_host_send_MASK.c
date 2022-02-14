
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int (*) (),int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int VAR_1 ;
 int FUNC_11 () ;

uint8_t FUNC_12(uint8_t VAR_2) {
    bool VAR_3 = 1;
    VAR_1 = VAR_0;

    FUNC_1();


    FUNC_10();
    FUNC_4(100);


    FUNC_8();
    FUNC_5();
    FUNC_3(FUNC_6, 10000, 10);


    for (uint8_t VAR_4 = 0; VAR_4 < 8; VAR_4++) {
        FUNC_4(15);
        if (VAR_2 & (1 << VAR_4)) {
            VAR_3 = !VAR_3;
            FUNC_7();
        } else {
            FUNC_8();
        }
        FUNC_3(FUNC_5, 50, 2);
        FUNC_3(FUNC_6, 50, 3);
    }


    FUNC_4(15);
    if (VAR_3) {
        FUNC_7();
    } else {
        FUNC_8();
    }
    FUNC_3(FUNC_5, 50, 4);
    FUNC_3(FUNC_6, 50, 5);


    FUNC_4(15);
    FUNC_7();


    FUNC_3(FUNC_8, 50, 6);
    FUNC_3(FUNC_6, 50, 7);


    FUNC_3(FUNC_5, 50, 8);
    FUNC_3(FUNC_7, 50, 9);

    FUNC_9();
    FUNC_0();
    FUNC_2();
    return FUNC_11();
ERROR:
    FUNC_9();
    FUNC_0();
    FUNC_2();
    return 0;
}
