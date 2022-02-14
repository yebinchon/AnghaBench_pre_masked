
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {int pressed; } ;
struct TYPE_6__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;
struct TYPE_7__ {int nkro; int raw; } ;


 int FUNC_0 (int ) ;



 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 TYPE_4__ VAR_3 ;
 int FUNC_5 (unsigned long) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

bool FUNC_6(uint16_t VAR_7, keyrecord_t *VAR_8) {
  switch (VAR_7) {
    case 128:
      if (VAR_8->event.pressed) {



        FUNC_5(1UL<<VAR_2);
      }
      return 0;
      break;
    case 129:
      if (VAR_8->event.pressed) {



        FUNC_5(1UL<<VAR_1);
      }
      return 0;
      break;
    case 130:
      if (VAR_8->event.pressed) {



        if (!FUNC_2()) {
          FUNC_1();
        }
        VAR_3.raw = FUNC_3();
        VAR_3.nkro = 1;
        FUNC_4(VAR_3.raw);
        FUNC_5(1UL<<VAR_0);
      }
      return 0;
      break;
  }
  return 1;
}
