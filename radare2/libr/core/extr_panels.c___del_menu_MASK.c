
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {TYPE_5__* panels; } ;
struct TYPE_13__ {TYPE_4__* panels_menu; } ;
struct TYPE_12__ {int depth; int n_refresh; TYPE_3__** history; TYPE_2__** refreshPanels; } ;
struct TYPE_11__ {TYPE_2__* p; } ;
struct TYPE_10__ {TYPE_1__* view; } ;
struct TYPE_9__ {int refresh; } ;
typedef TYPE_4__ RPanelsMenu ;
typedef TYPE_5__ RPanels ;
typedef TYPE_6__ RCore ;


 int FUNC_0 (TYPE_6__*,int,int) ;

void FUNC_1(RCore *VAR_0) {
 RPanels *VAR_1 = VAR_0->panels;
 RPanelsMenu *VAR_2 = VAR_1->panels_menu;
 int VAR_3;
 VAR_2->depth--;
 for (VAR_3 = 1; VAR_3 < VAR_2->depth; VAR_3++) {
  VAR_2->history[VAR_3]->p->view->refresh = 1;
  VAR_2->refreshPanels[VAR_3 - 1] = VAR_2->history[VAR_3]->p;
 }
 VAR_2->n_refresh = VAR_2->depth - 1;
 FUNC_0 (VAR_0, 0, 0);
}
