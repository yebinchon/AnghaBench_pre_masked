
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
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_3 () ;
 int VAR_10 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 int VAR_15 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ) ;

bool FUNC_9(uint16_t VAR_16, keyrecord_t *VAR_17) {
  switch (VAR_16) {
    case 130:
      if (VAR_17->event.pressed) {
        FUNC_6(VAR_6);
        VAR_9 = 0;
        if (VAR_14 != 0 || VAR_13 != 0){
          FUNC_2();
        }
      }
      return 0;
      break;
    case 136:
      if (VAR_17->event.pressed) {
        FUNC_6(VAR_2);
        VAR_9 = 0;
        if (VAR_14 != 0 || VAR_13 != 0){
          FUNC_2();
        }
      }
      return 0;
      break;
    case 135:
      if (VAR_17->event.pressed) {
        FUNC_6(VAR_3);
        VAR_9 = 1;
        if (VAR_14 != 0 || VAR_13 != 0){
          FUNC_2();
        }
      }
      return 0;
      break;
    case 129:
      if (VAR_17->event.pressed) {
        FUNC_5(VAR_7);
        FUNC_8(VAR_7, VAR_5, VAR_4);
        VAR_14 = FUNC_3();
        if (VAR_14 != 0 || VAR_13 != 0){
          for (int VAR_18 = 0; VAR_18 < VAR_10 ; VAR_18++){
            FUNC_1();
          }
        }
      } else {
        FUNC_7(VAR_1);
        FUNC_4(VAR_7);
        FUNC_8(VAR_7, VAR_5, VAR_4);
        if ( VAR_11 == 0 && VAR_9 == 0 ) {
          for (int VAR_19 = 0; VAR_19 < VAR_10 ; VAR_19++){
            FUNC_0();
          }
        } else {
        }
        VAR_15 = 0;
      }
      return 0;
      break;
    case 132:
      if (VAR_17->event.pressed) {
        FUNC_5(VAR_5);
        FUNC_8(VAR_7, VAR_5, VAR_4);
        VAR_13 = FUNC_3();
        if (VAR_14 != 0 || VAR_13 != 0){
          for (int VAR_20 = 0; VAR_20 < VAR_10 ; VAR_20++){
            FUNC_1();
          }
        }
      } else {
        FUNC_4(VAR_5);
        FUNC_8(VAR_7, VAR_5, VAR_4);
        if ( VAR_15 == 0 && VAR_9 == 0 ) {
          for (int VAR_21 = 0; VAR_21 < VAR_10 ; VAR_21++){
            FUNC_0();
          }
        } else {
        }
        VAR_11 = 0;
      }
      return 0;
      break;
    case 128:
      if (VAR_17->event.pressed) {
        FUNC_5(VAR_7);

        if (VAR_15 == 0 && VAR_11 == 0){
          VAR_12 = FUNC_3();
        }
        VAR_15 = 1;
      } else {
      }
      return 0;
      break;
    case 131:
      if (VAR_17->event.pressed) {
        FUNC_5(VAR_5);

        if (VAR_15 == 0 && VAR_11 == 0){
          VAR_12 = FUNC_3();
        }
        VAR_11 = 1;
      } else {
      }
      return 0;
      break;
    case 133:
      if (VAR_17->event.pressed) {
        for (int VAR_22 = 0; VAR_22 < (VAR_0 / VAR_8 ) ; VAR_22++ ){
          FUNC_1();
        }
      } else {
      }
      return 0;
      break;
    case 134:
      if (VAR_17->event.pressed) {
        for (int VAR_23 = 0; VAR_23 < (VAR_0 / VAR_8 ) ; VAR_23++ ){
          FUNC_0();
        }
      } else {
      }
      return 0;
      break;
  }
  return 1;
}
