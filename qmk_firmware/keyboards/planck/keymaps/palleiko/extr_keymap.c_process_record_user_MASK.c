
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;

bool FUNC_5(uint16_t VAR_9, keyrecord_t *VAR_10) {
  switch (VAR_9) {
    case 130:
      if (VAR_10->event.pressed) {
        FUNC_2("mode just switched to qwerty and this is a huge string\n");
        FUNC_3(VAR_6);
      }
      return 0;
      break;
    case 135:
      if (VAR_10->event.pressed) {
        FUNC_3(VAR_1);
      }
      return 0;
      break;
    case 134:
      if (VAR_10->event.pressed) {
        FUNC_3(VAR_2);
      }
      return 0;
      break;
    case 133:
      if (VAR_10->event.pressed) {
        FUNC_1(VAR_3);
        FUNC_4(VAR_3, VAR_7, VAR_0);
      } else {
        FUNC_0(VAR_3);
        FUNC_4(VAR_3, VAR_7, VAR_0);
      }
      return 0;
      break;
    case 129:
      if (VAR_10->event.pressed) {
        FUNC_1(VAR_7);
        FUNC_4(VAR_3, VAR_7, VAR_0);
      } else {
        FUNC_0(VAR_7);
        FUNC_4(VAR_3, VAR_7, VAR_0);
      }
      return 0;
      break;
    case 131:
      if (VAR_10->event.pressed) {
        FUNC_1(VAR_5);
      } else {
        FUNC_0(VAR_5);
      }
      return 0;
      break;
    case 132:
      if (VAR_10->event.pressed) {
        FUNC_1(VAR_4);
      } else {
        FUNC_0(VAR_4);
      }
      return 0;
      break;
    case 128:
      if (VAR_10->event.pressed) {
        FUNC_1(VAR_8);
      } else {
        FUNC_0(VAR_8);
      }
      return 0;
      break;
    }
  return 1;
}
