
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {int pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;
 int FUNC_0 (int ) ;


 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ) ;

bool FUNC_8(uint16_t VAR_16, keyrecord_t *VAR_17) {
  switch (VAR_16) {
    case 142:
      if (VAR_17->event.pressed) {
        FUNC_6(VAR_1);



      }
      return 0;
      break;
 case 138:
      if (VAR_17->event.pressed) {
    if (VAR_9) {
              if (VAR_10)
                  FUNC_5(VAR_4);
              else
                  FUNC_5(VAR_1);
              VAR_9 = 0;
          } else {
              FUNC_5(VAR_2);
              VAR_9 = 1;
          }
      }
      return 0;
      break;
    case 133:
        if (VAR_17->event.pressed) {
            if (VAR_10) {
                if (VAR_9)
                    FUNC_5(VAR_2);
                else
                    FUNC_5(VAR_1);
                VAR_10 = 0;
            } else {
                FUNC_5(VAR_4);
                VAR_10 = 1;
            }
        }
        return 0;
        break;
    case 136:
      if (VAR_17->event.pressed) {
        FUNC_4(VAR_3);
        FUNC_7(VAR_3, VAR_5, VAR_0);
      } else {
        FUNC_3(VAR_3);
        FUNC_7(VAR_3, VAR_5, VAR_0);
      }
      return 0;
      break;
    case 129:
      if (VAR_17->event.pressed) {
        FUNC_4(VAR_5);
        FUNC_7(VAR_3, VAR_5, VAR_0);
      } else {
        FUNC_3(VAR_5);
        FUNC_7(VAR_3, VAR_5, VAR_0);
      }
      return 0;
      break;
    case 137:
     if (VAR_17->event.pressed) {
      FUNC_1("()");
     }
     return 0; break;
    case 141:
     if (VAR_17->event.pressed) {
      FUNC_1("// ---------------------------------------------------------------");
     }
     return 0; break;
    case 128:
     if (VAR_17->event.pressed) {
      FUNC_1("// ***************************************************************");
     }
     return 0; break;
    case 135:
        if(VAR_17->event.pressed) {



        }
        return 0; break;
      case 134:
          if(VAR_17->event.pressed) {



          }
          return 0; break;
      case 130:
          if(VAR_17->event.pressed) {



          }
          return 0; break;
      case 139:
          if(VAR_17->event.pressed) {



          }
          return 0; break;
      case 140:
          if(VAR_17->event.pressed) {



          }
          return 0; break;
      case 132:
          if(VAR_17->event.pressed) {



          }
          return 0; break;
      case 143:
          if(VAR_17->event.pressed) {



          }
          return 0; break;
      case 131:
          if(VAR_17->event.pressed) {



          }
          return 0; break;
  }
  return 1;
}
