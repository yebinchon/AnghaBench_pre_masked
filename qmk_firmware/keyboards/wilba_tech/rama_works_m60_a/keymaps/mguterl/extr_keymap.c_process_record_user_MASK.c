
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




 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int,int) ;

bool FUNC_3(uint16_t VAR_0, keyrecord_t *VAR_1)
{
 switch(VAR_0) {
  case 129:
   if (VAR_1->event.pressed) {
    FUNC_1(2);
    FUNC_2(2, 3, 4);
   } else {
    FUNC_0(2);
    FUNC_2(2, 3, 4);
   }
   return 0;
   break;
  case 128:
   if (VAR_1->event.pressed) {
    FUNC_1(3);
    FUNC_2(2, 3, 4);
   } else {
    FUNC_0(3);
    FUNC_2(2, 3, 4);
   }
   return 0;
   break;
    default:
      return 1;
 }
}
