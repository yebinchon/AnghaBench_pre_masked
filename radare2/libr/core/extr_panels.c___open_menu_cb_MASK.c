
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_20__ {int x; int w; int y; int h; } ;
struct TYPE_19__ {TYPE_1__* panels; } ;
struct TYPE_18__ {int depth; TYPE_6__** history; int n_refresh; TYPE_5__** refreshPanels; TYPE_2__* root; } ;
struct TYPE_17__ {size_t selectedIndex; TYPE_5__* p; struct TYPE_17__** sub; } ;
struct TYPE_16__ {TYPE_4__* view; TYPE_3__* model; } ;
struct TYPE_15__ {int refresh; TYPE_9__ pos; } ;
struct TYPE_14__ {int type; int title; } ;
struct TYPE_13__ {int selectedIndex; } ;
struct TYPE_12__ {TYPE_7__* panels_menu; } ;
typedef int RStrBuf ;
typedef TYPE_6__ RPanelsMenuItem ;
typedef TYPE_7__ RPanelsMenu ;
typedef TYPE_8__ RCore ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_8__*,TYPE_6__*) ;
 int FUNC_1 (TYPE_9__*,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int*) ;
 int FUNC_4 (int *) ;

int FUNC_5 (void *VAR_1) {
 RCore* VAR_2 = (RCore *)VAR_1;
 RPanelsMenu *VAR_3 = VAR_2->panels->panels_menu;
 RPanelsMenuItem *VAR_4 = VAR_3->history[VAR_3->depth - 1];
 RPanelsMenuItem *VAR_5 = VAR_4->sub[VAR_4->selectedIndex];
 if (VAR_3->depth < 2) {
  FUNC_1 (&VAR_5->p->view->pos, VAR_3->root->selectedIndex * 6, 1);
 } else {
  RPanelsMenuItem *VAR_6 = VAR_3->history[VAR_3->depth - 2];
  RPanelsMenuItem *VAR_7 = VAR_6->sub[VAR_6->selectedIndex];
  FUNC_1 (&VAR_5->p->view->pos, VAR_7->p->view->pos.x + VAR_7->p->view->pos.w - 1,
    VAR_3->depth == 2 ? VAR_7->p->view->pos.y + VAR_7->selectedIndex : VAR_7->p->view->pos.y);
 }
 RStrBuf *VAR_8 = FUNC_0 (VAR_2, VAR_5);
 if (!VAR_8) {
  return 0;
 }
 FUNC_2 (VAR_5->p->model->title);
 VAR_5->p->model->title = FUNC_4 (VAR_8);
 VAR_5->p->view->pos.w = FUNC_3 (VAR_5->p->model->title, &VAR_5->p->view->pos.h);
 VAR_5->p->view->pos.h += 4;
 VAR_5->p->model->type = VAR_0;
 VAR_5->p->view->refresh = 1;
 VAR_3->refreshPanels[VAR_3->n_refresh++] = VAR_5->p;
 VAR_3->history[VAR_3->depth++] = VAR_5;
 return 0;
}
