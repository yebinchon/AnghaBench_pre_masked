
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
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;

bool FUNC_3(uint16_t VAR_4, keyrecord_t *VAR_5) {
  switch (VAR_4) {
    case 128:
      if (VAR_5->event.pressed) {
        if (!VAR_3) {
          VAR_3 = 1;
          FUNC_0(VAR_0);
        }
        VAR_2 = FUNC_1();
        FUNC_0(VAR_1);
      } else {
        FUNC_2(VAR_1);
      }
      break;
  }
  return 1;
}
