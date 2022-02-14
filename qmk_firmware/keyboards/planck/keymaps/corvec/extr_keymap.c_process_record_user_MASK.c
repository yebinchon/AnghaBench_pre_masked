
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
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ) ;

bool FUNC_8(uint16_t VAR_7, keyrecord_t *VAR_8) {
  switch (VAR_7) {
    case 129:
      if (VAR_8->event.pressed) {
        FUNC_3("mode just switched to qwerty and this is a huge string\n");
        FUNC_5(VAR_5);
      }
      return 0;
      break;
    case 131:
      if (VAR_8->event.pressed) {
        FUNC_5(VAR_3);
      }
      return 0;
      break;
    case 130:
      if (VAR_8->event.pressed) {
        FUNC_2(VAR_4);
        FUNC_7(VAR_4, VAR_6, VAR_2);
      } else {
        FUNC_1(VAR_4);
        FUNC_7(VAR_4, VAR_6, VAR_2);
      }
      return 0;
      break;
    case 128:
      if (VAR_8->event.pressed) {
        FUNC_2(VAR_6);
        FUNC_7(VAR_4, VAR_6, VAR_2);
      } else {
        FUNC_1(VAR_6);
        FUNC_7(VAR_4, VAR_6, VAR_2);
      }
      return 0;
      break;
    case 132:
      if (VAR_8->event.pressed) {
        FUNC_4(VAR_0);



        VAR_1 &= ~(1<<6);
      } else {
        FUNC_6(VAR_0);
        VAR_1 |= (1<<6);
      }
      return 0;
      break;
  }
  return 1;
}
