
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {scalar_t__ pressed; } ;
struct TYPE_6__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;
struct TYPE_7__ {int mode; } ;




 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_6 ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 TYPE_3__ VAR_7 ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ,int ) ;

bool FUNC_13(uint16_t VAR_8, keyrecord_t *VAR_9) {
  if (VAR_9->event.pressed) {




  }
  static uint16_t VAR_10;

  switch (VAR_8) {
    case 130:
      if (VAR_9->event.pressed) {
        FUNC_4(VAR_4);
        FUNC_12(VAR_4, VAR_5, VAR_3);
      } else {
        FUNC_3(VAR_4);
        FUNC_12(VAR_4, VAR_5, VAR_3);
      }
      return 0;
    case 129:
      if (VAR_9->event.pressed) {
        FUNC_4(VAR_5);
        FUNC_12(VAR_4, VAR_5, VAR_3);
      } else {
        FUNC_3(VAR_5);
        FUNC_12(VAR_4, VAR_5, VAR_3);
      }
      return 0;
    case 132:
        if (VAR_9->event.pressed) {
          FUNC_4(VAR_3);
        } else {
          FUNC_3(VAR_3);
        }
        return 0;
    case 131:
        if (VAR_9->event.pressed) {
          VAR_10 = FUNC_9();
          FUNC_5(VAR_0);
        } else {
          FUNC_11(VAR_0);
          if (FUNC_8(VAR_10) < VAR_2) {
            FUNC_0(":");
          }
        }
        return 0;
    case 128:
      break;
  }
  return 1;
}
