
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {TYPE_3__* print; int offset; int config; int * panels; } ;
struct TYPE_12__ {TYPE_4__* view; TYPE_2__* model; } ;
struct TYPE_8__ {int h; } ;
struct TYPE_11__ {int refresh; int curpos; int sy; int sx; TYPE_1__ pos; } ;
struct TYPE_10__ {int cur_enabled; } ;
struct TYPE_9__ {int addr; } ;
typedef int RPanels ;
typedef TYPE_5__ RPanel ;
typedef TYPE_6__ RCore ;
typedef int Direction ;






 TYPE_5__* FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;

void FUNC_2(void *VAR_0, int VAR_1) {
 RCore *VAR_2 = (RCore *)VAR_0;
 RPanels *VAR_3 = VAR_2->panels;
 RPanel *VAR_4 = FUNC_0 (VAR_3);
 VAR_4->view->refresh = 1;
 const int VAR_5 = VAR_4->view->pos.h / 3;
 int VAR_6;
 switch ((Direction)VAR_1) {
 case 130:
  if (VAR_2->print->cur_enabled) {
   return;
  }
  if (VAR_4->view->sx > 0) {
   VAR_4->view->sx -= FUNC_1 (VAR_2->config, "graph.scroll");
  }
  return;
 case 129:
  if (VAR_2->print->cur_enabled) {
   return;
  }
  VAR_4->view->sx += FUNC_1 (VAR_2->config, "graph.scroll");
  return;
 case 128:
  if (VAR_2->print->cur_enabled) {
   if (VAR_4->view->curpos > 0) {
    VAR_4->view->curpos--;
   }
   if (VAR_4->view->sy > 0) {
    VAR_6 = VAR_4->view->curpos - VAR_4->view->sy;
    if (VAR_6 < 0) {
     VAR_4->view->sy--;
    }
   }
  } else {
   if (VAR_4->view->sy > 0) {
    VAR_4->view->curpos -= 1;
    VAR_4->view->sy -= 1;
   }
  }
  return;
 case 131:
  VAR_2->offset = VAR_4->model->addr;
  if (VAR_2->print->cur_enabled) {
   VAR_4->view->curpos++;
   VAR_6 = VAR_4->view->curpos - VAR_4->view->sy;
   if (VAR_6 > VAR_5) {
    VAR_4->view->sy++;
   }
  } else {
   VAR_4->view->curpos += 1;
   VAR_4->view->sy += 1;
  }
  return;
 }
}
