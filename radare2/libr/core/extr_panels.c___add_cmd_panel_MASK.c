
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_21__ {TYPE_4__* panels; } ;
struct TYPE_20__ {TYPE_1__* view; } ;
struct TYPE_19__ {TYPE_3__* panels_menu; } ;
struct TYPE_18__ {int depth; TYPE_2__** history; } ;
struct TYPE_17__ {size_t selectedIndex; int name; struct TYPE_17__** sub; } ;
struct TYPE_16__ {int pos; } ;
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
 char* FUNC_4 (TYPE_6__*,int ) ;
 int FUNC_5 (TYPE_6__*,int ) ;
 int FUNC_6 (int *,int ,int,int ,int) ;
 int FUNC_7 (TYPE_6__*,int ) ;
 int FUNC_8 (TYPE_6__*,int,int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int*) ;

int FUNC_11(void *VAR_2) {
 RCore *VAR_3 = (RCore *)VAR_2;
 RPanels *VAR_4 = VAR_3->panels;
 if (!FUNC_1 (VAR_3)) {
  return 0;
 }
 RPanelsMenu *VAR_5 = VAR_3->panels->panels_menu;
 RPanelsMenuItem *VAR_6 = VAR_5->history[VAR_5->depth - 1];
 RPanelsMenuItem *VAR_7 = VAR_6->sub[VAR_6->selectedIndex];
 char *VAR_8 = FUNC_4 (VAR_3, VAR_7->name);
 if (!VAR_8) {
  return 0;
 }
 int VAR_9;
 (void)FUNC_10 (&VAR_9);
 FUNC_0 (VAR_3);
 FUNC_3 (VAR_3, 0, VAR_7->name, VAR_8);
 RPanel *VAR_10 = FUNC_2 (VAR_4, 0);
 FUNC_6 (&VAR_10->view->pos, 0, 1, VAR_0, VAR_9 - 1);
 FUNC_5 (VAR_3, 0);
 FUNC_8 (VAR_3, 0, 0);
 FUNC_7 (VAR_3, VAR_1);
 FUNC_9 (VAR_8);
 return 0;
}
