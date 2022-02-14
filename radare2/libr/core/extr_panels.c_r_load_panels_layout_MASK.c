
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_20__ {TYPE_3__* panels; } ;
struct TYPE_19__ {TYPE_2__* model; TYPE_1__* view; } ;
struct TYPE_18__ {scalar_t__ n_panels; } ;
struct TYPE_17__ {void* cmd; void* title; } ;
struct TYPE_16__ {int pos; } ;
typedef int RStrBuf ;
typedef TYPE_3__ RPanels ;
typedef TYPE_4__ RPanel ;
typedef TYPE_5__ RCore ;


 scalar_t__ FUNC_0 (char*) ;
 TYPE_4__* FUNC_1 (TYPE_3__*,scalar_t__) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (TYPE_5__*,TYPE_4__*,char*,char*) ;
 int FUNC_4 (TYPE_3__*) ;
 char* FUNC_5 (char*,scalar_t__) ;
 int FUNC_6 (TYPE_5__*,int ) ;
 int FUNC_7 (int *,int ,int ,int ,int ) ;
 int FUNC_8 (TYPE_4__*,int ) ;
 int FUNC_9 (TYPE_5__*,int,int) ;
 int FUNC_10 (TYPE_5__*,char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*) ;
 int VAR_0 ;
 int FUNC_13 (int *,char*,int ) ;
 char* FUNC_14 (char*,int *) ;
 int FUNC_15 (char*) ;
 void* FUNC_16 (void*,char*) ;
 scalar_t__ FUNC_17 (char*,char*) ;
 char* FUNC_18 (char*,char const*) ;
 int FUNC_19 (char*,char) ;
 int FUNC_20 (int *) ;
 int * FUNC_21 (int *) ;
 char* FUNC_22 (char*,char*) ;
 scalar_t__ FUNC_23 (char*) ;

bool FUNC_24(RCore *VAR_1, const char *VAR_2) {
 if (!VAR_1->panels) {
  return 0;
 }
 char *VAR_3 = FUNC_2 (VAR_2);
 if (!VAR_3) {
  char *VAR_4 = FUNC_18 ("No saved layout found for the name: %s", VAR_2);
  (void)FUNC_10 (VAR_1, VAR_4);
  FUNC_12 (VAR_4);
  return 0;
 }
 char *VAR_5 = FUNC_14 (VAR_3, ((void*)0));
 FUNC_12 (VAR_3);
 if (!VAR_5) {
  char *VAR_6 = FUNC_18 ("Layout is empty: %s", VAR_2);
  (void)FUNC_10 (VAR_1, VAR_6);
  FUNC_12 (VAR_6);
  return 0;
 }
 RPanels *VAR_7 = VAR_1->panels;
 FUNC_4 (VAR_7);
 VAR_7->n_panels = 0;
 FUNC_6 (VAR_1, 0);
 char *VAR_8, *VAR_9, *VAR_10, *VAR_11, *VAR_12, *VAR_13, *VAR_14 = VAR_5, *VAR_15;
 int VAR_16, VAR_17;
 VAR_15 = FUNC_5 (VAR_14, FUNC_23 (VAR_14));
 VAR_17 = FUNC_19 (VAR_15, '\n');
 for (VAR_16 = 0; VAR_16 < VAR_17; VAR_16++) {
  if (FUNC_0 (VAR_15)) {
   break;
  }
  VAR_8 = FUNC_22 (VAR_15, "Title");
  VAR_9 = FUNC_22 (VAR_15, "Cmd");
  (void)FUNC_15 (VAR_9);
  VAR_10 = FUNC_22 (VAR_15, "x");
  VAR_11 = FUNC_22 (VAR_15, "y");
  VAR_12 = FUNC_22 (VAR_15, "w");
  VAR_13 = FUNC_22 (VAR_15, "h");
  RPanel *VAR_18 = FUNC_1 (VAR_7, VAR_7->n_panels);
  FUNC_7 (&VAR_18->view->pos, FUNC_11 (VAR_10), FUNC_11 (VAR_11), FUNC_11 (VAR_12),FUNC_11 (VAR_13));
  FUNC_3 (VAR_1, VAR_18, VAR_8, VAR_9);
  if (FUNC_17 (VAR_9, "Help")) {
   VAR_18->model->title = FUNC_16 (VAR_18->model->title, "Help");
   VAR_18->model->cmd = FUNC_16 (VAR_18->model->cmd, "Help");
   RStrBuf *VAR_19 = FUNC_21 (((void*)0));
   FUNC_13 (VAR_19, "Visual Ascii Art Panels", VAR_0);
   if (!VAR_19) {
    return 0;
   }
   FUNC_8 (VAR_18, FUNC_20 (VAR_19));
  }
  VAR_15 += FUNC_23 (VAR_15) + 1;
 }
 VAR_14 += FUNC_23 (VAR_14) + 1;
 FUNC_12 (VAR_5);
 if (!VAR_7->n_panels) {
  return 0;
 }
 FUNC_9 (VAR_1, 1, 0);
 return 1;
}
