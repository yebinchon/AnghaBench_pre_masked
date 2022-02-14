
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int mode; int val; int sat; int hue; int raw; int enable; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int) ;

void FUNC_5(uint8_t VAR_2, bool VAR_3) {
  if (!VAR_1.enable) {
    return;
  }
  if (VAR_2 < 1) {
    VAR_1.mode = 1;
  } else if (VAR_2 > VAR_0) {
    VAR_1.mode = VAR_0;
  } else {
    VAR_1.mode = VAR_2;
  }
  if (VAR_3) {
    FUNC_0(VAR_1.raw);
    FUNC_4("rgblight mode [EEPROM]: %u\n", VAR_1.mode);
  } else {
    FUNC_4("rgblight mode [NOEEPROM]: %u\n", VAR_1.mode);
  }
  if (VAR_1.mode == 1) {



  } else if ((VAR_1.mode >= 2 && VAR_1.mode <= 24) ||
      VAR_1.mode == 35 ) {
  } else if (VAR_1.mode >= 25 && VAR_1.mode <= 34) {





  }
  FUNC_1(VAR_1.hue, VAR_1.sat, VAR_1.val);
}
