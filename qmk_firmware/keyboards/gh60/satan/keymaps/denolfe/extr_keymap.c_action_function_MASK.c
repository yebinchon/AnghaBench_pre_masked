
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
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;

void FUNC_12(keyrecord_t *VAR_3, uint8_t VAR_4, uint8_t VAR_5) {
  static uint8_t VAR_6;
  switch (VAR_4) {
    case 128:
      VAR_6 = FUNC_2()&VAR_2;
      if (VAR_3->event.pressed) {
        if (VAR_6) {
          FUNC_0(VAR_1);
          FUNC_11();
        } else {
          FUNC_0(VAR_0);
          FUNC_11();
        }
      } else {
        if (VAR_6) {
          FUNC_1(VAR_1);
          FUNC_11();
        } else {
          FUNC_1(VAR_0);
          FUNC_11();
        }
      }
      break;
  }
}
