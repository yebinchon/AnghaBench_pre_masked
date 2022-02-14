
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int count; } ;
struct TYPE_6__ {int pressed; } ;
struct TYPE_7__ {TYPE_1__ tap; TYPE_2__ event; } ;
typedef TYPE_3__ keyrecord_t ;


 int VAR_0 ;

 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 unsigned long VAR_1 ;
 int FUNC_4 () ;

void FUNC_5(keyrecord_t *VAR_2, uint8_t VAR_3, uint8_t VAR_4)
{
  switch (VAR_3) {
  case 128:
    if (VAR_2->event.pressed) {


      for (uint8_t VAR_5 = 0; VAR_5 < 9; VAR_5 += 2) {
        if (VAR_1 & (1UL << VAR_5))
          FUNC_3(VAR_5 + 1);
      }
      FUNC_3(1);
    } else {

      for (uint8_t VAR_6 = 0; VAR_6 < 9; VAR_6 += 2)
        FUNC_2(VAR_6 + 1);

      if (VAR_2->tap.count != 0) {


        FUNC_0(VAR_0);
        FUNC_4();
        FUNC_1(VAR_0);
        FUNC_4();
      }
    }
    break;
  }
}
