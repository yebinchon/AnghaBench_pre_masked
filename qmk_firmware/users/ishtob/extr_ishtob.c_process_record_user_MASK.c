
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_6__ {int pressed; } ;
struct TYPE_7__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;



 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int,TYPE_2__*) ;
 scalar_t__ FUNC_2 (int,TYPE_2__*) ;
 int FUNC_3 () ;

bool FUNC_4(uint16_t VAR_0, keyrecord_t *VAR_1) {
    switch (VAR_0) {
    case 128:
      if (VAR_1->event.pressed) {
        FUNC_0();
        FUNC_3();
      }
      return 0;
      break;
    }
  return FUNC_1(VAR_0, VAR_1) && FUNC_2(VAR_0, VAR_1);
}
