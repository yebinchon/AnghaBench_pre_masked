
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int enable; int val; int raw; scalar_t__ speed; int mode; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 TYPE_1__ VAR_1 ;

void FUNC_2(void) {
    FUNC_0("eeconfig_update_led_matrix_default\n");
    VAR_1.enable = 1;
    VAR_1.mode = VAR_0;
    VAR_1.val = 128;
    VAR_1.speed = 0;
    FUNC_1(VAR_1.raw);
}
