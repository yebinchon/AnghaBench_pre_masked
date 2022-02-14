
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {int pressed; } ;
struct TYPE_6__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;





 int FUNC_0 (char*) ;
 char* FUNC_1 (int ) ;
 int VAR_0 ;

 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int,TYPE_2__*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,int,int) ;

bool FUNC_8(uint16_t VAR_1, keyrecord_t *VAR_2) {
  switch (VAR_1) {
    case 128:
      FUNC_2(1UL << 128);
      return 0;
      break;
    case 131:
      if (!VAR_2->event.pressed) {
        FUNC_0("make alu84:TurboMech:dfu");
        FUNC_0(FUNC_1(VAR_0));
    }
    return 0;
    break;
    case 130:
      if (!VAR_2->event.pressed) {
        FUNC_0("cd QMK/qmk_firmware");
        FUNC_0(FUNC_1(VAR_0));
      }
      return 0;
      break;
    case 129:
      if (!VAR_2->event.pressed) {






        FUNC_4();
      }
      return 0;
      break;
      return 1;
      break;
  }


 return FUNC_3(VAR_1, VAR_2);

}
