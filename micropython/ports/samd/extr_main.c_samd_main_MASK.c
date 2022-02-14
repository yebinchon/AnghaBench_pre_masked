
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_11 () ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_12 () ;

void FUNC_13(void) {
    FUNC_10(&VAR_4);
    FUNC_9(&VAR_4 - &VAR_6 - 1024);

    for (;;) {
        FUNC_2(&VAR_5, &VAR_3);
        FUNC_5();
        FUNC_7(FUNC_1(VAR_8), 0);
        FUNC_6(VAR_8, FUNC_0(VAR_1));
        FUNC_7(FUNC_1(VAR_7), 0);

        for (;;) {
            if (VAR_9 == VAR_2) {
                if (FUNC_12() != 0) {
                    break;
                }
            } else {
                if (FUNC_11() != 0) {
                    break;
                }
            }
        }

        FUNC_8(VAR_0, "MPY: soft reboot\n");
        FUNC_3();
        FUNC_4();
    }
}
