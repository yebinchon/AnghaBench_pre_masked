
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_6__ {int pressed; } ;
struct TYPE_7__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;
struct TYPE_9__ {int swap_lalt_lgui; } ;
struct TYPE_8__ {int mode; } ;






 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (int ) ;



 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 int VAR_8 ;
 TYPE_5__ VAR_9 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (int ) ;
 TYPE_3__ VAR_10 ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int VAR_11 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int ) ;

bool FUNC_11(uint16_t VAR_12, keyrecord_t *VAR_13) {
  switch (VAR_12) {
    case 130:
      if (VAR_13->event.pressed) {



        FUNC_5(1UL<<VAR_7);
      }
      return 0;
      break;
    case 131:
      if (VAR_13->event.pressed) {


        if (VAR_3) {
        } else {
          VAR_3 = !VAR_3;



        }
        FUNC_4(VAR_6);
        FUNC_10(VAR_6, VAR_8, VAR_4);
      } else {



        VAR_3 = 0;
        FUNC_3(VAR_6);
        FUNC_10(VAR_6, VAR_8, VAR_4);
      }
      return 0;
      break;
    case 129:
      if (VAR_13->event.pressed) {


        if (VAR_3) {
        } else {
          VAR_3 = !VAR_3;



        }
        FUNC_4(VAR_8);
        FUNC_10(VAR_6, VAR_8, VAR_4);
      } else {



        FUNC_3(VAR_8);
        VAR_3 = 0;
        FUNC_10(VAR_6, VAR_8, VAR_4);
      }
      return 0;
      break;
    case 133:
      if (VAR_13->event.pressed) {
          FUNC_4(VAR_5);
        } else {
          FUNC_3(VAR_5);
        }
        return 0;
        break;
    case 135:
        if (VAR_13->event.pressed) {
          FUNC_4(VAR_4);
        } else {
          FUNC_3(VAR_4);
        }
        return 0;
        break;

    case 128:







      return 0;
      break;
    case 134:
      if (VAR_13->event.pressed) {
        if(VAR_9.swap_lalt_lgui==0){
          FUNC_6(VAR_1);
        }else{
          FUNC_1(FUNC_2("`"));
        }
      } else {
        FUNC_9(VAR_1);
      }
      return 0;
      break;
    case 132:
      if (VAR_13->event.pressed) {
        if(VAR_9.swap_lalt_lgui==0){
          FUNC_6(VAR_0);
        }else{
          FUNC_1(FUNC_2("`"));
        }
      } else {
        FUNC_9(VAR_0);
      }
      return 0;
      break;
  }
  return 1;
}
