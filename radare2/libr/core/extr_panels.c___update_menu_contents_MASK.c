
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {TYPE_3__* view; TYPE_2__* model; } ;
struct TYPE_14__ {int n_refresh; TYPE_6__** refreshPanels; } ;
struct TYPE_13__ {TYPE_6__* p; } ;
struct TYPE_10__ {int h; int w; } ;
struct TYPE_12__ {int refresh; TYPE_1__ pos; } ;
struct TYPE_11__ {int type; int title; } ;
typedef int RStrBuf ;
typedef TYPE_4__ RPanelsMenuItem ;
typedef TYPE_5__ RPanelsMenu ;
typedef TYPE_6__ RPanel ;
typedef int RCore ;


 int VAR_0 ;
 int * FUNC_0 (int *,TYPE_4__*) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int*) ;
 int FUNC_4 (int *) ;

void FUNC_5(RCore *VAR_1, RPanelsMenu *VAR_2, RPanelsMenuItem *VAR_3) {
 RPanel *VAR_4 = VAR_3->p;
 RStrBuf *VAR_5 = FUNC_0 (VAR_1, VAR_3);
 if (!VAR_5) {
  return;
 }
 FUNC_2 (VAR_4->model->title);
 VAR_4->model->title = FUNC_4 (VAR_5);
 int VAR_6 = FUNC_3 (VAR_4->model->title, &VAR_4->view->pos.h);
 if (VAR_6 < VAR_4->view->pos.w) {
  FUNC_1 (VAR_1, 0, 0);
 }
 VAR_4->view->pos.w = VAR_6;
 VAR_4->view->pos.h += 4;
 VAR_4->model->type = VAR_0;
 VAR_4->view->refresh = 1;
 VAR_2->refreshPanels[VAR_2->n_refresh++] = VAR_4;
}
