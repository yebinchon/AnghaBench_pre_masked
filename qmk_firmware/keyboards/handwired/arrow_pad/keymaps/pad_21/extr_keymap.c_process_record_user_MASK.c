
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_6__ {int count; } ;
struct TYPE_5__ {int pressed; } ;
struct TYPE_7__ {TYPE_2__ tap; TYPE_1__ event; } ;
typedef TYPE_3__ keyrecord_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;



 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;

bool FUNC_5(uint16_t VAR_6, keyrecord_t * VAR_7) {

  switch (VAR_6) {

  case 130:
    if (VAR_7->event.pressed) {
      FUNC_1(VAR_2);
      if (VAR_7->tap.count == 1) {
        FUNC_1(VAR_0);
        FUNC_3(VAR_0);
      } else if (VAR_7->tap.count == 2) {
        FUNC_1(VAR_5);
        FUNC_3(VAR_5);
      }
      FUNC_3(VAR_2);
    }
    break;

  case 128:
    if (VAR_7->event.pressed) {
      if (VAR_7->tap.count <= 2) FUNC_2(FUNC_0(VAR_3));
      if (VAR_7->tap.count == 2) FUNC_2(FUNC_0(VAR_2));
      if (VAR_7->tap.count == 3) FUNC_1(VAR_4);;
    } else {
      FUNC_4(FUNC_0(VAR_3) | FUNC_0(VAR_2));
      FUNC_3(VAR_4);
    }
    break;

  case 129:
    if (VAR_7->event.pressed) {
      if (VAR_7->tap.count < 2) FUNC_2(FUNC_0(VAR_2));
      if (VAR_7->tap.count >= 2) FUNC_2(FUNC_0(VAR_1));
    } else {
      FUNC_4(FUNC_0(VAR_2) | FUNC_0(VAR_1));
    }
    break;
  }

  return 1;
}
