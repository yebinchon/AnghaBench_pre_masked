
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




 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 () ;

bool FUNC_4(uint16_t VAR_10, keyrecord_t *VAR_11) {
  if(VAR_10 != FUNC_0(VAR_0))
    VAR_9 = 1;
  switch (VAR_10) {
    case 128:
      if (VAR_8>25)
        VAR_8 -= 25;
      break;
    case 129:
      if (VAR_8 < 1000)
        VAR_8 += 25;
      break;
    case 130:
      if(VAR_11->event.pressed) {
        VAR_7 = VAR_7 == 0 ? 1 : 0;
        FUNC_3();
      }
      break;
    case 131:
      if(VAR_11->event.pressed) {
        VAR_7 = VAR_7 == 0 ? 2 : 0;
        FUNC_3();
      }
      break;
    case 133:
      if(VAR_11->event.pressed) {
        if (VAR_6 == VAR_1) {
          FUNC_1(VAR_5);
          VAR_6 = VAR_3;
        }
        else if (VAR_6 == VAR_3) {
          FUNC_2(VAR_5);
          VAR_6 = VAR_1;
        }
        else if (VAR_6 == VAR_2) { VAR_6 = VAR_4; }
        else if (VAR_6 == VAR_4) { VAR_6 = VAR_2; }
      }
      FUNC_3();
      break;
    case 132:
      if(VAR_11->event.pressed) {
        if (VAR_6 == VAR_3) VAR_6 = VAR_4;
        else if (VAR_6 == VAR_4) VAR_6 = VAR_3;
        else if (VAR_6 == VAR_1) {
          FUNC_1(VAR_5);
          VAR_6 = VAR_2;
        }
        else if (VAR_6 == VAR_2) {
          FUNC_2(VAR_5);
          VAR_6 = VAR_1;
        }
        FUNC_3();
      }
      break;
  }
  return 1;
}
