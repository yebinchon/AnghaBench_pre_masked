
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_4__ {int pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;
typedef int keypos_t ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

bool FUNC_2(uint16_t VAR_0, keyrecord_t *VAR_1) {
  keypos_t VAR_2;
  uint8_t VAR_3;
  uint8_t VAR_4;
  switch (VAR_0) {
  case 128:
    if (!VAR_1->event.pressed) {
      VAR_3 = FUNC_1(VAR_2);
      VAR_4 = VAR_3+1;
      FUNC_0(VAR_4);
    }
    break;
  case 129:
    if (!VAR_1->event.pressed) {
      VAR_3 = FUNC_1(VAR_2);
      VAR_4 = VAR_3-1;
      FUNC_0(VAR_4);
    }
    break;
  }
  return 1;
}
