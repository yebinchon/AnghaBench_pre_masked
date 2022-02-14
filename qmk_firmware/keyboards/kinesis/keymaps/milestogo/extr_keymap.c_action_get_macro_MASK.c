
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int macro_t ;
struct TYPE_4__ {int pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int const* VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

const macro_t *FUNC_5(keyrecord_t *VAR_6, uint8_t VAR_7, uint8_t VAR_8)
{

      switch(VAR_7) {
        case 0:
          if (VAR_6->event.pressed) {
            FUNC_3(VAR_4);
          } else {
            FUNC_4(VAR_4);
          }
        break;


       case 129:
        if (VAR_6->event.pressed) {
          FUNC_1(VAR_3);
          FUNC_1(VAR_1);
        } else {
          FUNC_0(VAR_3);
          FUNC_0(VAR_1);
        }
        FUNC_2();
        break;

      case 128:
        if (VAR_6->event.pressed) {
          FUNC_1(VAR_3);
          FUNC_1(VAR_2);
        } else {
          FUNC_0(VAR_3);
          FUNC_0(VAR_2);
        }
        FUNC_2();
        break;

      case 131:
        if (VAR_6->event.pressed) {
          FUNC_1(VAR_0);
          FUNC_1(VAR_1);
        } else {
          FUNC_0(VAR_0);
          FUNC_0(VAR_1);
        }
        FUNC_2();
        break;

      case 130:
        if (VAR_6->event.pressed) {
          FUNC_1(VAR_0);
          FUNC_1(VAR_2);
        } else {
          FUNC_0(VAR_0);
          FUNC_0(VAR_2);
        }
        FUNC_2();
        break;
     }
    return VAR_5;
}
