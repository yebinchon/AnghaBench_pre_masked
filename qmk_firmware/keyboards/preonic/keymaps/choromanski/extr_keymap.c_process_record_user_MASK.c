
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
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

bool FUNC_2(uint16_t VAR_2, keyrecord_t *VAR_3) {
 switch (VAR_2) {
  case 128:
   if (VAR_3->event.pressed) {
    FUNC_0(VAR_1);
    FUNC_1(VAR_0);
   }
   return 0;
   break;
 }
 return 1;
}
