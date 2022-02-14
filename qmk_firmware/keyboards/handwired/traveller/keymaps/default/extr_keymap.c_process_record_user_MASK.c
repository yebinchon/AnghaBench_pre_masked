
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
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;

bool FUNC_3(uint16_t VAR_4, keyrecord_t *VAR_5) {
      switch (VAR_4) {

       case 129:
        if (VAR_5->event.pressed) {
          FUNC_1(VAR_3);
          FUNC_1(VAR_1);
        } else {
          FUNC_0(VAR_3);
          FUNC_0(VAR_1);
        }
        FUNC_2();
        return 0;

      case 128:
        if (VAR_5->event.pressed) {
          FUNC_1(VAR_3);
          FUNC_1(VAR_2);
        } else {
          FUNC_0(VAR_3);
          FUNC_0(VAR_2);
        }
        FUNC_2();
        return 0;

      case 131:
        if (VAR_5->event.pressed) {
          FUNC_1(VAR_0);
          FUNC_1(VAR_1);
        } else {
          FUNC_0(VAR_0);
          FUNC_0(VAR_1);
        }
        FUNC_2();
        return 0;

      case 130:
        if (VAR_5->event.pressed) {
          FUNC_1(VAR_0);
          FUNC_1(VAR_2);
        } else {
          FUNC_0(VAR_0);
          FUNC_0(VAR_2);
        }
        FUNC_2();
        return 0;
      default:
        return 1;
      }
    return 1;
}
