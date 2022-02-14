
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {scalar_t__ pressed; } ;
struct TYPE_6__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;
struct TYPE_7__ {int mods; } ;


 int FUNC_0 (int ) ;
 TYPE_4__* VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(uint16_t VAR_1, keyrecord_t *VAR_2, uint16_t VAR_3) {
  if (VAR_2->event.pressed && (VAR_0->mods & FUNC_0(VAR_3))) {
    FUNC_1(VAR_1);
    return 0;
  } else {
    FUNC_2(VAR_1);
    return 1;
  }
}
