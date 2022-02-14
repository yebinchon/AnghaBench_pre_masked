
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint ;
typedef int nlr_buf_t ;
struct TYPE_6__ {TYPE_2__* wlan_obj; TYPE_1__* rtc_obj; } ;
struct TYPE_5__ {scalar_t__ irq_enabled; } ;
struct TYPE_4__ {int pwrmode; scalar_t__ irq_enabled; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 () ;
 TYPE_3__ VAR_4 ;
 int FUNC_8 () ;
 int FUNC_9 () ;

void FUNC_10 (void) {
    nlr_buf_t VAR_5;


    if (VAR_4.rtc_obj->irq_enabled && (VAR_4.rtc_obj->pwrmode & VAR_3)) {
        if (!FUNC_9()) {

            FUNC_4(VAR_0);
            return;
        }
    } else {

        FUNC_0(VAR_2);
    }


    if (VAR_4.wlan_obj->irq_enabled) {
        FUNC_1 (VAR_1);
        FUNC_8();
    } else {
        FUNC_0 (VAR_1);
    }



    uint VAR_6 = FUNC_2();
    if (FUNC_6(&VAR_5) == 0) {
        FUNC_7();
        FUNC_5();
    }


    FUNC_3(VAR_6);
}
