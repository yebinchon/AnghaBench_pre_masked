
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
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

bool FUNC_4(uint16_t VAR_1, keyrecord_t *VAR_2) {
  switch (VAR_1) {
    case 128:
      if (VAR_2->event.pressed) {
        FUNC_3(VAR_0);
        FUNC_1();
      } else {
        FUNC_2(VAR_0);
        FUNC_0();
      }
      return 0;
      break;
  }
  return 1;
}
