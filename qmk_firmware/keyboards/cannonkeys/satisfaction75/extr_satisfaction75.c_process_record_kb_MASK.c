
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
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
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int FUNC_2 () ;
 int VAR_7 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_8 ;
 int FUNC_5 (int,TYPE_2__*) ;
 int VAR_9 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;
 int FUNC_9 (int) ;

bool FUNC_10(uint16_t VAR_10, keyrecord_t *VAR_11) {
  VAR_9 = 1;
  switch (VAR_10) {
    case 128:
      if(!VAR_5){
        if (VAR_11->event.pressed) {
          VAR_7 = (VAR_7 + 1) % VAR_4;
          FUNC_0();
        }
      }
      return 0;
    case 130:
      if (VAR_11->event.pressed) {
        if(VAR_5){
          FUNC_4();
          VAR_5 = 0;
          VAR_6 = VAR_8;
          FUNC_3();

        }else{
          VAR_8 = VAR_6;
          FUNC_4();
          VAR_5 = 1;
          VAR_6 = VAR_0;
          FUNC_3();
        }
      }
      return 0;
    case 129:
      if (VAR_11->event.pressed) {
        uint16_t VAR_12 = FUNC_2();
        uint16_t VAR_13 = FUNC_8();
        if(VAR_12 != 0){
          FUNC_6(VAR_12);
          while (FUNC_7(VAR_13) < VAR_3){ }
          FUNC_9(VAR_12);
        }
      } else {

      }
      return 0;
    default:
      break;
  }
  return FUNC_5(VAR_10, VAR_11);
}
