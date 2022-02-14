
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {scalar_t__ pressed; } ;
struct TYPE_6__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;



 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,TYPE_2__*) ;

bool FUNC_3(uint16_t VAR_1, keyrecord_t *VAR_2) {
  if (VAR_1 != FUNC_1(VAR_0)) {





    if (!FUNC_2(VAR_1, VAR_2)) {
      return 0;
    }

    if(VAR_2->event.pressed) {
      switch(VAR_1) {
        case 128:
          FUNC_0("=>");
          return 0;
          break;
      }
    }
  }

  return 1;
}
