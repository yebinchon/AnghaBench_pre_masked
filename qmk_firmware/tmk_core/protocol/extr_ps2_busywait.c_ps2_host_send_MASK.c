
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int FUNC_0 (int (*) (),int,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_1 ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;

uint8_t FUNC_8(uint8_t VAR_2) {
    bool VAR_3 = 1;
    VAR_1 = VAR_0;


    FUNC_5();
    FUNC_7(100);


    FUNC_4();
    FUNC_1();
    FUNC_0(FUNC_2, 10000, 10);


    for (uint8_t VAR_4 = 0; VAR_4 < 8; VAR_4++) {
        FUNC_7(15);
        if (VAR_2 & (1 << VAR_4)) {
            VAR_3 = !VAR_3;
            FUNC_3();
        } else {
            FUNC_4();
        }
        FUNC_0(FUNC_1, 50, 2);
        FUNC_0(FUNC_2, 50, 3);
    }


    FUNC_7(15);
    if (VAR_3) {
        FUNC_3();
    } else {
        FUNC_4();
    }
    FUNC_0(FUNC_1, 50, 4);
    FUNC_0(FUNC_2, 50, 5);


    FUNC_7(15);
    FUNC_3();


    FUNC_0(FUNC_4, 50, 6);
    FUNC_0(FUNC_2, 50, 7);


    FUNC_0(FUNC_1, 50, 8);
    FUNC_0(FUNC_3, 50, 9);

    FUNC_5();
    return FUNC_6();
ERROR:
    FUNC_5();
    return 0;
}
