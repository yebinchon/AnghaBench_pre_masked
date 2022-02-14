
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int enable; int mode; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;

void FUNC_2(void) {
  VAR_0.enable = 1;


  FUNC_1("rgblight enable [EEPROM]: rgblight_config.enable = %u\n", VAR_0.enable);
  FUNC_0(VAR_0.mode);
}
