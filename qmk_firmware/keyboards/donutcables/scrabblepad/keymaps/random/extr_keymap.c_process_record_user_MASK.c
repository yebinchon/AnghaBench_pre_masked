
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
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;

bool FUNC_4(uint16_t VAR_3, keyrecord_t *VAR_4) {
  switch(VAR_3) {
    case 128:
      if (VAR_4->event.pressed) {
        VAR_1 = FUNC_1();
        if (FUNC_0() % 2 > 0) {
          VAR_2 = 1;
          FUNC_2(VAR_0);
        }
        FUNC_2(VAR_1);
      } else {
        if (VAR_2 > 0) {
          FUNC_3(VAR_0);
        }
        FUNC_3(VAR_1);
      }

      return 0;

    default:
        return 1;
  }

  return 1;
}
