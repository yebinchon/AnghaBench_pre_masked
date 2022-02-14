
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
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;

bool FUNC_3(uint16_t VAR_2, keyrecord_t *VAR_3) {
  if (VAR_3->event.pressed) {
    FUNC_1(4);
  } else {
    FUNC_1(6);
  }

  if (FUNC_0(VAR_2)) {
    if (VAR_3->event.pressed) {
      FUNC_2(VAR_1);
    } else {
      FUNC_2(VAR_0);
    }
  }

  return 1;
}
