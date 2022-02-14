
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vprintf_like_t ;
typedef scalar_t__ uint32_t ;





 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (void*,void*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 size_t FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 void* FUNC_11 (size_t) ;
 int FUNC_12 () ;
 int FUNC_13 (char*) ;
 int FUNC_14 () ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (scalar_t__) ;
 int FUNC_18 (void*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_19 () ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (char*) ;
 scalar_t__ FUNC_23 () ;
 int FUNC_24 (char*) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_25 () ;
 int FUNC_26 () ;
 int VAR_10 ;
 int FUNC_27 () ;
 int FUNC_28 () ;
 int VAR_11 ;

void FUNC_29(void *VAR_12) {
    volatile uint32_t VAR_13 = (uint32_t)FUNC_6();



    FUNC_27();
    size_t VAR_14 = FUNC_7(VAR_0);
    void *VAR_15 = FUNC_11(VAR_14);


soft_reset:

    FUNC_18((void *)VAR_13);
    FUNC_17(VAR_4 - 1024);
    FUNC_4(VAR_15, VAR_15 + VAR_14);
    FUNC_14();
    FUNC_16(VAR_8, 0);
    FUNC_15(VAR_8, FUNC_0(VAR_1));
    FUNC_15(VAR_8, FUNC_0(VAR_2));
    FUNC_16(VAR_7, 0);
    FUNC_26();


    FUNC_9();


    FUNC_24("_boot.py");
    FUNC_22("boot.py");
    if (VAR_9 == VAR_5) {
        FUNC_22("main.py");
    }

    for (;;) {
        if (VAR_9 == VAR_6) {
            vprintf_like_t VAR_16 = FUNC_1(VAR_11);
            if (FUNC_25() != 0) {
                break;
            }
            FUNC_1(VAR_16);
        } else {
            if (FUNC_23() != 0) {
                break;
            }
        }
    }

    FUNC_10();





    FUNC_5();

    FUNC_13("MPY: soft reboot\r\n");


    FUNC_8();
    FUNC_28();

    FUNC_12();
    FUNC_3(VAR_10);
    goto soft_reset;
}
