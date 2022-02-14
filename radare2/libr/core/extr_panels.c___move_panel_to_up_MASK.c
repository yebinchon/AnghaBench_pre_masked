
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_17__ {int w; int x; scalar_t__ h; scalar_t__ y; } ;
struct TYPE_16__ {TYPE_2__* panels; } ;
struct TYPE_15__ {TYPE_1__* view; } ;
struct TYPE_14__ {int n_panels; TYPE_3__** panel; } ;
struct TYPE_13__ {TYPE_6__ pos; } ;
typedef TYPE_2__ RPanels ;
typedef TYPE_3__ RPanel ;
typedef TYPE_4__ RCore ;


 int FUNC_0 (TYPE_4__*) ;
 TYPE_3__* FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (TYPE_6__*,int ,int,int,int) ;
 int FUNC_4 (TYPE_4__*,int) ;
 int FUNC_5 (int*) ;

void FUNC_6(RCore *VAR_0, RPanel *VAR_1, int VAR_2) {
 RPanels *VAR_3 = VAR_0->panels;
 FUNC_4 (VAR_0, VAR_2);
 VAR_3->panel[0] = VAR_1;
 int VAR_4, VAR_5 = FUNC_5 (&VAR_4);
 int VAR_6 = VAR_4 / 2;
 int VAR_7 = VAR_4 - VAR_6;
 FUNC_3 (&VAR_1->view->pos, 0, 1, VAR_5, VAR_6 - 1);
 int VAR_8 = 1;
 for (; VAR_8 < VAR_3->n_panels; VAR_8++) {
  RPanel *VAR_9 = FUNC_1 (VAR_3, VAR_8);
  int VAR_10 = ((double)VAR_9->view->pos.y / (double)VAR_4) * (double)VAR_7 + VAR_6;
  int VAR_11 = ((double)VAR_9->view->pos.h / (double)VAR_4) * (double)VAR_7 + 1;
  FUNC_3 (&VAR_9->view->pos, VAR_9->view->pos.x, VAR_10, VAR_9->view->pos.w, VAR_11);
 }
 FUNC_0 (VAR_0);
 FUNC_2 (VAR_0, 0);
}
