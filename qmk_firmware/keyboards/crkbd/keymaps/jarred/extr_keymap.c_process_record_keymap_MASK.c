
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {scalar_t__ pressed; } ;
struct TYPE_6__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;


 int FUNC_0 (int ,TYPE_2__*) ;

bool FUNC_1(uint16_t VAR_0, keyrecord_t *VAR_1) {
  if (VAR_1->event.pressed) {
    FUNC_0(VAR_0, VAR_1);
  }

  return 1;
}
