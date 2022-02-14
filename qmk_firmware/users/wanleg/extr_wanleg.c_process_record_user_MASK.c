
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


 int VAR_4 ;

 int VAR_5 ;


 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

 int VAR_10 ;

 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

 int VAR_15 ;


 int VAR_16 ;
 int VAR_17 ;

 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int,int) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;

bool FUNC_7(uint16_t VAR_18, keyrecord_t *VAR_19) {
  switch (VAR_18) {
    case 135:
      if (VAR_19->event.pressed) {
        FUNC_6(VAR_13);




      }
      return 0;
      break;
    case 140:
      if (VAR_19->event.pressed) {
        FUNC_6(VAR_12);



      }
      return 0;
      break;
    case 129:
      if (VAR_19->event.pressed) {
        FUNC_6(VAR_16);




      }
      return 0;
      break;
    case 136:
    if (VAR_19->event.pressed) {
      FUNC_6(VAR_4);
      }
      return 0;
      break;
    case 137:
    if (VAR_19->event.pressed) {
      FUNC_6(VAR_5);
      }
      return 0;
      break;
    case 139:
    if (VAR_19->event.pressed) {
      FUNC_6(VAR_2);
      }
      return 0;
      break;
    case 133:
      if (VAR_19->event.pressed) {
        FUNC_1(VAR_9);
      } else {
        FUNC_0(VAR_9);
      }
      return 0;
      break;
    case 132:
      if (VAR_19->event.pressed) {
        FUNC_1(VAR_10);
      } else {
        FUNC_0(VAR_10);
      }
      return 0;
      break;
 case 138:
      if (VAR_19->event.pressed) {
        FUNC_1(VAR_3);
      } else {
        FUNC_0(VAR_3);
      }
      return 0;
      break;
 case 143:
      if (VAR_19->event.pressed) {
        FUNC_1(VAR_0);
      } else {
        FUNC_0(VAR_0);
      }
      return 0;
      break;
 case 142:
      if (VAR_19->event.pressed) {
        FUNC_1(VAR_1);
      } else {
        FUNC_0(VAR_1);
      }
      return 0;
      break;
  case 128:
      if (VAR_19->event.pressed) {
        FUNC_1(VAR_17);
      } else {
        FUNC_0(VAR_17);
      }
      return 0;
      break;
  case 131:
      if (VAR_19->event.pressed) {
        FUNC_1(VAR_14);
      } else {
        FUNC_0(VAR_14);
      }
      return 0;
      break;
 case 130:
      if (VAR_19->event.pressed) {
        FUNC_1(VAR_15);
      } else {
        FUNC_0(VAR_15);
      }
      return 0;
      break;
 case 141:
      if (VAR_19->event.pressed) {
        FUNC_1(VAR_11);
      } else {
        FUNC_0(VAR_11);
      }
      return 0;
      break;

  case 134:
      if (VAR_19->event.pressed) {





      }
      return 1;
      break;
  }
  return 1;
}
