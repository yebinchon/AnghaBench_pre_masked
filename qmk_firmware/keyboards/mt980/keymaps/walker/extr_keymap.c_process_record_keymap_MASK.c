
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {int pressed; } ;
struct TYPE_6__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;
struct TYPE_7__ {int mods; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;

 int FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;

 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 TYPE_4__* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

bool FUNC_5(uint16_t VAR_12, keyrecord_t *VAR_13) {

  switch (VAR_12) {
    case 129:
    case 132:

      if (VAR_13->event.pressed && FUNC_2())
      FUNC_1(VAR_7);
      return 1;
    case 128:

      if (VAR_13->event.pressed && FUNC_2()) {
        FUNC_1(VAR_7);
        return 0;
      }
      return 1;
    case 130:
      if (!VAR_11) {
        if (FUNC_2() || VAR_10 & 0x2) {
          if (VAR_13->event.pressed)
            FUNC_3(VAR_1);
          else
            FUNC_4(VAR_1);
          FUNC_1(VAR_8);
        }
        else {
          if (VAR_13->event.pressed)
            FUNC_3(VAR_5);
          else
            FUNC_4(VAR_5);
        }
        return 0;
      }
      return 1;
    case 131:
      if (!VAR_11) {
        if (FUNC_2() || VAR_10 & 0x2) {
          if (VAR_13->event.pressed)
            FUNC_3(VAR_0);
          else
            FUNC_4(VAR_0);
          FUNC_1(VAR_8);
        }
        else {
          if (VAR_13->event.pressed)
            FUNC_3(VAR_4);
          else
            FUNC_4(VAR_4);
        }
        return 0;
      }
      return 1;
    case 133:

      if ((VAR_9->mods & FUNC_0 (VAR_3)) || (VAR_9->mods & FUNC_0 (VAR_6))) {
        if (VAR_13->event.pressed) {
          FUNC_3(VAR_2);
          FUNC_4(VAR_2);
        }
        return 0;
      }
      else
        return 1;
    default:
      return 1;
  }
  return 1;
}
