
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_21__ {TYPE_2__* print; int * panels; } ;
struct TYPE_20__ {TYPE_3__* view; TYPE_1__* model; } ;
struct TYPE_19__ {int refresh; } ;
struct TYPE_18__ {int cur_enabled; } ;
struct TYPE_17__ {int cache; } ;
typedef int RPanels ;
typedef TYPE_4__ RPanel ;
typedef TYPE_5__ RCore ;


 TYPE_4__* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_5__*,TYPE_4__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_5__*,TYPE_4__*,int *) ;
 int FUNC_5 (TYPE_5__*,int) ;
 int FUNC_6 (TYPE_5__*,char*) ;
 scalar_t__ FUNC_7 (TYPE_5__*,int,char*) ;

void FUNC_8(RCore *VAR_0) {
 RPanels *VAR_1 = VAR_0->panels;
 RPanel *VAR_2 = FUNC_0 (VAR_1);
 if (FUNC_2 (VAR_2) || FUNC_1 (VAR_0, VAR_2)) {
  if (VAR_2->model->cache) {
   if (FUNC_7 (VAR_0, 1, "You need to turn off cache to use cursor. Turn off now?(Y/n)")) {
    VAR_2->model->cache = 0;
    FUNC_4 (VAR_0, VAR_2, ((void*)0));
    (void)FUNC_6 (VAR_0, "Cache is off and cursor is on");
    FUNC_5 (VAR_0, !VAR_0->print->cur_enabled);
    VAR_2->view->refresh = 1;
    FUNC_3 (VAR_2);
   } else {
    (void)FUNC_6 (VAR_0, "You can always toggle cache by \'&\' key");
   }
   return;
  }
  FUNC_5 (VAR_0, !VAR_0->print->cur_enabled);
  VAR_2->view->refresh = 1;
 } else {
  (void)FUNC_6 (VAR_0, "Cursor is not available for the current panel.");
 }
}
