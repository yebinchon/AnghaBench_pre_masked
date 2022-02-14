
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int macro_t ;
struct TYPE_6__ {int count; int interrupted; } ;
struct TYPE_5__ {int pressed; } ;
struct TYPE_7__ {TYPE_2__ tap; TYPE_1__ event; } ;
typedef TYPE_3__ keyrecord_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int const* FUNC_2 (int ,int ,int ,int ) ;
 int const* VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

const macro_t *FUNC_9(keyrecord_t *VAR_7, uint8_t VAR_8, uint8_t VAR_9)
{
  switch(VAR_8) {
    case 0:
      if (VAR_7->event.pressed) {
        if (VAR_7->tap.count) {
          if (VAR_7->tap.interrupted) {
            VAR_7->tap.count = 0;

            FUNC_7(VAR_3);
          } else {

            return FUNC_2( FUNC_0(VAR_5), FUNC_3(VAR_0), FUNC_5(VAR_5), VAR_1 );
          }
        } else {

          FUNC_7(VAR_3);
        }
      } else {
        if (VAR_7->tap.count) {

        } else {

          FUNC_8(VAR_3);
        }
        VAR_7->tap.count = 0;
      }
      break;
    case 1:
      if (VAR_7->event.pressed) {
        if (VAR_7->tap.count) {
          if (VAR_7->tap.interrupted) {
            VAR_7->tap.count = 0;

            FUNC_7(VAR_4);
          } else {

            return FUNC_2( FUNC_1(VAR_4), FUNC_4(VAR_2), FUNC_6(VAR_4), VAR_1 );
          }
        } else {

          FUNC_7(VAR_4);
        }
      } else {
        if (VAR_7->tap.count) {

        } else {

          FUNC_8(VAR_4);
        }
        VAR_7->tap.count = 0;
      }
      break;
  }
  return VAR_6;
}
