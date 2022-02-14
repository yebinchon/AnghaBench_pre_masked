
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode; int raw; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 TYPE_1__ VAR_1 ;
 int FUNC_6 () ;
 int FUNC_7 () ;

void FUNC_8(void) {
    VAR_0 = 1;
    if (!FUNC_4()) {
        FUNC_3();
    }
    VAR_1.raw = FUNC_5();
    if (VAR_1.mode < 1) {
        VAR_1.mode = 1;
    }
    if (!VAR_1.mode) {
        FUNC_1("No haptic config found in eeprom, setting default configs\n");
        FUNC_6();
    }
    FUNC_2();
}
