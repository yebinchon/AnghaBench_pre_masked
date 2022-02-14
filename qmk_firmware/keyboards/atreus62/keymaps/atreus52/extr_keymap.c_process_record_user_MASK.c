
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_4__ {scalar_t__ pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;

bool FUNC_1 (uint16_t VAR_4, keyrecord_t *VAR_5) {
  if (VAR_4 == VAR_2) {
    if (VAR_5->event.pressed) {
      VAR_3 |= 0b00000001;
    } else {
      VAR_3 &= ~(0b00000001);
    }
  }
  if (VAR_4 == VAR_1) {
    if (VAR_5->event.pressed) {
      VAR_3 |= 0b00000010;
    } else {
      VAR_3 &= ~(0b00000010);
    }
  }

  if (VAR_3 == 0b00000011) {
    FUNC_0(VAR_0);
  }
  return 1;
}
