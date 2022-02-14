
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {int pressed; } ;
struct TYPE_6__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;
struct TYPE_7__ {int mode; } ;



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
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_3__ VAR_10 ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ) ;

bool FUNC_9(uint16_t VAR_11, keyrecord_t *VAR_12) {
  switch (VAR_11) {
    case 131:
      if (VAR_12->event.pressed) {
        FUNC_6(VAR_8);
      }
      return 0;
      break;
    case 132:
      if (VAR_12->event.pressed) {


        if (VAR_2) {} else {
          VAR_3 = VAR_10.mode;
          VAR_2 = 1;
        }
        if (VAR_4) {
        } else {
          VAR_4 = !VAR_4;
          FUNC_4(16);
        }
        FUNC_2(VAR_6);
        FUNC_8(VAR_6, VAR_9, VAR_5);
      } else {
        FUNC_4(VAR_3);
        VAR_4 = 0;
        FUNC_1(VAR_6);
        FUNC_8(VAR_6, VAR_9, VAR_5);
      }
      return 0;
      break;
    case 130:
      if (VAR_12->event.pressed) {


        if (VAR_2) {} else {
          VAR_3 = VAR_10.mode;
          VAR_2 = 1;
        }
        if (VAR_4) {
        } else {
          VAR_4 = !VAR_4;
          FUNC_4(15);
        }
        FUNC_2(VAR_9);
        FUNC_8(VAR_6, VAR_9, VAR_5);
      } else {
        FUNC_4(VAR_3);
        FUNC_1(VAR_9);
        VAR_4 = 0;
        FUNC_8(VAR_6, VAR_9, VAR_5);
      }
      return 0;
      break;
    case 133:
      if (VAR_12->event.pressed) {
        FUNC_3(VAR_0);



      } else {
        FUNC_7(VAR_0);
      }
      return 0;
      break;

    case 128:
      if (VAR_12->event.pressed) {
        if (VAR_2) {} else {
          VAR_3 = VAR_10.mode;
          VAR_2 = 1;
        }
        VAR_1 = !VAR_1;
        if (VAR_1) {
        FUNC_4(4);
        FUNC_2(VAR_7);
        } else {
        FUNC_4(VAR_3);
        FUNC_1(VAR_7); }
      }
      return 0;
      break;
    case 129:

      if (VAR_12->event.pressed) {
        FUNC_4(VAR_3);
        FUNC_5();
        VAR_3 = VAR_10.mode;
      }
      return 0;
      break;
  }
  return 1;
}
