
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_6__ {scalar_t__ pressed; } ;
struct TYPE_7__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int FUNC_0 (int ) ;




 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int,TYPE_2__*) ;
 int FUNC_5 (int,TYPE_2__*) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int) ;

bool FUNC_12(uint16_t VAR_6, keyrecord_t *VAR_7) {
  if (VAR_7->event.pressed) {
    FUNC_4(VAR_6, VAR_7);
  }

  switch (VAR_6) {
  case 131:
    if (VAR_7->event.pressed) {
      FUNC_1("!=");
    }
    return 0;
  case 132:
    if (VAR_7->event.pressed) {
      if (FUNC_3() & (FUNC_0(VAR_4) | FUNC_0(VAR_5))) {

        FUNC_10(VAR_2);
      } else {

        FUNC_6(FUNC_0(VAR_4));
        FUNC_10(VAR_1);
        FUNC_11(FUNC_0(VAR_4));
      }
    }
    return 0;
  case 128:
    if (VAR_7->event.pressed) {
      if (FUNC_3() & (FUNC_0(VAR_4) | FUNC_0(VAR_5))) {

        FUNC_10(VAR_3);
      } else {

        FUNC_6(FUNC_0(VAR_4));
        FUNC_10(VAR_0);
        FUNC_11(FUNC_0(VAR_4));
      }
    }
    return 0;
  }
  return FUNC_5(VAR_6, VAR_7);
}
