
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_4__ {scalar_t__ pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int VAR_5 ;
 int FUNC_4 () ;
 int FUNC_5 () ;

bool FUNC_6(uint16_t VAR_6, keyrecord_t *VAR_7) {
    if (VAR_6 == VAR_1 && VAR_7->event.pressed) {
        FUNC_2();
        return 0;
    }

    if (VAR_6 == VAR_0 && VAR_7->event.pressed) {
        FUNC_1();
        return 0;
    }

    if (VAR_6 == VAR_2 && VAR_7->event.pressed) {
        if (FUNC_3()) {
            FUNC_1();
        } else {
            FUNC_2();
        }
        return 0;
    }

    if (VAR_6 == VAR_4 && VAR_7->event.pressed) {
        FUNC_5();
        FUNC_0(VAR_5);
        return 0;
    }

    if (VAR_6 == VAR_3 && VAR_7->event.pressed) {
        FUNC_4();
        FUNC_0(VAR_5);
        return 0;
    }

    return 1;
}
