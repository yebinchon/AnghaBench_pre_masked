
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int x; int w; int y; } ;
struct TYPE_10__ {TYPE_1__* view; } ;
struct TYPE_9__ {int n_panels; int columnWidth; } ;
struct TYPE_8__ {TYPE_4__ pos; } ;
typedef TYPE_2__ RPanels ;
typedef TYPE_3__ RPanel ;


 int FUNC_0 (int,int ) ;
 TYPE_3__* FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_4__*,int,int,int,int) ;
 int FUNC_3 (int*) ;

void FUNC_4(RPanels *VAR_0) {
 int VAR_1, VAR_2 = FUNC_3 (&VAR_1);
 int VAR_3 = (VAR_1 - 1) / (VAR_0->n_panels - 1);
 int VAR_4;
 int VAR_5 = VAR_2 - VAR_0->columnWidth;
 RPanel *VAR_6 = FUNC_1 (VAR_0, 0);
 if (VAR_0->n_panels <= 1) {
  FUNC_2 (&VAR_6->view->pos, 0, 1, VAR_2, VAR_1 - 1);
  return;
 }
 FUNC_2 (&VAR_6->view->pos, 0, 1, VAR_5 + 1, VAR_1 - 1);

 int VAR_7 = VAR_6->view->pos.x + VAR_6->view->pos.w - 1;
 for (VAR_4 = 1; VAR_4 < VAR_0->n_panels; VAR_4++) {
  RPanel *VAR_8 = FUNC_1 (VAR_0, VAR_4);
  int VAR_9 = FUNC_0 (VAR_2 - VAR_5, 0);
  int VAR_10 = (VAR_4 + 1) == VAR_0->n_panels ? VAR_1 - VAR_8->view->pos.y : VAR_3;
  FUNC_2(&VAR_8->view->pos, VAR_7, 2 + (VAR_3 * (VAR_4 - 1)) - 1, VAR_9, VAR_10 + 1);
 }
}
