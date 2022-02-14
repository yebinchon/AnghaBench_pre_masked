
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_7__ {int pressed; } ;
struct TYPE_8__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;
struct TYPE_10__ {int nkro; int raw; } ;
struct TYPE_9__ {scalar_t__ red_mode; scalar_t__ green_mode; int raw; } ;





 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 TYPE_6__ VAR_15 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 TYPE_5__ VAR_16 ;
 int FUNC_7 (int ,scalar_t__,int,TYPE_2__*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

bool FUNC_12(uint16_t VAR_17, keyrecord_t *VAR_18) {



  if (VAR_16.red_mode >= VAR_3 && VAR_16.red_mode <= VAR_1) {
      FUNC_7(VAR_7, VAR_16.red_mode, VAR_17, VAR_18);
  }
  if (VAR_16.green_mode >= VAR_3 && VAR_16.green_mode <= VAR_1) {
      FUNC_7(VAR_6, VAR_16.green_mode, VAR_17, VAR_18);
  }
  switch (VAR_17) {
    case 128:
      if (VAR_18->event.pressed) {
        FUNC_8("mode just switched to qwerty and this is a huge string\n");
        FUNC_9(VAR_13);
      }
      return 0;
      break;
    case 142:
      if (VAR_18->event.pressed) {
        FUNC_9(VAR_9);
      }
      return 0;
      break;
    case 141:
      if (VAR_18->event.pressed) {
        FUNC_9(VAR_10);
      }
      return 0;
      break;
    case 129:
      if (VAR_18->event.pressed) {
        FUNC_5(VAR_14);
        FUNC_5(VAR_11);
        FUNC_5(VAR_8);
        FUNC_6(VAR_12);
        if (!FUNC_1()) {
            FUNC_0();
        }
        VAR_15.raw = FUNC_2();
        VAR_15.nkro = 1;
        FUNC_3(VAR_15.raw);
      }
      return 0;
      break;
    case 140:
      if (VAR_18->event.pressed) {
        FUNC_5(VAR_12);
      }
      return 0;
      break;
    case 138:
      if (VAR_18->event.pressed) {
        if (VAR_16.red_mode==VAR_5) {
            VAR_16.red_mode=VAR_4;
            FUNC_11(VAR_7);
        }
        else {
            VAR_16.red_mode=VAR_5;
            FUNC_10(VAR_7);
        }
      }
      FUNC_4(VAR_16.raw);
      return 0;
      break;
    case 137:
      if (VAR_18->event.pressed) {
        if (VAR_16.green_mode==VAR_5) {
            VAR_16.green_mode=VAR_4;
            FUNC_11(VAR_6);
        }
        else {
            VAR_16.green_mode=VAR_5;
            FUNC_10(VAR_6);
        }
      }
      FUNC_4(VAR_16.raw);
      return 0;
      break;
    case 136:
      VAR_16.red_mode=VAR_3;
      FUNC_4(VAR_16.raw);
      return 0;
      break;
    case 135:
      VAR_16.green_mode=VAR_3;
      FUNC_4(VAR_16.raw);
      return 0;
      break;
    case 134:
      VAR_16.red_mode=VAR_0;
      FUNC_4(VAR_16.raw);
      return 0;
      break;
    case 133:
      VAR_16.green_mode=VAR_0;
      FUNC_4(VAR_16.raw);
      return 0;
      break;
    case 132:
      VAR_16.red_mode=VAR_2;
      FUNC_4(VAR_16.raw);
      return 0;
      break;
    case 131:
      VAR_16.green_mode=VAR_2;
      FUNC_4(VAR_16.raw);
      return 0;
      break;
    case 130:
      VAR_16.red_mode=VAR_1;
      FUNC_4(VAR_16.raw);
      return 0;
      break;
    case 139:
      VAR_16.green_mode=VAR_1;
      FUNC_4(VAR_16.raw);
      return 0;
      break;
  }
  return 1;
}
