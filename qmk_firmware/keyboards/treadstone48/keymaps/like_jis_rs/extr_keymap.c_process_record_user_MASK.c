
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_7__ {int pressed; } ;
struct TYPE_8__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;
struct TYPE_10__ {int swap_lalt_lgui; } ;
struct TYPE_9__ {int mode; } ;





 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int,TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 TYPE_5__ VAR_8 ;
 int FUNC_6 (int ) ;
 TYPE_3__ VAR_9 ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,int ,int ) ;

bool FUNC_12(uint16_t VAR_10, keyrecord_t *VAR_11) {

  FUNC_3(VAR_10, VAR_11);

  bool VAR_12 = 0;
  switch (VAR_10) {
    case 132:
      FUNC_11(VAR_11->event.pressed, VAR_5, VAR_7, VAR_4);
      break;
    case 130:
      FUNC_11(VAR_11->event.pressed, VAR_7, VAR_5, VAR_4);
      break;
    case 135:
      if (VAR_11->event.pressed) {
        FUNC_4(VAR_1);
      }
      break;
    case 134:
      if (VAR_11->event.pressed) {
        FUNC_4(VAR_2);
      }
      break;
    case 131:
      FUNC_11(VAR_11->event.pressed, VAR_6, VAR_7, VAR_4);
      break;
    case 133:
      if (VAR_11->event.pressed) {
        if (VAR_8.swap_lalt_lgui == 0) {
          FUNC_6(VAR_0);
        } else {
          FUNC_0(FUNC_1("`"));
        }
      } else {
        FUNC_10(VAR_0);
      }
      break;
    default:
      VAR_12 = 1;
      break;
  }

  FUNC_2();
  return VAR_12;
}
