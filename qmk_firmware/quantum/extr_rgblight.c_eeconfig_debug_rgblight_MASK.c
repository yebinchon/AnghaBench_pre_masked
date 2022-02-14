
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int speed; int val; int sat; int hue; int mode; int enable; } ;


 int FUNC_0 (char*,...) ;
 TYPE_1__ VAR_0 ;

void FUNC_1(void) {
    FUNC_0("rgblight_config EEPROM:\n");
    FUNC_0("rgblight_config.enable = %d\n", VAR_0.enable);
    FUNC_0("rghlight_config.mode = %d\n", VAR_0.mode);
    FUNC_0("rgblight_config.hue = %d\n", VAR_0.hue);
    FUNC_0("rgblight_config.sat = %d\n", VAR_0.sat);
    FUNC_0("rgblight_config.val = %d\n", VAR_0.val);
    FUNC_0("rgblight_config.speed = %d\n", VAR_0.speed);
}
