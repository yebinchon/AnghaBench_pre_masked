
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
struct TYPE_7__ {int hue; int val; int sat; } ;





 int FUNC_0 () ;
 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ,int ) ;

bool FUNC_4(uint16_t VAR_2, keyrecord_t *VAR_3) {
  switch (VAR_2) {
    case 130:
      if (VAR_3->event.pressed) {
        VAR_0 = 0;
      }
      break;
    case 129:






      break;
    case 128:
      if (VAR_3->event.pressed) {
        VAR_0 = !VAR_0;
      }
      break;
  }

  if (VAR_0) {
    FUNC_2(1);
    uint16_t VAR_4 = (VAR_1.hue + 5) % 360;
    FUNC_3(VAR_4, VAR_1.sat, VAR_1.val);
  }

  return 1;
}
