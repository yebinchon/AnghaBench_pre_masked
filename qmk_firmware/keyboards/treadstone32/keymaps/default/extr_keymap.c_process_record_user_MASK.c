
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_6__ {int pressed; } ;
struct TYPE_7__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;
struct TYPE_9__ {int swap_lalt_lgui; } ;
struct TYPE_8__ {int mode; } ;



 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 TYPE_5__ VAR_2 ;
 int FUNC_3 (int ) ;
 TYPE_3__ VAR_3 ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;

bool FUNC_8(uint16_t VAR_4, keyrecord_t *VAR_5) {

  bool VAR_6 = 0;
  switch (VAR_4) {
    case 130:
      if (VAR_5->event.pressed) {
        if (VAR_2.swap_lalt_lgui == 0) {
          FUNC_3(VAR_0);
        } else {
          FUNC_0(FUNC_1("`"));
        }
      } else {
        FUNC_7(VAR_0);
      }
      break;
    default:
      VAR_6 = 1;
      break;
  }

  return VAR_6;
}
