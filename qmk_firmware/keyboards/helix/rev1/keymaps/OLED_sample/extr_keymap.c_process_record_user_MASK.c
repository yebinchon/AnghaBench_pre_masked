
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


 int FUNC_0 (int ) ;


 int VAR_1 ;

 int VAR_2 ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 int VAR_9 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (int ) ;
 TYPE_3__ VAR_10 ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int ) ;

bool FUNC_11(uint16_t VAR_14, keyrecord_t *VAR_15) {
  switch (VAR_14) {
    case 130:
      if (VAR_15->event.pressed) {



        FUNC_5(1UL<<VAR_8);
      }
      return 0;
      break;
    case 134:
      if (VAR_15->event.pressed) {



        FUNC_5(1UL<<VAR_5);
      }
      return 0;
      break;
    case 133:
      if (VAR_15->event.pressed) {



        FUNC_5(1UL<<VAR_6);
      }
      return 0;
      break;
    case 132:
      if (VAR_15->event.pressed) {


        if (VAR_3) {
        } else {
          VAR_3 = !VAR_3;
          FUNC_7(VAR_1 + 1);
        }
        FUNC_4(VAR_7);
        FUNC_10(VAR_7, VAR_9, VAR_4);
      } else {
        FUNC_7(VAR_2);
        VAR_3 = 0;
        FUNC_3(VAR_7);
        FUNC_10(VAR_7, VAR_9, VAR_4);
      }
      return 0;
      break;
    case 129:
      if (VAR_15->event.pressed) {


        if (VAR_3) {
        } else {
          VAR_3 = !VAR_3;
          FUNC_7(VAR_1);
        }
        FUNC_4(VAR_9);
        FUNC_10(VAR_7, VAR_9, VAR_4);
      } else {
        FUNC_7(VAR_2);
        FUNC_3(VAR_9);
        VAR_3 = 0;
        FUNC_10(VAR_7, VAR_9, VAR_4);
      }
      return 0;
      break;
    case 136:
        if (VAR_15->event.pressed) {
          FUNC_4(VAR_4);
        } else {
          FUNC_3(VAR_4);
        }
        return 0;
        break;
    case 135:
      if (VAR_15->event.pressed) {
        FUNC_6(VAR_0);



      } else {
        FUNC_9(VAR_0);
      }
      return 0;
      break;

    case 128:
      if (VAR_15->event.pressed) {
        FUNC_7(VAR_2);
        FUNC_8();
        VAR_2 = VAR_10.mode;
      }
      return 0;
      break;
    case 131:
      if (VAR_15->event.pressed) {
        FUNC_1("hello world");
      }
      return 0;
  }
  return 1;
}
