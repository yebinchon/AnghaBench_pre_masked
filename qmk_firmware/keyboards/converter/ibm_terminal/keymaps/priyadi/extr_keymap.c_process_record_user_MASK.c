
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


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;







 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int ) ;

bool FUNC_2(uint16_t VAR_7, keyrecord_t *VAR_8) {
  switch (VAR_7) {

    case 132:
      if (VAR_8->event.pressed) {
        FUNC_0(1UL<<VAR_2);
      }
      return 0;
      break;
    case 134:
      if (VAR_8->event.pressed) {
        FUNC_0(1UL<<VAR_0);
      }
      return 0;
      break;
    case 131:
      if (VAR_8->event.pressed) {
        FUNC_0(1UL<<VAR_6);
      }
      return 0;
      break;
    case 133:
      if (VAR_8->event.pressed) {
        FUNC_0(1UL<<VAR_1);
      }
      return 0;
      break;


    case 130:
      FUNC_1(VAR_3);
      return 0;
      break;
    case 128:
      FUNC_1(VAR_5);
      return 0;
      break;
    case 129:
      FUNC_1(VAR_4);
      return 0;
      break;

  }
  return 1;
}
