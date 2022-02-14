
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


 int VAR_0 ;




 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_1 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;

bool FUNC_8(uint16_t VAR_2, keyrecord_t *VAR_3) {
  static uint16_t VAR_4;
  switch (VAR_2) {
    case 130:
      return 0;
    case 131:
      if (VAR_3->event.pressed) {
          VAR_4 = FUNC_7();
      } else {
          if (FUNC_6(VAR_4) >= 500) {
              FUNC_3();
          }
      }
      return 0;







    case 129:
      return 0;
  }
  return 1;
}
