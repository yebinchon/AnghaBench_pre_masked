
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {int pressed; } ;
struct TYPE_6__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (int const) ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int,TYPE_2__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;

bool FUNC_10(uint16_t VAR_10, keyrecord_t *VAR_11) {
  switch (VAR_10) {
    case 131:
      if (VAR_11->event.pressed) {
        VAR_7 |= (FUNC_0(131));
      } else {
        VAR_7 &= ~(FUNC_0(131));
      }
      break;
    case 130:
      if (VAR_11->event.pressed) {
        VAR_7 |= FUNC_0(130);
      } else {
        VAR_7 &= ~(FUNC_0(130));
      }
      break;
    case 129:
      if (VAR_11->event.pressed) {
        FUNC_3(VAR_5);
        VAR_8 |= (1 << 1);
      } else {

        if ((VAR_8 & ~(1 << 1)) == 0) {
          FUNC_2(VAR_5);
        }
        VAR_8 &= ~(1 << 1);
      }
      break;
    case 128:
      if (VAR_11->event.pressed) {
        VAR_9 = FUNC_8();
        VAR_8 |= (1 << 2);
        FUNC_3(VAR_5);
      } else {

        if ((VAR_8 & ~(1 << 2)) == 0) {
          FUNC_2(VAR_5);
        }
        VAR_8 &= ~(1 << 2);


        if (FUNC_7(VAR_9) <= 150) {
          if (VAR_8 > 0) {

            FUNC_6(VAR_0, VAR_4);
            return 0;
          } else {

            FUNC_6(VAR_2, VAR_3);
            return 0;
          }
        }
      }
      break;
  }

  if ((VAR_7 & VAR_4) == VAR_4) {

    if (FUNC_1() & (1 << VAR_6)) {
      FUNC_9(VAR_1);
    } else {
      FUNC_5(VAR_1);
    }
    return 0;
  }

  return FUNC_4(VAR_10, VAR_11);
}
