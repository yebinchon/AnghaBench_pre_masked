
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int count; } ;
typedef TYPE_1__ qk_tap_dance_state_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;

void FUNC_7(qk_tap_dance_state_t *VAR_2, void *VAR_3) {
    bool VAR_4 = VAR_2->count == 2;


    uint8_t VAR_5 = FUNC_5();
    bool VAR_6 = 0;

    if (FUNC_4() & VAR_0) {
        VAR_6 = 1;
    } else if (VAR_5 & VAR_0) {
        FUNC_6(VAR_5 & ~VAR_0);
        VAR_6 = 1;
    }

    if (VAR_4) {
        if (VAR_6) {
            FUNC_0(FUNC_2(FUNC_3(VAR_1)));
        } else {
            FUNC_0(FUNC_1("v"));
        }
    } else {
        if (VAR_6) {
            FUNC_0(FUNC_1(FUNC_3(VAR_1)));
        } else {
            FUNC_0(FUNC_1("c"));
        }
    }
}
