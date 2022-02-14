
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


struct TYPE_25__ {TYPE_4__* panels; } ;
struct TYPE_24__ {TYPE_1__* view; } ;
struct TYPE_23__ {TYPE_3__* panels_menu; } ;
struct TYPE_22__ {int depth; TYPE_2__** history; } ;
struct TYPE_21__ {size_t selectedIndex; int name; struct TYPE_21__** sub; } ;
struct TYPE_20__ {int pos; } ;
typedef TYPE_2__ RPanelsMenuItem ;
typedef TYPE_3__ RPanelsMenu ;
typedef TYPE_4__ RPanels ;
typedef TYPE_5__ RPanel ;
typedef TYPE_6__ RCore ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_6__*) ;
 TYPE_5__* FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (TYPE_6__*,int ,int ,char*) ;
 int FUNC_4 (TYPE_6__*,TYPE_5__*,char*,char*) ;
 int FUNC_5 (TYPE_6__*,TYPE_5__*,int ) ;
 int FUNC_6 (TYPE_6__*,int ) ;
 int FUNC_7 (int *,int ,int,int ,int) ;
 int FUNC_8 (TYPE_6__*,int ) ;
 int FUNC_9 (TYPE_6__*,int,int) ;
 int FUNC_10 (int*) ;

int FUNC_11(RCore *VAR_2, char *VAR_3, char *VAR_4) {
 RPanels *VAR_5 = VAR_2->panels;
 if (!FUNC_1 (VAR_2)) {
  return 0;
 }
 int VAR_6;
 (void)FUNC_10 (&VAR_6);
 RPanelsMenu *VAR_7 = VAR_2->panels->panels_menu;
 RPanelsMenuItem *VAR_8 = VAR_7->history[VAR_7->depth - 1];
 RPanelsMenuItem *VAR_9 = VAR_8->sub[VAR_8->selectedIndex];
 FUNC_0 (VAR_2);
 FUNC_3 (VAR_2, 0, VAR_9->name, "");
 RPanel *VAR_10 = FUNC_2 (VAR_5, 0);
 FUNC_7 (&VAR_10->view->pos, 0, 1, VAR_0, VAR_6 - 1);
 FUNC_5 (VAR_2, VAR_10, FUNC_4 (VAR_2, VAR_10, VAR_3, VAR_4));
 FUNC_6 (VAR_2, 0);
 FUNC_9 (VAR_2, 0, 0);
 FUNC_8 (VAR_2, VAR_1);
 return 0;
}
