
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



 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;

bool FUNC_3(uint16_t VAR_0, keyrecord_t *VAR_1) {
  bool VAR_2 = 1;


  switch (VAR_0) {
    case 128:
      if (VAR_1->event.pressed && FUNC_1() && !FUNC_2()) {
        FUNC_0();
        VAR_2 = 0;
      }
      break;
  }
  return VAR_2;
}
