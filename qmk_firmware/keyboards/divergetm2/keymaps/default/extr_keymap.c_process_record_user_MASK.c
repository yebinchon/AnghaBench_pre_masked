
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




 int FUNC_0 (int ) ;

 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (unsigned long) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

bool FUNC_2(uint16_t VAR_7, keyrecord_t *VAR_8) {
  if(VAR_3 && VAR_8->event.pressed) VAR_3 = 0;
  switch (VAR_7) {
    case 128:
      if (VAR_8->event.pressed) {



        FUNC_1(1UL<<VAR_2);
      }
      return 0;
      break;
    case 130:
      if (VAR_8->event.pressed) {



        FUNC_1(1UL<<VAR_0);
      }
      return 0;
      break;
    case 129:
      if (VAR_8->event.pressed) {



        FUNC_1(1UL<<VAR_1);
      }
      return 0;
      break;
  }
  return 1;
}
