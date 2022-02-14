
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int enable; int mode; } ;


 int FUNC_0 (char*,int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int ) ;

void FUNC_2(void) {
    VAR_0.enable = 1;
    FUNC_0("rgblight enable [NOEEPROM]: rgblight_config.enable = %u\n", VAR_0.enable);
    FUNC_1(VAR_0.mode);
}
