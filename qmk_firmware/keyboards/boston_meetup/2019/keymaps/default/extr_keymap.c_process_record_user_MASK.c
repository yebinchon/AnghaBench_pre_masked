
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {int pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;





 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

bool FUNC_3(uint16_t VAR_2, keyrecord_t *VAR_3) {
  switch (VAR_2) {
    case 130:
            if (VAR_3->event.pressed) {

        FUNC_0("QMK is the best thing ever!");
      } else {

      }
      break;
    case 129:
      if (VAR_3->event.pressed) {


        FUNC_2(VAR_0);
      } else {
        FUNC_1(VAR_0);
      }
      return 0;
      break;
    case 128:
      if (VAR_3->event.pressed) {


        FUNC_2(VAR_1);
      } else {
        FUNC_1(VAR_1);
      }
      return 0;
      break;
  }
  return 1;
}
