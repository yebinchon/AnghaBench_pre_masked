
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;

bool FUNC_5(uint16_t VAR_5, keyrecord_t *VAR_6) {
  switch (VAR_5) {
    case 129:
      if (VAR_6->event.pressed) {
        FUNC_2("mode just switched to qwerty and this is a huge string\n");
        FUNC_3(VAR_3);
      }
      return 0;
      break;
    case 131:
      if (VAR_6->event.pressed) {
        FUNC_3(VAR_1);
      }
      return 0;
      break;
    case 130:
      if (VAR_6->event.pressed) {
        FUNC_1(VAR_2);
        FUNC_4(VAR_2, VAR_4, VAR_0);
      } else {
        FUNC_0(VAR_2);
        FUNC_4(VAR_2, VAR_4, VAR_0);
      }
      return 0;
      break;
    case 128:
      if (VAR_6->event.pressed) {
        FUNC_1(VAR_4);
        FUNC_4(VAR_2, VAR_4, VAR_0);
      } else {
        FUNC_0(VAR_4);
        FUNC_4(VAR_2, VAR_4, VAR_0);
      }
      return 0;
      break;
  }
  return 1;
}
