
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





 int FUNC_0 (int,TYPE_2__*) ;
 int VAR_0 ;

__attribute__((used)) static bool FUNC_1(uint16_t VAR_1, keyrecord_t *VAR_2) {
  switch (VAR_1) {

    case 130:
    case 129:
      if (VAR_2->event.pressed) {
        VAR_0 = 1;
      }
      break;
    case 128:
      if (VAR_2->event.pressed) {
        VAR_0 = 0;
      }
      break;
  }

  if (!FUNC_0(VAR_1, VAR_2)) {
    return 0;
  }

  return 1;
}
