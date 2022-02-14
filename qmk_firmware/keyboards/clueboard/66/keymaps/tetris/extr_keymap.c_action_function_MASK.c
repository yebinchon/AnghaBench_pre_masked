
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ) ;
 int VAR_6 ;

void FUNC_5(keyrecord_t *VAR_7, uint8_t VAR_8, uint8_t VAR_9) {
  static uint8_t VAR_10;
  static bool VAR_11;

  switch (VAR_8) {
    case 0:

      if (VAR_5) {
        VAR_5 = 0;
        return;
      }



      VAR_10 = FUNC_2()&VAR_0;

      if (VAR_7->event.pressed) {


        if (VAR_10) {
          VAR_11 = 1;
          FUNC_0(VAR_2);
          FUNC_3();
        } else {
          FUNC_0(VAR_1);
          FUNC_3();
        }
      } else {


        if (VAR_11) {
          VAR_11 = 0;
          FUNC_1(VAR_2);
          FUNC_3();
        } else {
          FUNC_1(VAR_1);
          FUNC_3();
        }
      }
      break;
  case 1:
      if (VAR_7->event.pressed) {
        VAR_5 = 1;
        VAR_6 = 0;
        VAR_4 = 0;

        FUNC_4(VAR_3);
      }
      break;
  }
}
