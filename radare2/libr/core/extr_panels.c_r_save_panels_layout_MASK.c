
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_18__ {TYPE_4__* panels; } ;
struct TYPE_17__ {TYPE_3__* view; TYPE_1__* model; } ;
struct TYPE_16__ {int n_panels; } ;
struct TYPE_14__ {int h; int w; int y; int x; } ;
struct TYPE_15__ {TYPE_2__ pos; } ;
struct TYPE_13__ {int cmd; int title; } ;
typedef TYPE_4__ RPanels ;
typedef TYPE_5__ RPanel ;
typedef TYPE_6__ RCore ;
typedef int PJ ;
typedef int FILE ;


 scalar_t__ FUNC_0 (char const*) ;
 char* FUNC_1 (char const*) ;
 TYPE_5__* FUNC_2 (TYPE_4__*,int) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_6__*,char*) ;
 char* FUNC_4 (TYPE_6__*,char*) ;
 int FUNC_5 (TYPE_6__*,char*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*,char*) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,char*,int ) ;
 int FUNC_12 (int *,char*,int ) ;
 int * FUNC_13 () ;
 int FUNC_14 (int *) ;
 int * FUNC_15 (char*,char*) ;

void FUNC_16(RCore *VAR_1) {
 int VAR_2;
 if (!VAR_1->panels) {
  return;
 }
 const char *VAR_3 = FUNC_4 (VAR_1, "Name for the layout: ");
 if (FUNC_0 (VAR_3)) {
  (void)FUNC_3 (VAR_1, "Name can't be empty!");
  return;
 }
 char *VAR_4 = FUNC_1 (VAR_3);
 RPanels *VAR_5 = VAR_1->panels;
 PJ *VAR_6 = FUNC_13 ();
 for (VAR_2 = 0; VAR_2 < VAR_5->n_panels; VAR_2++) {
  RPanel *VAR_7 = FUNC_2 (VAR_5, VAR_2);
  FUNC_14 (VAR_6);
  FUNC_12 (VAR_6, "Title", VAR_7->model->title);
  FUNC_12 (VAR_6, "Cmd", VAR_7->model->cmd);
  FUNC_11 (VAR_6, "x", VAR_7->view->pos.x);
  FUNC_11 (VAR_6, "y", VAR_7->view->pos.y);
  FUNC_11 (VAR_6, "w", VAR_7->view->pos.w);
  FUNC_11 (VAR_6, "h", VAR_7->view->pos.h);
  FUNC_10 (VAR_6);
 }
 FILE *VAR_8 = FUNC_15 (VAR_4, "w");
 if (VAR_8) {
  char *VAR_9 = FUNC_9 (VAR_6);
  FUNC_7 (VAR_8, "%s\n", VAR_9);
  FUNC_8 (VAR_9);
  FUNC_6 (VAR_8);
  FUNC_5 (VAR_1, "File.Load Layout.Saved", VAR_0);
  (void)FUNC_3 (VAR_1, "Panels layout saved!");
 }
 FUNC_8 (VAR_4);
}
