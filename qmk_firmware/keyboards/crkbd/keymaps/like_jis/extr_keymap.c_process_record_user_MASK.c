
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
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int,TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 () ;
 TYPE_5__ VAR_5 ;
 int FUNC_5 (int ) ;
 TYPE_3__ VAR_6 ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int ,int ) ;

bool FUNC_11(uint16_t VAR_7, keyrecord_t *VAR_8) {

  FUNC_3(VAR_7, VAR_8);

  bool VAR_9 = 0;
  switch (VAR_7) {
    case 131:
      FUNC_10(VAR_8->event.pressed, VAR_3, VAR_4, VAR_2);
      break;
    case 130:
      FUNC_10(VAR_8->event.pressed, VAR_4, VAR_3, VAR_2);
        break;
    case 132:
      if (VAR_8->event.pressed) {
        if (VAR_5.swap_lalt_lgui == 0) {
          FUNC_5(VAR_0);
        } else {
          FUNC_0(FUNC_1("`"));
        }
      } else {
        FUNC_9(VAR_0);
      }
      break;
    default:
      VAR_9 = 1;
      break;
  }

  FUNC_2();
  return VAR_9;
}
