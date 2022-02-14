
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
 int VAR_1 ;

 int const* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

const macro_t *FUNC_6(keyrecord_t *VAR_6, uint8_t VAR_7, uint8_t VAR_8)
{
  switch(VAR_7) {
    case 129:
      if (VAR_6->event.pressed) {
        FUNC_3(VAR_3);
        VAR_6->tap.interrupted = 0;
      } else {
        FUNC_5(VAR_3);

        if (VAR_6->tap.count && !VAR_6->tap.interrupted) {
          FUNC_0(VAR_4);
          FUNC_2(VAR_0);
          FUNC_4(VAR_0);
          FUNC_1(VAR_4);
        }

        VAR_6->tap.count = 0;
      }
      break;
    case 128:
      if (VAR_6->event.pressed) {
        FUNC_3(VAR_5);
        VAR_6->tap.interrupted = 0;
      } else {
        FUNC_5(VAR_5);

        if (VAR_6->tap.count && !VAR_6->tap.interrupted) {
          FUNC_0(VAR_4);
          FUNC_2(VAR_1);
          FUNC_4(VAR_1);
          FUNC_1(VAR_4);
        }

        VAR_6->tap.count = 0;
      }
      break;
  }
  return VAR_2;
}
