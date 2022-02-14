
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__* print; int panels; } ;
struct TYPE_11__ {TYPE_1__* view; } ;
struct TYPE_10__ {int cur_enabled; int col; int cur; } ;
struct TYPE_9__ {int curpos; } ;
typedef TYPE_2__ RPrint ;
typedef TYPE_3__ RPanel ;
typedef TYPE_4__ RCore ;


 TYPE_3__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_4__*,TYPE_3__*) ;

void FUNC_2(RCore *VAR_0, bool VAR_1) {
 RPanel *VAR_2 = FUNC_0 (VAR_0->panels);
 RPrint *VAR_3 = VAR_0->print;
 VAR_3->cur_enabled = VAR_1;
 if (FUNC_1 (VAR_0, VAR_2)) {
  return;
 }
 if (VAR_1) {
  VAR_3->cur = VAR_2->view->curpos;
 } else {
  VAR_2->view->curpos = VAR_3->cur;
 }
 VAR_3->col = VAR_3->cur_enabled ? 1: 0;
}
