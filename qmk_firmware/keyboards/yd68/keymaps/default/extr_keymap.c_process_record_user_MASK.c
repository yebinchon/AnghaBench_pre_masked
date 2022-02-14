
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
    case 129:
      if (VAR_2->event.pressed) {

      } else {

      }
      break;
    case 128:
      if (VAR_2->event.pressed) {

  VAR_0 ^= (1<<2);
      } else {

      }
      break;
  }
  return 1;
}
