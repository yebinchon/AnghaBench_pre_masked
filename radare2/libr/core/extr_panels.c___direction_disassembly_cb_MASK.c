
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_25__ {int offset; TYPE_3__* print; TYPE_4__* panels; } ;
struct TYPE_24__ {TYPE_2__* model; TYPE_1__* view; } ;
struct TYPE_23__ {int mode; } ;
struct TYPE_22__ {int cols; int cur_enabled; } ;
struct TYPE_21__ {int addr; } ;
struct TYPE_20__ {int refresh; int sx; } ;
typedef TYPE_4__ RPanels ;
typedef TYPE_5__ RPanel ;
typedef TYPE_6__ RCore ;
typedef int RAsmOp ;
typedef int Direction ;




 int VAR_0 ;


 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (TYPE_6__*) ;
 TYPE_5__* FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_6__*,TYPE_5__*,int ) ;
 int FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (TYPE_6__*,int ,int) ;
 int FUNC_8 (TYPE_6__*,int) ;
 int FUNC_9 (TYPE_6__*,int *,int*) ;
 int FUNC_10 (TYPE_6__*,int*) ;

void FUNC_11(void *VAR_1, int VAR_2) {
 RCore *VAR_3 = (RCore *)VAR_1;
 RPanels *VAR_4 = VAR_3->panels;
 RPanel *VAR_5 = FUNC_4 (VAR_4);
 int VAR_6 = VAR_3->print->cols;
 VAR_5->view->refresh = 1;
 switch ((Direction)VAR_2) {
 case 130:
  if (VAR_3->print->cur_enabled) {
   FUNC_1 (VAR_3);
   FUNC_6 (VAR_3);
   FUNC_5 (VAR_3, VAR_5, VAR_3->offset);
  } else if (VAR_4->mode == VAR_0) {
   VAR_5->model->addr--;
  } else if (VAR_5->view->sx > 0) {
   VAR_5->view->sx--;
  }
  return;
 case 129:
  if (VAR_3->print->cur_enabled) {
   FUNC_2 (VAR_3);
   FUNC_6 (VAR_3);
   FUNC_5 (VAR_3, VAR_5, VAR_3->offset);
  } else if (VAR_4->mode == VAR_0) {
   VAR_5->model->addr++;
  } else {
   VAR_5->view->sx++;
  }
  return;
 case 128:
  VAR_3->offset = VAR_5->model->addr;
  if (VAR_3->print->cur_enabled) {
   FUNC_3 (VAR_3);
   FUNC_6 (VAR_3);
   FUNC_5 (VAR_3, VAR_5, VAR_3->offset);
  } else {
   FUNC_10 (VAR_3, &VAR_6);
   FUNC_8 (VAR_3, -VAR_6);
   FUNC_5 (VAR_3, VAR_5, VAR_3->offset);
  }
  return;
 case 131:
  VAR_3->offset = VAR_5->model->addr;
  if (VAR_3->print->cur_enabled) {
   FUNC_0 (VAR_3);
   FUNC_6 (VAR_3);
   FUNC_5 (VAR_3, VAR_5, VAR_3->offset);
  } else {
   RAsmOp VAR_7;
   FUNC_9 (VAR_3, &VAR_7, &VAR_6);
   FUNC_7 (VAR_3, VAR_3->offset + VAR_6, 1);
   FUNC_5 (VAR_3, VAR_5, VAR_3->offset);
  }
  return;
 }
}
