
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
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (unsigned long) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ,int ,int ) ;

bool FUNC_5(uint16_t VAR_10, keyrecord_t *VAR_11) {
  switch (VAR_10) {
    case 129:
      if (VAR_11->event.pressed) {



        FUNC_3(1UL<<VAR_5);
      }
      return 0;
      break;
    case 133:
      if (VAR_11->event.pressed) {



        FUNC_3(1UL<<VAR_1);
      }
      return 0;
      break;
    case 132:
      if (VAR_11->event.pressed) {



        FUNC_3(1UL<<VAR_2);
      }
      return 0;
      break;
    case 130:
      if (VAR_11->event.pressed) {
        FUNC_2(VAR_4);
        FUNC_4(VAR_4, VAR_6, VAR_0);
      } else {
        FUNC_1(VAR_4);
        FUNC_4(VAR_4, VAR_6, VAR_0);
      }
      return 0;
      break;
    case 128:
      if (VAR_11->event.pressed) {
        FUNC_2(VAR_6);
        FUNC_4(VAR_4, VAR_6, VAR_0);
      } else {
        FUNC_1(VAR_6);
        FUNC_4(VAR_4, VAR_6, VAR_0);
      }
      return 0;
      break;
    case 131:
      if (VAR_11->event.pressed) {
        FUNC_2(VAR_3);
      } else {
        FUNC_1(VAR_3);
      }
      return 0;
      break;
    case 134:
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
