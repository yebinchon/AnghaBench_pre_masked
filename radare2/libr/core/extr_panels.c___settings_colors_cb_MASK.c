
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


struct TYPE_15__ {TYPE_1__* panels; } ;
struct TYPE_14__ {TYPE_2__* view; } ;
struct TYPE_13__ {int depth; int n_refresh; TYPE_5__** refreshPanels; TYPE_3__** history; } ;
struct TYPE_12__ {size_t selectedIndex; TYPE_5__* p; int name; struct TYPE_12__** sub; } ;
struct TYPE_11__ {int refresh; } ;
struct TYPE_10__ {TYPE_4__* panels_menu; } ;
typedef TYPE_3__ RPanelsMenuItem ;
typedef TYPE_4__ RPanelsMenu ;
typedef TYPE_5__ RPanel ;
typedef TYPE_6__ RCore ;


 int VAR_0 ;
 int FUNC_0 (TYPE_6__*,int,int) ;
 int FUNC_1 (TYPE_6__*,char*,int ) ;
 int FUNC_2 (TYPE_6__*,char*,int ) ;
 int FUNC_3 (int ,int *,int *,int) ;

int FUNC_4(void *VAR_1) {
 RCore *VAR_2 = (RCore *)VAR_1;
 RPanelsMenu *VAR_3 = VAR_2->panels->panels_menu;
 RPanelsMenuItem *VAR_4 = VAR_3->history[VAR_3->depth - 1];
 RPanelsMenuItem *VAR_5 = VAR_4->sub[VAR_4->selectedIndex];
 FUNC_3 (VAR_5->name, ((void*)0), ((void*)0), -1);
 FUNC_2 (VAR_2, "eco %s", VAR_5->name);
 FUNC_0 (VAR_2, 0, 0);
 int VAR_6;
 for (VAR_6 = 1; VAR_6 < VAR_3->depth; VAR_6++) {
  RPanel *VAR_7 = VAR_3->history[VAR_6]->p;
  VAR_7->view->refresh = 1;
  VAR_3->refreshPanels[VAR_3->n_refresh++] = VAR_7;
 }
 FUNC_1(VAR_2, "Settings.Colors", VAR_0);
 return 0;
}
