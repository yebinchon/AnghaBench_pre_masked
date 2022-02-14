
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
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 int VAR_8 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (int ) ;
 TYPE_3__ VAR_9 ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int ) ;

bool FUNC_11(uint16_t VAR_13, keyrecord_t *VAR_14) {
  switch (VAR_13) {
    case 130:
      if (VAR_14->event.pressed) {



        FUNC_5(1UL<<VAR_7);
      }
      return 0;
      break;
    case 134:
      if (VAR_14->event.pressed) {



        FUNC_5(1UL<<VAR_4);
      }
      return 0;
      break;
    case 133:
      if (VAR_14->event.pressed) {



        FUNC_5(1UL<<VAR_5);
      }
      return 0;
      break;
    case 132:
      if (VAR_14->event.pressed) {


        if (VAR_2) {
        } else {
          VAR_2 = !VAR_2;
          FUNC_7(16);
        }
        FUNC_4(VAR_6);
        FUNC_10(VAR_6, VAR_8, VAR_3);
      } else {
        FUNC_7(VAR_1);
        VAR_2 = 0;
        FUNC_3(VAR_6);
        FUNC_10(VAR_6, VAR_8, VAR_3);
      }
      return 0;
      break;
    case 129:
      if (VAR_14->event.pressed) {


        if (VAR_2) {
        } else {
          VAR_2 = !VAR_2;
          FUNC_7(15);
        }
        FUNC_4(VAR_8);
        FUNC_10(VAR_6, VAR_8, VAR_3);
      } else {
        FUNC_7(VAR_1);
        FUNC_3(VAR_8);
        VAR_2 = 0;
        FUNC_10(VAR_6, VAR_8, VAR_3);
      }
      return 0;
      break;
    case 135:
      if (VAR_14->event.pressed) {
        FUNC_6(VAR_0);



      } else {
        FUNC_9(VAR_0);
      }
      return 0;
      break;

    case 128:
      if (VAR_14->event.pressed) {
        FUNC_7(VAR_1);
        FUNC_8();
        VAR_1 = VAR_9.mode;
      }
      return 0;
      break;
    case 131:
      if (VAR_14->event.pressed){
        FUNC_1("hello world");
      }
      return 0;
  }
  return 1;
}
