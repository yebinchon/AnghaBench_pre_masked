
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {TYPE_3__* print; TYPE_1__* dbg; int * panels; } ;
struct TYPE_12__ {TYPE_2__* view; } ;
struct TYPE_11__ {int cur; int cur_enabled; } ;
struct TYPE_10__ {int refresh; int sx; } ;
struct TYPE_9__ {int regcols; } ;
typedef int RPanels ;
typedef TYPE_4__ RPanel ;
typedef TYPE_5__ RCore ;
typedef int Direction ;






 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*) ;
 TYPE_4__* FUNC_2 (int *) ;

void FUNC_3(void *VAR_0, int VAR_1) {
 RCore *VAR_2 = (RCore *)VAR_0;
 RPanels *VAR_3 = VAR_2->panels;
 RPanel *VAR_4 = FUNC_2 (VAR_3);
 int VAR_5 = VAR_2->dbg->regcols;
 VAR_5 = VAR_5 > 0 ? VAR_5 : 3;
 VAR_4->view->refresh = 1;
 switch ((Direction)VAR_1) {
 case 130:
  if (VAR_2->print->cur_enabled) {
   FUNC_0 (VAR_2);
  } else if (VAR_4->view->sx > 0) {
   VAR_4->view->sx--;
   VAR_4->view->refresh = 1;
  }
  return;
 case 129:
  if (VAR_2->print->cur_enabled) {
   FUNC_1 (VAR_2);
  } else {
   VAR_4->view->sx++;
   VAR_4->view->refresh = 1;
  }
  return;
 case 128:
  if (VAR_2->print->cur_enabled) {
   int VAR_6 = VAR_2->print->cur;
   VAR_6 -= VAR_5;
   if (VAR_6 >= 0) {
    VAR_2->print->cur = VAR_6;
   }
  }
  return;
 case 131:
  if (VAR_2->print->cur_enabled) {
   VAR_2->print->cur += VAR_5;
  }
  return;
 }
}
