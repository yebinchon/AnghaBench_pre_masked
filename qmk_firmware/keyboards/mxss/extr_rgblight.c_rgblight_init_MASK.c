
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode; scalar_t__ enable; void* raw; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 void* FUNC_4 () ;
 int FUNC_5 () ;
 TYPE_1__ VAR_1 ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;

void FUNC_8(void) {
  VAR_0 = 1;
  FUNC_0("rgblight_init called.\n");
  FUNC_0("rgblight_init start!\n");
  if (!FUNC_3()) {
    FUNC_0("rgblight_init eeconfig is not enabled.\n");
    FUNC_2();
    FUNC_5();
  }
  VAR_1.raw = FUNC_4();
  if (!VAR_1.mode) {
    FUNC_0("rgblight_init rgblight_config.mode = 0. Write default values to EEPROM.\n");
    FUNC_5();
    VAR_1.raw = FUNC_4();
  }
  FUNC_1();





  if (VAR_1.enable) {
    FUNC_6(VAR_1.mode);
  }
}
