
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 int VAR_6 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (char*,scalar_t__) ;

uint8_t FUNC_5(void) {
    uint8_t VAR_8 = 0;
    bool VAR_9 = 1;
    VAR_7 = VAR_0;


    FUNC_2();


    FUNC_0(VAR_4, 100, 1);
    FUNC_0(VAR_6, 1, 2);
    FUNC_0(VAR_3, 50, 3);


    for (uint8_t VAR_10 = 0; VAR_10 < 8; VAR_10++) {
        FUNC_0(VAR_4, 50, 4);
        if (FUNC_1()) {
            VAR_9 = !VAR_9;
            VAR_8 |= (1 << VAR_10);
        }
        FUNC_0(VAR_3, 50, 5);
    }


    FUNC_0(VAR_4, 50, 6);
    if (FUNC_1() != VAR_9) {
        VAR_7 = VAR_1;
        goto ERROR;
    }
    FUNC_0(VAR_3, 50, 7);


    FUNC_0(VAR_4, 50, 8);
    FUNC_0(VAR_5, 1, 9);
    FUNC_0(VAR_3, 50, 10);

    FUNC_3();
    return VAR_8;
ERROR:
    if (VAR_7 > VAR_2) {
        FUNC_4("x%02X\n", VAR_7);
    }
    FUNC_3();
    return 0;
}
