
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


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int const* FUNC_2 (int ,int ,int ,int ,int ,int ,int ) ;
 int const* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

const macro_t *FUNC_7(keyrecord_t *VAR_7, uint8_t VAR_8, uint8_t VAR_9)
{

      switch(VAR_8) {
        case 0:
        if (VAR_7->event.pressed) {
          FUNC_5(VAR_1);
        } else {
          FUNC_6(VAR_1);
        }
      case 3:
        if (VAR_7->event.pressed) {
          return FUNC_2( FUNC_1(255), FUNC_0(VAR_2), FUNC_3(VAR_4), FUNC_3(VAR_5), FUNC_3(VAR_6), FUNC_4(VAR_2), VAR_0 );
      }
        break;
      }
    return VAR_3;
}
