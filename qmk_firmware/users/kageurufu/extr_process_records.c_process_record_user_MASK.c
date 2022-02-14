
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





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int,TYPE_2__*) ;
 scalar_t__ FUNC_2 (int,TYPE_2__*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;

bool FUNC_5(uint16_t VAR_2, keyrecord_t *VAR_3) {
  switch (VAR_2) {
    case 129:
      if (VAR_3->event.pressed) {
        FUNC_4(VAR_1);
      }
      return 0;
      break;
    case 130:
      if(VAR_3->event.pressed) {
        FUNC_4(VAR_0);
      }
      return 0;
      break;
    case 128:






      break;
  }


  return FUNC_1(VAR_2, VAR_3) &&



    1;
}
