
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

 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;

bool FUNC_7(uint16_t VAR_5, keyrecord_t *VAR_6) {
  switch(VAR_5) {
    case 130:
      if (VAR_6->event.pressed) {
        if (FUNC_1() & (FUNC_0(VAR_1) | FUNC_0(VAR_2))) {
          FUNC_4(VAR_0);
          return 0;
        }
      } else {
        FUNC_5(VAR_0);
      }
      return 1;
    case 128:
      if (VAR_6->event.pressed) {
        FUNC_3(VAR_3);
      } else {
        FUNC_2(VAR_3);
      }
      FUNC_6();
      return 0;
    case 129:
      if (VAR_6->event.pressed) {
        FUNC_3(VAR_4);
      } else {
        FUNC_2(VAR_4);
      }
      FUNC_6();
      return 0;
    default:
      return 1;
  }
}
