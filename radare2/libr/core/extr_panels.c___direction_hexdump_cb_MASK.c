
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_17__ {TYPE_2__* print; int config; int * panels; } ;
struct TYPE_16__ {TYPE_4__* view; TYPE_3__* model; } ;
struct TYPE_12__ {int h; } ;
struct TYPE_15__ {int refresh; int sy; TYPE_1__ pos; } ;
struct TYPE_14__ {int addr; int cache; } ;
struct TYPE_13__ {int cur; int cur_enabled; } ;
typedef int RPanels ;
typedef TYPE_5__ RPanel ;
typedef TYPE_6__ RCore ;
typedef int Direction ;






 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_6__*) ;
 TYPE_5__* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_6__*,TYPE_5__*,int ) ;
 int FUNC_4 (int ,char*) ;

void FUNC_5(void *VAR_0, int VAR_1) {
 RCore *VAR_2 = (RCore *)VAR_0;
 RPanels *VAR_3 = VAR_2->panels;
 RPanel *VAR_4 = FUNC_2 (VAR_3);
 int VAR_5 = FUNC_4 (VAR_2->config, "hex.cols");
 if (VAR_5 < 1) {
  VAR_5 = 16;
 }
 VAR_4->view->refresh = 1;
 switch ((Direction)VAR_1) {
 case 130:
  if (!VAR_2->print->cur) {
   VAR_4->model->addr -= VAR_5;
   VAR_2->print->cur += VAR_5 - 1;
  } else if (VAR_2->print->cur_enabled) {
   FUNC_0 (VAR_2);
  } else {
   VAR_4->model->addr--;
  }
  return;
 case 129:
  if (VAR_2->print->cur / VAR_5 + 1 > VAR_4->view->pos.h - 5
    && VAR_2->print->cur % VAR_5 == VAR_5 - 1) {
   VAR_4->model->addr += VAR_5;
   VAR_2->print->cur -= VAR_5 - 1;
  } else if (VAR_2->print->cur_enabled) {
   FUNC_1 (VAR_2);
  } else {
   VAR_4->model->addr++;
  }
  return;
 case 128:
  if (!VAR_4->model->cache) {
   if (VAR_2->print->cur_enabled) {
    if (!(VAR_2->print->cur / VAR_5)) {
     VAR_4->model->addr -= VAR_5;
    } else {
     VAR_2->print->cur -= VAR_5;
    }
   } else {
    if (VAR_4->model->addr <= VAR_5) {
     FUNC_3 (VAR_2, VAR_4, 0);
    } else {
     VAR_4->model->addr -= VAR_5;
    }
   }
  } else if (VAR_4->view->sy > 0) {
   VAR_4->view->sy--;
  }
  return;
 case 131:
  if (!VAR_4->model->cache) {
   if (VAR_2->print->cur_enabled) {
    if (VAR_2->print->cur / VAR_5 + 1 > VAR_4->view->pos.h - 5) {
     VAR_4->model->addr += VAR_5;
    } else {
     VAR_2->print->cur += VAR_5;
    }
   } else {
    VAR_4->model->addr += VAR_5;
   }
  } else {
   VAR_4->view->sy++;
  }
  return;
 }
}
