
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_6__ {int pressed; } ;
struct TYPE_5__ {int count; } ;
struct TYPE_7__ {TYPE_2__ event; TYPE_1__ tap; } ;
typedef TYPE_3__ keyrecord_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;







 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,int ) ;

bool FUNC_12(uint16_t VAR_13, keyrecord_t *VAR_14) {
  switch(VAR_13) {
    case 138:
        if (VAR_14->event.pressed) {
            FUNC_7(VAR_1);
            if (VAR_14->tap.count == 1) {
                FUNC_7(VAR_0);
                FUNC_10(VAR_0);
            } else if (VAR_14->tap.count == 2) {
                FUNC_7(VAR_2);
                FUNC_10(VAR_2);
            }
            FUNC_10(VAR_1);
        }
        return 0;

  case 135:
    if (VAR_14->event.pressed) {
      FUNC_6(VAR_6);
      FUNC_0(2);
      FUNC_1();
      FUNC_11(VAR_4, VAR_6, VAR_3);
    } else {
      FUNC_5(VAR_6);
      FUNC_11(VAR_4, VAR_6, VAR_3);
    }
    return 0;

  case 137:
    if (VAR_14->event.pressed) {
      FUNC_6(VAR_4);
      FUNC_0(2);
      FUNC_1();
      FUNC_11(VAR_4, VAR_6, VAR_3);
    } else {
      FUNC_5(VAR_4);
      FUNC_11(VAR_4, VAR_6, VAR_3);
    }
    return 0;
  default:
    return 1;
  }
  return 1;
}
