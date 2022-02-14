
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int macro_t ;
struct TYPE_6__ {scalar_t__ pressed; } ;
struct TYPE_7__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;
struct TYPE_8__ {int mods; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int const* FUNC_1 (int ,int ,int ,int ,int ) ;
 int const* VAR_9 ;
 int FUNC_2 (int ) ;
 int VAR_10 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 () ;
 TYPE_3__* VAR_11 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

const macro_t *FUNC_9(keyrecord_t *VAR_12, uint8_t VAR_13, uint8_t VAR_14)
{
      switch(VAR_13) {
        case 0:
          if (VAR_12->event.pressed) {
            FUNC_7(VAR_6);
          } else {
            FUNC_8(VAR_6);
          }
        break;



  case 129:
  if(VAR_11->mods & FUNC_2(VAR_5) ) {
   if (VAR_12->event.pressed) {
       FUNC_6();
     FUNC_7(VAR_7);
       } else {
     FUNC_8(VAR_7);
      }
  } else {
            if (VAR_12->event.pressed) {
            FUNC_7(VAR_4);
            } else {
             FUNC_8(VAR_4);
      }
  }
 break;

 case 128:
   if (VAR_12->event.pressed) {
   return FUNC_1( FUNC_3(VAR_3),FUNC_0(VAR_8),FUNC_3(VAR_10),FUNC_4(VAR_8), VAR_2 );
   }
 break;




 default:
     return VAR_9;
    }


return VAR_9;
}
