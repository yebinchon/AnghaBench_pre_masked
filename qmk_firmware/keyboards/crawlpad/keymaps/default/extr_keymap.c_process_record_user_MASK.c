
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

bool FUNC_0(uint16_t VAR_1, keyrecord_t *VAR_2) {
  switch (VAR_1) {
  case 131:
    if (VAR_2->event.pressed) {
      VAR_0 |= (1 << 4);
    } else {
      VAR_0 &= ~(1 << 4);
    }
    return 0;
  case 130:
    if (VAR_2->event.pressed) {
      VAR_0 |= (1 << 5);
    } else {
      VAR_0 &= ~(1 << 5);
    }
    return 0;
  case 129:
    if (VAR_2->event.pressed) {
      VAR_0 |= (1 << 6);
    } else {
      VAR_0 &= ~(1 << 6);
    }
    return 0;
  case 128:
    if (VAR_2->event.pressed) {
      VAR_0 |= (1 << 7);
    } else {
      VAR_0 &= ~(1 << 7);
    }
    return 0;
  }
  return 1;
}
