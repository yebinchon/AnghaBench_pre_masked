
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

 int FUNC_0 (int ) ;
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
 int FUNC_1 () ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ) ;

bool FUNC_9(uint16_t VAR_15, keyrecord_t *VAR_16) {
  switch (VAR_15) {
        case 129:
          if (VAR_16->event.pressed) {
            FUNC_6(VAR_9);
          }
          return 0;
          break;
        case 135:
          if (VAR_16->event.pressed) {
            FUNC_6(VAR_4);
          }
          return 0;
          break;
        case 132:
          if (VAR_16->event.pressed) {
            FUNC_6(VAR_6);
          }
          return 0;
          break;
        case 130:
          if (VAR_16->event.pressed) {
            FUNC_4(VAR_8);
            FUNC_8(VAR_8, VAR_10, VAR_3);
          } else {
            FUNC_3(VAR_8);
            FUNC_8(VAR_8, VAR_10, VAR_3);
          }
          return 0;
          break;
        case 128:
          if (VAR_16->event.pressed) {
            FUNC_4(VAR_10);
            FUNC_8(VAR_8, VAR_10, VAR_3);
          } else {
            FUNC_3(VAR_10);
            FUNC_8(VAR_8, VAR_10, VAR_3);
          }
          return 0;
          break;
        case 136:
          if (VAR_16->event.pressed) {
            FUNC_5(VAR_0);



            VAR_1 &= ~(1<<6);
          } else {
            FUNC_7(VAR_0);
            VAR_1 |= (1<<6);
          }
          return 0;
          break;





  case 131:
   if (VAR_16->event.pressed) {







   }
   return 1;


  case 133:
   if (VAR_16->event.pressed) {

   } else {





    FUNC_3(VAR_7);
    FUNC_4(VAR_5);
   }

  case 134:
   if (VAR_16->event.pressed) {






    FUNC_3(VAR_5);
   }

      }
    return 1;
}
