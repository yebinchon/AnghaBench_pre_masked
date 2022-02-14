
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_17__ {TYPE_4__* panels; TYPE_1__* print; } ;
struct TYPE_16__ {TYPE_3__* view; } ;
struct TYPE_15__ {int * can; } ;
struct TYPE_13__ {int x; int y; int w; int h; } ;
struct TYPE_14__ {int sx; int sy; int curpos; TYPE_2__ pos; } ;
struct TYPE_12__ {scalar_t__ cur_enabled; } ;
typedef TYPE_4__ RPanels ;
typedef TYPE_5__ RPanel ;
typedef TYPE_6__ RCore ;
typedef int RConsCanvas ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_6__*,TYPE_5__*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *,char*) ;
 char* FUNC_7 (char const*,int,int,int,int) ;
 scalar_t__ FUNC_8 (char,int) ;
 char* FUNC_9 (char*,char*) ;
 scalar_t__ FUNC_10 (char*) ;

void FUNC_11(RCore *VAR_1, RPanel *VAR_2, const char *VAR_3) {
 bool VAR_4 = FUNC_3 (VAR_1, VAR_2) && VAR_1->print->cur_enabled;
 int VAR_5 = VAR_4 ? -2 :VAR_2->view->sx;
 int VAR_6 = FUNC_0 (VAR_2->view->sy, 0);
 int VAR_7 = VAR_2->view->pos.x;
 int VAR_8 = VAR_2->view->pos.y;
 int VAR_9 = VAR_2->view->pos.w;
 int VAR_10 = VAR_2->view->pos.h;
 int VAR_11 = FUNC_2 (VAR_2, VAR_0) ? 1 : 0;
 char *VAR_12 = ((void*)0);
 RPanels *VAR_13 = VAR_1->panels;
 RConsCanvas *VAR_14 = VAR_13->can;
 (void) FUNC_5 (VAR_14, VAR_7 + 2, VAR_8 + 2);
 if (VAR_5 < 0) {
  char *VAR_15 = (char*)FUNC_8 (' ', 128);
  int VAR_16 = FUNC_1 (-VAR_5, FUNC_10 (VAR_15) - 1);
  VAR_15[VAR_16] = 0;
  VAR_12 = FUNC_7 (VAR_3,
    0, VAR_6 + VAR_11, VAR_9 + VAR_5 - 3, VAR_10 - 2 + VAR_6);
  char *VAR_17 = FUNC_9 (VAR_12, VAR_15);
  if (VAR_17) {
   FUNC_4 (VAR_12);
   VAR_12 = VAR_17;
  }
 } else {
  VAR_12 = FUNC_7 (VAR_3,
    VAR_5, VAR_6 + VAR_11, VAR_9 + VAR_5 - 3, VAR_10 - 2 + VAR_6);
 }
 if (VAR_12) {
  FUNC_6 (VAR_14, VAR_12);
  FUNC_4 (VAR_12);
 }
 if (VAR_4) {
  int VAR_18 = VAR_2->view->curpos - VAR_2->view->sy;
  (void) FUNC_5 (VAR_14, VAR_2->view->pos.x + 2, VAR_2->view->pos.y + 2 + VAR_18);
  FUNC_6 (VAR_14, "*");
 }
}
