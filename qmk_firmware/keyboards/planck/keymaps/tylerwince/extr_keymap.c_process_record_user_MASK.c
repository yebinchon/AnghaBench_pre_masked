
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {int pressed; } ;
struct TYPE_6__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;
struct TYPE_7__ {int sat; int hue; int val; } ;





 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int) ;

bool FUNC_2(uint16_t VAR_2, keyrecord_t *VAR_3) {
  switch (VAR_2) {
    case 130:
      if (VAR_3->event.pressed) {
        FUNC_1(1);
      }
      return 0;
    case 129:
  if (VAR_3->event.pressed) {
    if (VAR_1.val) {
      FUNC_0(VAR_1.hue, VAR_1.sat, 0);
    } else {
      FUNC_0(VAR_1.hue, VAR_1.sat, 255);
    }
  }
  return 0;
    case 128:
      if (VAR_3->event.pressed) {
        VAR_0 ^= 1;
      }
      return 0;
  }
  return 1;
}
