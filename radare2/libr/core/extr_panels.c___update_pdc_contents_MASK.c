
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_20__ {int addr; } ;
struct TYPE_19__ {TYPE_3__* panels_root; int config; int offset; int anal; TYPE_5__* panels; } ;
struct TYPE_18__ {TYPE_4__* model; TYPE_2__* view; } ;
struct TYPE_17__ {int * can; } ;
struct TYPE_16__ {scalar_t__ cmdStrCache; } ;
struct TYPE_15__ {int * pdc_caches; int * cur_pdc_cache; } ;
struct TYPE_13__ {int x; int y; int w; int h; } ;
struct TYPE_14__ {int sx; TYPE_1__ pos; int sy; } ;
typedef int Sdb ;
typedef TYPE_5__ RPanels ;
typedef TYPE_6__ RPanel ;
typedef TYPE_7__ RCore ;
typedef int RConsCanvas ;
typedef TYPE_8__ RAnalFunction ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (char*) ;
 TYPE_8__* FUNC_4 (int ,int ,int ) ;
 char* FUNC_5 (int ,char*) ;
 int FUNC_6 (int *,int,int) ;
 int FUNC_7 (int *,char*) ;
 int * FUNC_8 (int *,int ,int) ;
 char* FUNC_9 (int *,int,int,int,int) ;
 int * FUNC_10 (char const*) ;
 scalar_t__ FUNC_11 (char,int) ;
 char* FUNC_12 (char*,char*) ;
 int FUNC_13 (int *,char const*) ;
 int * FUNC_14 () ;
 int FUNC_15 (int *,int *,int *,int ) ;
 scalar_t__ FUNC_16 (char*) ;

void FUNC_17(RCore *VAR_1, RPanel *VAR_2, char *VAR_3) {
 RPanels *VAR_4 = VAR_1->panels;
 RConsCanvas *VAR_5 = VAR_4->can;
 RAnalFunction *VAR_6 = FUNC_4 (VAR_1->anal, VAR_1->offset, VAR_0);
 int VAR_7 = VAR_2->view->sx;
 int VAR_8 = FUNC_0 (VAR_2->view->sy, 0);
 int VAR_9 = VAR_2->view->pos.x;
 int VAR_10 = VAR_2->view->pos.y;
 int VAR_11 = VAR_2->view->pos.w;
 int VAR_12 = VAR_2->view->pos.h;
 char *VAR_13 = ((void*)0);

 if (VAR_6) {
  if (VAR_1->panels_root->cur_pdc_cache) {
   FUNC_15 (VAR_1->panels_root->cur_pdc_cache, FUNC_8 (((void*)0), VAR_6->addr, 0), FUNC_10 (VAR_3), 0);
  } else {
   Sdb *VAR_14 = FUNC_14 ();
   const char *VAR_15 = FUNC_5 (VAR_1->config, "cmd.pdc");
   FUNC_15 (VAR_14, FUNC_8 (((void*)0), VAR_6->addr, 0), FUNC_10 (VAR_3), 0);
   VAR_1->panels_root->cur_pdc_cache = VAR_14;
   if (!FUNC_13 (VAR_1->panels_root->pdc_caches, VAR_15)) {
    FUNC_15 (VAR_1->panels_root->pdc_caches, FUNC_10 (VAR_15), VAR_14, 0);
   }
  }
 }

 if (VAR_2->model->cmdStrCache) {
  FUNC_2 (VAR_2);
 }

 (void) FUNC_6 (VAR_5, VAR_9 + 2, VAR_10 + 2);

 if (VAR_7 < 0) {
  char *VAR_16 = (char*)FUNC_11 (' ', 128);
  int VAR_17 = FUNC_1 (-VAR_7, FUNC_16 (VAR_16) - 1);
  VAR_16[VAR_17] = 0;
  VAR_13 = FUNC_9 (FUNC_10 (VAR_3),
    0, VAR_8, VAR_11 + VAR_7 - 3, VAR_12 - 2 + VAR_8);
  char *VAR_18 = FUNC_12 (VAR_13, VAR_16);
  if (VAR_18) {
   FUNC_3 (VAR_13);
   VAR_13 = VAR_18;
  }
 } else {
  VAR_13 = FUNC_9 (FUNC_10 (VAR_3),
    VAR_7, VAR_8, VAR_11 + VAR_7 - 3, VAR_12 - 2 + VAR_8);
 }
 if (VAR_13) {
  FUNC_7 (VAR_5, VAR_13);
  FUNC_3 (VAR_13);
 }
}
