
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int macro_t ;
struct TYPE_4__ {int pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int const* FUNC_1 (int ,int ,...) ;
 int const* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int VAR_7 ;
 int FUNC_5 () ;

const macro_t *FUNC_6(keyrecord_t *VAR_8, uint8_t VAR_9, uint8_t VAR_10) {
    switch(VAR_9) {
        case 0:
     if (VAR_8->event.pressed) {
      VAR_7 = FUNC_5();
      return FUNC_1(FUNC_0(VAR_2), VAR_0 );
     } else {
      return FUNC_4() ? FUNC_1(FUNC_3(VAR_2),FUNC_0(VAR_4),FUNC_2(7),FUNC_3(VAR_4),VAR_0): FUNC_1(FUNC_3(VAR_2),VAR_0);
     }; break;
     case 1:
     if (VAR_8->event.pressed) {
      VAR_7 = FUNC_5();
      return FUNC_1(FUNC_0(VAR_6), VAR_0 );
     } else {
      return FUNC_4() ? FUNC_1(FUNC_3(VAR_6),FUNC_0(VAR_4),FUNC_2(0),FUNC_3(VAR_4),VAR_0): FUNC_1(FUNC_3(VAR_6),VAR_0);
     }; break;
        case 2:
      if (VAR_8->event.pressed) {
       VAR_7 = FUNC_5();
       return FUNC_1(FUNC_0(VAR_1), VAR_0 );
      } else {return FUNC_4() ? FUNC_1(FUNC_3(VAR_1),FUNC_0(VAR_4),FUNC_2(8),FUNC_3(VAR_4),VAR_0):FUNC_1(FUNC_3(VAR_1),VAR_0);
      }; break;
        case 3:
      if (VAR_8->event.pressed) {
       VAR_7 = FUNC_5();
       return FUNC_1(FUNC_0(VAR_5), VAR_0 );
      } else {
       return FUNC_4() ? FUNC_1(FUNC_3(VAR_5),FUNC_0(VAR_4),FUNC_2(9),FUNC_3(VAR_4),VAR_0):FUNC_1(FUNC_3(VAR_5),VAR_0);
      }; break;
       case 4:
      if (VAR_8->event.pressed) { } else { }; break;
        case 5:
      if (VAR_8->event.pressed) { } else { }; break;
        case 6:
      if (VAR_8->event.pressed) { } else { }; break;
    } return VAR_3;
}
