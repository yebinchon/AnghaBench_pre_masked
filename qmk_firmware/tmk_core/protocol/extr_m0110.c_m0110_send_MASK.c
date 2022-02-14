
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ VAR_2 ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (char*) ;
 int FUNC_9 () ;

uint8_t FUNC_10(uint8_t VAR_3) {
    VAR_2 = 0;

    FUNC_9();
    FUNC_0(VAR_1, 250, 1);
    for (uint8_t VAR_4 = 0x80; VAR_4; VAR_4 >>= 1) {
        FUNC_1(VAR_1, 250, 3);
        if (VAR_3 & VAR_4) {
            FUNC_4();
        } else {
            FUNC_5();
        }
        FUNC_1(VAR_0, 200, 4);
    }
    FUNC_3(100);
    FUNC_6();
    return 1;
ERROR:
    FUNC_8("m0110_send err: ");
    FUNC_7(VAR_2);
    FUNC_8("\n");
    FUNC_2(500);
    FUNC_6();
    return 0;
}
