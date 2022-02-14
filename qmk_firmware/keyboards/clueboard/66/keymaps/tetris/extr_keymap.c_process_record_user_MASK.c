
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {scalar_t__ pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;






 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

bool FUNC_0(uint16_t VAR_3, keyrecord_t *VAR_4) {
  if (VAR_4->event.pressed) {
    VAR_0++;
  }

  if (VAR_2 && VAR_4->event.pressed) {
    VAR_1 = 0;
    switch (VAR_3) {
    case 128: VAR_1 = 1; break;
    case 130: VAR_1 = 2; break;
    case 131: VAR_1 = 3; break;
    case 129: VAR_1 = 4; break;


    }
    if (VAR_1 != 0) {
      return 0;
    }
  }

  return 1;
}
