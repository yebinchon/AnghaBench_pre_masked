
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



 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (unsigned long) ;
 int VAR_9 ;
 int FUNC_4 (int ,int ,int ) ;

bool FUNC_5(uint16_t VAR_10, keyrecord_t *VAR_11) {
  switch (VAR_10) {
    case 130:
      if (VAR_11->event.pressed) {



        FUNC_3(1UL<<VAR_6);
      }
      return 0;
      break;
    case 134:
      if (VAR_11->event.pressed) {



        FUNC_3(1UL<<VAR_2);
      }
      return 0;
      break;
    case 131:
      if (VAR_11->event.pressed) {



        FUNC_3(1UL<<VAR_5);
      }
      return 0;
      break;
    case 135:
      if (VAR_11->event.pressed) {



        FUNC_3(1UL<<VAR_1);
      }
      return 0;
      break;
    case 128:
      if (VAR_11->event.pressed) {



        FUNC_3(1UL<<VAR_8);
      }
      return 0;
      break;
    case 133:
      if (VAR_11->event.pressed) {



        FUNC_3(1UL<<VAR_3);
      }
      return 0;
      break;
    case 132:
      if (VAR_11->event.pressed) {
        FUNC_2(VAR_4);
        FUNC_4(VAR_4, VAR_7, VAR_0);
      } else {
        FUNC_1(VAR_4);
        FUNC_4(VAR_4, VAR_7, VAR_0);
      }
      return 0;
      break;
    case 129:
      if (VAR_11->event.pressed) {
        FUNC_2(VAR_7);
        FUNC_4(VAR_4, VAR_7, VAR_0);
      } else {
        FUNC_1(VAR_7);
        FUNC_4(VAR_4, VAR_7, VAR_0);
      }
      return 0;
      break;
    case 136:
      if (VAR_11->event.pressed) {
        FUNC_2(VAR_0);
      } else {
        FUNC_1(VAR_0);
      }
      return 0;
      break;
  }
  return 1;
}
