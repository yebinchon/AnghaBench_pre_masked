
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


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;

 int VAR_4 ;




 int VAR_5 ;

 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 TYPE_4__ VAR_6 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int ,int ,int ) ;

bool FUNC_11(uint16_t VAR_7, keyrecord_t *VAR_8) {
  switch (VAR_7) {
    case 130:
      if (VAR_8->event.pressed) {
        FUNC_6(1UL<<VAR_1);
      }
      return 0;
    case 134:
      if (VAR_8->event.pressed) {
        FUNC_6(1UL<<VAR_0);
      }
      return 0;
    case 133:
      if (VAR_8->event.pressed) {
        FUNC_5(VAR_4);
        FUNC_10(VAR_4, VAR_5, VAR_3);
      } else {
        FUNC_4(VAR_4);
        FUNC_10(VAR_4, VAR_5, VAR_3);
      }
      return 0;
    case 129:
      if (VAR_8->event.pressed) {
        FUNC_5(VAR_5);
        FUNC_10(VAR_4, VAR_5, VAR_3);
      } else {
        FUNC_4(VAR_5);
        FUNC_10(VAR_4, VAR_5, VAR_3);
      }
      return 0;
    case 128:
      if (VAR_8->event.pressed) {
        FUNC_4(VAR_5);
        FUNC_4(VAR_4);
        FUNC_4(VAR_3);
        FUNC_5(VAR_2);
        if (!FUNC_1()) {
          FUNC_0();
        }
        VAR_6.raw = FUNC_2();
        VAR_6.nkro = 1;
        FUNC_3(VAR_6.raw);
        FUNC_8();
      }
      return 0;
    case 132:
      if (VAR_8->event.pressed) {
        FUNC_9();
        FUNC_4(VAR_2);
      }
      return 0;
    case 131:
      if (VAR_8->event.pressed) {
        FUNC_7();
      }
      return 0;
  }
  return 1;
}
