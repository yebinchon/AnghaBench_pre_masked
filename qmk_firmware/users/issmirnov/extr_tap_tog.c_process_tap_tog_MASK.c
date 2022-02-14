
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {scalar_t__ pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_2(uint8_t VAR_3, keyrecord_t *VAR_4) {
  VAR_0++;

  if (VAR_4->event.pressed) {



    if(VAR_2) {
      FUNC_0();
      VAR_2 = 0;
    }




    else {

      FUNC_1(VAR_3);
      VAR_1 = 0;
    }
  }


  else {

    if(VAR_1) {

      FUNC_0();
    }

    else {

      VAR_2 = 1;




      if (VAR_0 >= 4 ) {
        VAR_0 = 0;
        VAR_2 = 0;
      }
    }
  }
}
