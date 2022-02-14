
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int count; int interrupted; } ;
struct TYPE_5__ {int pressed; } ;
struct TYPE_7__ {TYPE_2__ tap; TYPE_1__ event; } ;
typedef TYPE_3__ keyrecord_t ;




 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

void FUNC_3(keyrecord_t *VAR_0, uint8_t VAR_1, uint8_t VAR_2)
{
 switch (VAR_1)
 {
 case 129:
 case 128:
  if (VAR_0->event.pressed) {
   FUNC_2( VAR_1 == 129 ? 1 : 2 );
   if (VAR_0->tap.count && !VAR_0->tap.interrupted) {
    if (VAR_0->tap.count >= 3) {
     FUNC_0(3);
    }
   } else {
    VAR_0->tap.count = 0;
   }
  } else {
   FUNC_1( VAR_1 == 129 ? 1 : 2 );
  }
  break;
 }
}
