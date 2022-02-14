
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (scalar_t__) ;
 int VAR_8 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int VAR_9 ;
 scalar_t__ FUNC_14 () ;
 int FUNC_15 (char*) ;
 int FUNC_16 (int ) ;
 int VAR_10 ;
 int FUNC_17 (int ) ;
 int FUNC_18 () ;
 int FUNC_19 (int) ;
 int FUNC_20 () ;
 scalar_t__ FUNC_21 () ;
 int FUNC_22 () ;

int FUNC_23(void) {
    VAR_1 = 0;
    FUNC_2(VAR_7);
    FUNC_0(VAR_6);
    FUNC_19(115200);
    FUNC_12();
    FUNC_15("\nSend BREAK for UART Console Commands.\n");


    FUNC_15("suart init\n");


    VAR_4 |= (1 << 4);
    VAR_0 |= (1 << 4);

    VAR_4 |= (1 << 5);
    VAR_0 &= ~(1 << 5);

    VAR_3 = 0b00100000;
    VAR_2 = 0b00000010;

    FUNC_6(FUNC_9());

    FUNC_15("iwrap_init()\n");
    FUNC_10();
    FUNC_7();

    VAR_9 = FUNC_18();
    while (1) {



        FUNC_13();




        if (FUNC_14() || FUNC_3()) {
            VAR_9 = FUNC_18();
            VAR_10 = 0;
        } else if (!VAR_10 && FUNC_17(VAR_9) > 4000) {
            VAR_10 = 1;
            FUNC_8();
        }


        if (FUNC_5() == FUNC_9()) {
            if (VAR_10 && !VAR_8) {
                FUNC_1(1);
                FUNC_11();
                FUNC_16(VAR_5);
            }
        }
    }
}
