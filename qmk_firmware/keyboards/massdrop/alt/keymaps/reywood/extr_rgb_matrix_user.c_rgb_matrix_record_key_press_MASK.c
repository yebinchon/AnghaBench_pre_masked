
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int row; int col; } ;
struct TYPE_5__ {TYPE_3__ key; scalar_t__ pressed; } ;
struct TYPE_6__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;
typedef TYPE_3__ keypos_t ;


 int FUNC_0 (int ,int ) ;

void FUNC_1(keyrecord_t *VAR_0) {
  if (VAR_0->event.pressed) {
    keypos_t VAR_1 = VAR_0->event.key;
    FUNC_0(VAR_1.col, VAR_1.row);
  }
}
