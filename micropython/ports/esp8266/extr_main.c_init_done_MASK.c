
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 () ;

void FUNC_11(void) {

    FUNC_9(VAR_0);
    if (FUNC_10() == VAR_1) {
        FUNC_8();
        FUNC_7(0xfffffff);
    }




    FUNC_1();
    FUNC_0("\r\n");





soft_reset:
    for (;;) {
        if (VAR_3 == VAR_2) {
            if (FUNC_4() != 0) {
                break;
            }
        } else {
            if (FUNC_3() != 0) {
                break;
            }
        }
    }
    FUNC_5();
    goto soft_reset;

}
