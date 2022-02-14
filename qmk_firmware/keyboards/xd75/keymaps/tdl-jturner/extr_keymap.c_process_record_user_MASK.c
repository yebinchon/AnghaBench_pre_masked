
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
 int VAR_7 ;

 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;

 int VAR_10 ;
 int VAR_11 ;
 TYPE_4__* VAR_12 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_13 ;
 int FUNC_4 (int ) ;

bool FUNC_5(uint16_t VAR_14, keyrecord_t *VAR_15) {

  switch(VAR_14) {
    case 129:
      FUNC_1();
      return 0;
      break;
    case 128:
      if (VAR_15->event.pressed) {
        FUNC_3(VAR_11);
      }
      return 0;
      break;
    case 134:
      if (VAR_15->event.pressed) {
        FUNC_3(VAR_10);
      }
      return 0;
      break;
    case 133:
      if (VAR_15->event.pressed) {
        if (VAR_12->mods & VAR_13) {
          if (VAR_12->mods & FUNC_0(VAR_6)) {
            FUNC_4(VAR_7);
          }
          else {
            FUNC_4(VAR_8);
          }
          FUNC_2(VAR_4);
        }
        else {
          FUNC_2(VAR_2);
        }
      }
      else {
        FUNC_4(VAR_4);
        FUNC_4 (VAR_2);
      }
      return 0;
      break;
    case 130:
      if (VAR_15->event.pressed) {
        if (VAR_12->mods & VAR_13) {
            if (VAR_12->mods & FUNC_0(VAR_6)) {
              FUNC_4(VAR_7);
            }
            else {
              FUNC_4(VAR_8);
            }
          FUNC_2(VAR_0);
        }
        else {
          FUNC_2(VAR_9);
        }
      }
      else {
        FUNC_4(VAR_0);
        FUNC_4 (VAR_9);
      }
      return 0;
      break;
    case 131:
      if (VAR_15->event.pressed) {
        if (VAR_12->mods & VAR_13) {
          FUNC_2(VAR_9);
        }
        else {
          FUNC_2(VAR_5);
        }
      }
      else {
        FUNC_4(VAR_9);
        FUNC_4 (VAR_5);
      }
      return 0;
      break;
    case 132:
      if (VAR_15->event.pressed) {
        if (VAR_12->mods & VAR_13) {
          FUNC_2(VAR_1);
        }
        else {
          FUNC_2(VAR_3);
        }
      }
      else {
        FUNC_4(VAR_1);
        FUNC_4 (VAR_3);
      }
      return 0;
      break;
    }
    return 1;
}
