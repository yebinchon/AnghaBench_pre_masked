
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct TYPE_4__ {scalar_t__ pressed; } ;
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
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;




 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_16 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_17 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_18 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,scalar_t__) ;

bool FUNC_11(uint16_t VAR_19, keyrecord_t *VAR_20) {

 uint8_t VAR_21;
  VAR_21 = FUNC_0(VAR_17);


  switch (VAR_19) {
  case 132:
   if (VAR_20->event.pressed) {
      VAR_16 = FUNC_7();
      VAR_18 = 1;
     FUNC_2(VAR_14);
   } else {
      if (FUNC_6(VAR_16) < VAR_10 || !VAR_18) {
        FUNC_1(VAR_14);
      }
   }
    FUNC_10(VAR_14, VAR_15, VAR_13);
   return 0;
   break;

  case 128:
   if (VAR_20->event.pressed) {
      VAR_16 = FUNC_7();
      VAR_18 = 1;
     FUNC_2(VAR_15);
     FUNC_3(VAR_4);
   } else {
     if (FUNC_6(VAR_16) < VAR_10 || !VAR_18) {
        FUNC_1(VAR_15);
       FUNC_8(VAR_4);
      }
    }
    FUNC_10(VAR_14, VAR_15, VAR_13);
   return 0;
   break;

  case 129:
      if (VAR_20->event.pressed) {
        VAR_16 = FUNC_7();
      } else {
        if (FUNC_6(VAR_16) > VAR_11) {
            FUNC_5(VAR_6);
          } else {
            FUNC_5(VAR_9);
          }
      }
      return 0;


  case 130:
      if (VAR_20->event.pressed) {
        VAR_16 = FUNC_7();
      } else {
        if (FUNC_6(VAR_16) > VAR_11) {
            FUNC_5(VAR_5);
          } else {
            FUNC_5(VAR_8);
          }
      }
      return 0;


  case 131:
      if (VAR_20->event.pressed) {
        VAR_16 = FUNC_7();
      } else {
        if (FUNC_6(VAR_16) > VAR_11) {
            FUNC_5(VAR_0);
          } else {
            FUNC_5(VAR_1);
          }
      }
      return 0;



  default:
    VAR_18 = 0;
    break;
  }


  if (VAR_21 == VAR_13) {


   if ( (VAR_19 >= VAR_2 && VAR_19 <= VAR_3)
      || VAR_19 == VAR_7 ) {
    if (VAR_20->event.pressed) {
              FUNC_9(VAR_12);
          } else {
              FUNC_4(VAR_12);
          }
   }
  }

  return 1;
}
