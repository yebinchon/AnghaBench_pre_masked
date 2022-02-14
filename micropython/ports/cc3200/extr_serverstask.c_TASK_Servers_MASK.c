
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int do_enable; int enabled; int do_disable; int do_reset; int do_wlan_cycle_power; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;
 int FUNC_9 (int) ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 () ;

void FUNC_17 (void *VAR_7) {

    bool VAR_8 = 0;

    FUNC_10 (VAR_5, VAR_2);
    FUNC_10 (VAR_4, VAR_1);

    FUNC_13();
    FUNC_2();

    for ( ;; ) {

        if (VAR_3.do_enable) {

            FUNC_12();
            FUNC_1();

            VAR_3.enabled = 1;
            VAR_3.do_enable = 0;
        }
        else if (VAR_3.do_disable) {

            FUNC_11();
            FUNC_0();

            VAR_3.do_disable = 0;
            VAR_3.enabled = 0;
        }
        else if (VAR_3.do_reset) {

            VAR_3.do_reset = 0;
            if (VAR_3.enabled) {
                FUNC_14();
                FUNC_3();
            }


            FUNC_5();
        }

        if (VAR_8) {
            FUNC_15();
        }
        else {
            FUNC_4();
        }

        if (VAR_6) {
            FUNC_9(1);
            FUNC_6();
            FUNC_9(0);
            FUNC_7(VAR_0 * 2);
            if (VAR_3.do_wlan_cycle_power) {
                VAR_3.do_wlan_cycle_power = 0;
                FUNC_16();
            }
            VAR_6 = 0;

        }


        FUNC_8();


        VAR_8 = VAR_8 ? 0 : 1;
        FUNC_7(VAR_0);
    }
}
