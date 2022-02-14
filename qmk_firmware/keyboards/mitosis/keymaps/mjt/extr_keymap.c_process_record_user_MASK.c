
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct TYPE_5__ {scalar_t__ pressed; } ;
struct TYPE_6__ {TYPE_1__ event; } ;
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

 int FUNC_0 (int ) ;
 int VAR_11 ;
 int FUNC_1 (int ) ;

 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,TYPE_2__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_21 ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ,scalar_t__) ;

bool FUNC_14(uint16_t VAR_24, keyrecord_t *VAR_25) {
  uint16_t VAR_26 = (VAR_24 == FUNC_0(VAR_12) ? VAR_0 : VAR_24);
  if (!FUNC_6(VAR_26, VAR_25)) {
    return 0;
  }
  uint8_t VAR_27;
  VAR_27 = FUNC_2(VAR_19);


  switch (VAR_24) {
  case 129:
    if (VAR_25->event.pressed) {

      FUNC_7(VAR_9);
      FUNC_7(VAR_8);
      FUNC_7(VAR_6);
      FUNC_11(VAR_6);
      FUNC_11(VAR_8);
      FUNC_11(VAR_9);
    }
    return 0;
    break;
  case 132:
    if (VAR_25->event.pressed) {
      VAR_18 = FUNC_10();
      VAR_21 = 1;

      FUNC_4(VAR_17);
    } else {
      if (FUNC_9(VAR_18) < VAR_10 || !VAR_21) {
        FUNC_3(VAR_17);
      }
    }
    FUNC_13(VAR_17, VAR_16, VAR_13);
    return 0;
    break;

  case 128:
    if (VAR_25->event.pressed) {
      VAR_18 = FUNC_10();
      VAR_21 = 1;
      FUNC_4(VAR_16);
      FUNC_7(VAR_4);
    } else {
      if (FUNC_9(VAR_18) < VAR_10 || !VAR_21) {
        FUNC_3(VAR_16);
        FUNC_11(VAR_4);
      }
    }
    FUNC_13(VAR_17, VAR_16, VAR_13);
    return 0;
    break;
  case 130:
    if (VAR_25->event.pressed) {
      FUNC_5(VAR_15);



    }
    return 0;
    break;
  case 131:
    if (VAR_25->event.pressed) {
      FUNC_5(VAR_14);



    }
  return 0;
  break;
    case 133:
      if (VAR_25->event.pressed) {





        FUNC_7(VAR_1);
      } else {
        FUNC_11(VAR_1);
      }
    return 0;
    break;


  default:
    VAR_21 = 0;
    break;
  }


  if (VAR_27 == VAR_13) {


    if ( (VAR_24 >= VAR_2 && VAR_24 <= VAR_3)
         || VAR_24 == VAR_7 ) {
      if (VAR_25->event.pressed) {
        FUNC_12(VAR_11);
      } else {
        FUNC_8(VAR_11);
      }
    }
  }

  return 1;
}
