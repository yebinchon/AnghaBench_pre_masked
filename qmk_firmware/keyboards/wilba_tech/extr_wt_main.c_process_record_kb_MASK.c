
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_6__ {scalar_t__ pressed; } ;
struct TYPE_7__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,TYPE_2__*) ;
 int FUNC_4 (int,TYPE_2__*) ;
 int FUNC_5 (int,int,int) ;

bool FUNC_6(uint16_t VAR_2, keyrecord_t *VAR_3)
{




 switch(VAR_2) {
  case 129:
   if (VAR_3->event.pressed) {
    FUNC_2(1);
    FUNC_5(1, 2, 3);
   } else {
    FUNC_1(1);
    FUNC_5(1, 2, 3);
   }
   return 0;
   break;
  case 128:
   if (VAR_3->event.pressed) {
    FUNC_2(2);
    FUNC_5(1, 2, 3);
   } else {
    FUNC_1(2);
    FUNC_5(1, 2, 3);
   }
   return 0;
   break;
 }
 return FUNC_4(VAR_2, VAR_3);
}
