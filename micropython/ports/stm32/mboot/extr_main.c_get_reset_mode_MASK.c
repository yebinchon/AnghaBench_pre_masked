
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 () ;

__attribute__((used)) static int FUNC_6(void) {
    FUNC_4();
    int VAR_3 = 1;
    if (FUNC_5()) {


        FUNC_3();
        FUNC_0();
        VAR_3 = 0;
        for (int VAR_4 = 0; VAR_4 < (VAR_1 * VAR_2 + 1) * 32; VAR_4++) {
            if (VAR_4 % 32 == 0) {
                if (++VAR_3 > VAR_1) {
                    VAR_3 = 1;
                }
                uint8_t VAR_5 = VAR_0 >> ((VAR_3 - 1) * 4);
                FUNC_1(VAR_5);
            }
            if (!FUNC_5()) {
                break;
            }
            FUNC_2(19);
        }

        for (int VAR_6 = 0; VAR_6 < 6; VAR_6++) {
            FUNC_1(0);
            FUNC_2(50);
            uint8_t VAR_7 = VAR_0 >> ((VAR_3 - 1) * 4);
            FUNC_1(VAR_7);
            FUNC_2(50);
        }
        FUNC_2(300);
    }
    return VAR_3;
}
