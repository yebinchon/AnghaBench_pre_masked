
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
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 int VAR_8 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (int ,int ,int ) ;

bool FUNC_5(uint16_t VAR_9, keyrecord_t *VAR_10) {
  switch (VAR_9) {
    case 129:
      if (VAR_10->event.pressed) {
        FUNC_3(1UL<<VAR_7);
      }
      return 0;
      break;
    case 135:
      if (VAR_10->event.pressed) {
        FUNC_3(1UL<<VAR_2);
      }
      return 0;
      break;
    case 132:
      if (VAR_10->event.pressed) {
        FUNC_3(1UL<<VAR_4);
      }
      return 0;
      break;
    case 130:
      if (VAR_10->event.pressed) {
        FUNC_2(VAR_6);
        FUNC_4(VAR_6, VAR_8, VAR_1);
      } else {
        FUNC_1(VAR_6);
        FUNC_4(VAR_6, VAR_8, VAR_1);
      }
      return 0;
      break;
    case 128:
      if (VAR_10->event.pressed) {
        FUNC_2(VAR_8);
        FUNC_4(VAR_6, VAR_8, VAR_1);
      } else {
        FUNC_1(VAR_8);
        FUNC_4(VAR_6, VAR_8, VAR_1);
      }
      return 0;
      break;
    case 136:
      if (VAR_10->event.pressed) {
        FUNC_2(VAR_1);
      } else {
        FUNC_1(VAR_1);
      }
      return 0;
      break;



 case 131:
  if (VAR_10->event.pressed) {







  }
  return 1;


 case 133:
  if (VAR_10->event.pressed) {

  } else {





   FUNC_1(VAR_5);
   FUNC_2(VAR_3);
  }

 case 134:
  if (VAR_10->event.pressed) {






   FUNC_1(VAR_3);
  }
  }
  return 1;
}
