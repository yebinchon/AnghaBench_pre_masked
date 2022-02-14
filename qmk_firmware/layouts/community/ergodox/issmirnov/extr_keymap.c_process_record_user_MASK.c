
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_5__ {int pressed; } ;
struct TYPE_6__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;



 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (int ,TYPE_2__*) ;
 int FUNC_4 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

bool FUNC_5(uint16_t VAR_8, keyrecord_t *VAR_9) {
  uint8_t VAR_10 = FUNC_2(VAR_4);
  switch (VAR_8) {
    case 130:
      FUNC_3(VAR_3,VAR_9);
      return 0;
      break;

    case 129:

      if (VAR_9->event.pressed && (!VAR_7 || VAR_10 == VAR_2)) {
        FUNC_4(FUNC_0(FUNC_1(VAR_1)));
        VAR_6 = 1;
      }
      break;
    case 128:

      if (VAR_9->event.pressed && (!VAR_7 || VAR_10 == VAR_2)) {
        FUNC_4(FUNC_0(FUNC_1(VAR_0)));
        VAR_6 = 1;
      }
      break;
    default:
      VAR_5 = 0;
      VAR_6 = 1;
      break;
  }
  return 1;
}
