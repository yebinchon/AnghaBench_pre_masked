
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (char) ;

__attribute__((used)) static bool FUNC_8(void) {

    static bool VAR_0 = 0;
    if (!FUNC_5())
        return 0;
    else {
        uint8_t VAR_1;
        VAR_1 = FUNC_6();
        FUNC_7(VAR_1);
        switch (VAR_1) {
            case 0x00:
                if (!VAR_0) {
                    FUNC_4("break(? for help): ");
                    VAR_0 = 1;
                }
                break;
            case '\r':
                FUNC_7('\n');
                FUNC_3();
                break;
            case '\b':
                FUNC_2();
                break;
            default:
                if (VAR_0) {
                    FUNC_4("\n");
                    FUNC_0(VAR_1);
                    VAR_0 = 0;
                } else {
                    FUNC_1(VAR_1);
                }
                break;
        }
        return 1;
    }
}
