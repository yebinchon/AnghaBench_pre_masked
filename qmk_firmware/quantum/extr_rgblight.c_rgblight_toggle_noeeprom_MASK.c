
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ enable; } ;


 int FUNC_0 (char*,int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;

void FUNC_3(void) {
    FUNC_0("rgblight toggle [NOEEPROM]: rgblight_config.enable = %u\n", !VAR_0.enable);
    if (VAR_0.enable) {
        FUNC_1();
    } else {
        FUNC_2();
    }
}
