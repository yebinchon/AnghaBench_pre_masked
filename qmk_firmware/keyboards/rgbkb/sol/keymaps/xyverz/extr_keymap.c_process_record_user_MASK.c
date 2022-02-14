
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {scalar_t__ pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;





 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_5 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;

bool FUNC_6(uint16_t VAR_6, keyrecord_t *VAR_7) {
  if (VAR_7->event.pressed) {
   switch (VAR_6) {
    case 132:
        FUNC_5(VAR_3);
      return 0;
    case 133:
        FUNC_5(VAR_2);
      return 0;
    case 131:
        FUNC_5(VAR_4);
      return 0;
    case 134:
        FUNC_5(VAR_1);
      return 0;
    case 130:






      return 0;







    case 129:
      return 0;
    }
  }
  return 1;
}
