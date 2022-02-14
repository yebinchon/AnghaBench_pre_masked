
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int speed; int val; int mode; int enable; } ;


 int FUNC_0 (char*,...) ;
 TYPE_1__ VAR_0 ;

void FUNC_1(void) {
    FUNC_0("led_matrix_config eeprom\n");
    FUNC_0("led_matrix_config.enable = %d\n", VAR_0.enable);
    FUNC_0("led_matrix_config.mode = %d\n", VAR_0.mode);
    FUNC_0("led_matrix_config.val = %d\n", VAR_0.val);
    FUNC_0("led_matrix_config.speed = %d\n", VAR_0.speed);
}
