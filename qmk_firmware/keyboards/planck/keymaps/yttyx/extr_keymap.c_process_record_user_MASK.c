
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {int pressed; } ;
struct TYPE_6__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;
struct TYPE_7__ {int nkro; int raw; } ;




 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 TYPE_4__ VAR_3 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 () ;

bool FUNC_8(uint16_t VAR_6, keyrecord_t *VAR_7) {
  switch (VAR_6) {
    case 128:
      if (VAR_7->event.pressed) {





        FUNC_5(VAR_1);
        FUNC_5(VAR_0);
        FUNC_6(VAR_2);

        if (!FUNC_2()) {
            FUNC_1();
        }

        VAR_3.raw = FUNC_3();
        VAR_3.nkro = 1;
        FUNC_4(VAR_3.raw);
      }
      return 0;
    case 129:
      if (VAR_7->event.pressed) {




        FUNC_5(VAR_1);
        FUNC_5(VAR_2);
        FUNC_5(VAR_0);
      }
      return 0;
    }
    return 1;
}
