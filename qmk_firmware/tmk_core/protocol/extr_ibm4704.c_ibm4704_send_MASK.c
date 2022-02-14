
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int (*) (),int,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_0 ;
 int FUNC_7 () ;
 int FUNC_8 (char*,int) ;

uint8_t FUNC_9(uint8_t VAR_1) {
    bool VAR_2 = 1;
    VAR_0 = 0;

    FUNC_0();


    FUNC_7();
    FUNC_4();


    FUNC_2(FUNC_5, 300, 0x30);


    for (uint8_t VAR_3 = 0; VAR_3 < 8; VAR_3++) {
        FUNC_2(FUNC_3, 100, 0x40 + VAR_3);
        if (VAR_1 & (1 << VAR_3)) {
            VAR_2 = !VAR_2;
            FUNC_5();
        } else {
            FUNC_6();
        }
        FUNC_2(FUNC_4, 100, 0x48 + VAR_3);
    }


    FUNC_2(FUNC_3, 100, 0x34);
    if (VAR_2) {
        FUNC_5();
    } else {
        FUNC_6();
    }
    FUNC_2(FUNC_4, 100, 0x35);


    FUNC_2(FUNC_3, 100, 0x34);
    FUNC_5();


    FUNC_2(FUNC_6, 100, 0x36);

    FUNC_7();
    FUNC_1();
    return 0;
ERROR:
    FUNC_7();
    if (VAR_0 > 0x30) {
        FUNC_8("S:%02X ", VAR_0);
    }
    FUNC_1();
    return -1;
}
