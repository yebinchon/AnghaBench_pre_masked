
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

 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;

bool FUNC_3(uint16_t VAR_2, keyrecord_t *VAR_3) {



 switch (VAR_2) {
  case 129:
   if (VAR_3->event.pressed) {
     FUNC_1("Hello, world!");
    } else {
     FUNC_1("Goodbye, cruel world!");
    }
   break;
   case 130:
    if (VAR_3->event.pressed) {
     FUNC_2(FUNC_0(VAR_0));
    }
   break;
   case 128:
    if (VAR_3->event.pressed) {
     FUNC_2(FUNC_0(VAR_1));
    }
   break;
  return 0;
 }
 return 1;
}
