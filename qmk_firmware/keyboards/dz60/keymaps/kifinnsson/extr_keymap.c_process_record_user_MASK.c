
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
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;

bool FUNC_4(uint16_t VAR_5, keyrecord_t *VAR_6) {
  switch (VAR_5) {

    case 130:
      if (VAR_6->event.pressed) {
        FUNC_0("");
      } else {

      }
      return 0;
    case 144:
      if (VAR_6->event.pressed) {
        FUNC_0("");
      } else {

      }
      return 0;
    case 140:
      if (VAR_6->event.pressed) {
        FUNC_0("");
      } else {

      }
      return 0;
    case 139:
      if (VAR_6->event.pressed) {
        FUNC_0("");
      } else {

      }
      return 0;
    case 138:
      if (VAR_6->event.pressed) {
        FUNC_0("");
      } else {

      }
      return 0;
    case 137:
      if (VAR_6->event.pressed) {
        FUNC_0("");
      } else {

      }
      return 0;
    case 136:
      if (VAR_6->event.pressed) {
        FUNC_0("");
      } else {

      }
      return 0;
    case 135:
      if (VAR_6->event.pressed) {
        FUNC_0("");
      } else {

      }
      return 0;
    case 134:
      if (VAR_6->event.pressed) {
        FUNC_0("");
      } else {

      }
      return 0;
    case 133:
      if (VAR_6->event.pressed) {
        FUNC_0("");
      } else {

      }
      return 0;
    case 143:
      if (VAR_6->event.pressed) {
        FUNC_0("");
      } else {

      }
      return 0;
    case 142:
      if (VAR_6->event.pressed) {
        FUNC_0("");
      } else {

      }
      return 0;
    case 141:
      if (VAR_6->event.pressed) {
        FUNC_0("");
      } else {

      }
      return 0;
    case 132:
      if (VAR_6->event.pressed) {
        FUNC_0("");
      } else {

      }
      return 0;
    case 131:
      if (VAR_6->event.pressed) {
        FUNC_0("");
      } else {

      }
      return 0;



    case 129:
      if (VAR_6->event.pressed) {
        if (!VAR_3) {
          VAR_3 = 1;
          FUNC_1(VAR_1);
        }
        VAR_4 = FUNC_3();
        FUNC_2(VAR_0);
      } else {

      }
      return 0;


    case 128:
      if (VAR_6->event.pressed) {
        if (!VAR_3) {
          VAR_3 = 1;
          FUNC_1(VAR_1);
        }
        VAR_4 = FUNC_3();
        FUNC_2(VAR_2);
      } else {

      }
      return 0;
    default:
      return 1;
  }
}
