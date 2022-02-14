
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




 int FUNC_0 (int ) ;

 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (unsigned long) ;
 int VAR_3 ;
 int VAR_4 ;

bool FUNC_4(uint16_t VAR_5, keyrecord_t *VAR_6) {
  switch (VAR_5) {
    case 130:
      if (VAR_6->event.pressed) {



        FUNC_3(1UL<<VAR_0);
      }
      break;
    case 129:
      if (VAR_6->event.pressed) {



        FUNC_3(1UL<<VAR_1);
      }
      break;
    case 128:
      if (VAR_6->event.pressed) {
        FUNC_2(VAR_2);
      } else {
        FUNC_1(VAR_2);
      }
      break;
    default:
      return 1;
      break;
  }

  return 0;
}
