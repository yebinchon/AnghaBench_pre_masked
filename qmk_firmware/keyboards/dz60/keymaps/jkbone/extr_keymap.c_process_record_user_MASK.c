
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {scalar_t__ pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;






 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int,int,int) ;

bool FUNC_3(uint16_t VAR_0, keyrecord_t *VAR_1) {
  if (VAR_1->event.pressed) {
    switch(VAR_0) {
      case 129:
        FUNC_1();
        FUNC_2(0, 204, 33);
        break;
      case 130:
        FUNC_1();
        FUNC_2(229, 65, 0);
        break;
      case 128:
        FUNC_1();
        FUNC_2(255, 255, 255);
        break;
      case 131:
        FUNC_0();
        break;
    }
  }
  return 1;
}
