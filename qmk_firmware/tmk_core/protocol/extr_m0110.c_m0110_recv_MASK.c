
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (char*) ;

uint8_t FUNC_7(void) {
    uint8_t VAR_3 = 0;
    VAR_2 = 0;

    FUNC_0(VAR_1, 250, 1);
    for (uint8_t VAR_4 = 0; VAR_4 < 8; VAR_4++) {
        VAR_3 <<= 1;
        FUNC_1(VAR_1, 200, 2);
        FUNC_1(VAR_0, 200, 3);
        if (FUNC_3()) {
            VAR_3 |= 1;
        }
    }
    FUNC_4();
    return VAR_3;
ERROR:
    FUNC_6("m0110_recv err: ");
    FUNC_5(VAR_2);
    FUNC_6("\n");
    FUNC_2(500);
    FUNC_4();
    return 0xFF;
}
