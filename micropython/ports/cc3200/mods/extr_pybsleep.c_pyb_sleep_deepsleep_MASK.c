
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* rtc_obj; } ;
struct TYPE_3__ {int pwrmode; scalar_t__ irq_enabled; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 TYPE_2__ VAR_4 ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;

void FUNC_7 (void) {

    if (VAR_4.rtc_obj->irq_enabled && (VAR_4.rtc_obj->pwrmode & VAR_2)) {
        if (!FUNC_5()) {

            FUNC_2(VAR_0);
            return;
        }
    } else {

        FUNC_1(VAR_1);
    }

    FUNC_6(VAR_3);
    FUNC_3();

    FUNC_4(1);
    FUNC_0();
}
