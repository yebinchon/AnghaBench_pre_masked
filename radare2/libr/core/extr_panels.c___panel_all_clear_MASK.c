
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* view; } ;
struct TYPE_10__ {int n_panels; int can; } ;
struct TYPE_8__ {int h; int w; int y; int x; } ;
struct TYPE_9__ {TYPE_1__ pos; } ;
typedef TYPE_3__ RPanels ;
typedef TYPE_4__ RPanel ;


 TYPE_4__* FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (int ,int ,int ,int ,int ,char) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;

void FUNC_4(RPanels *VAR_0) {
 if (!VAR_0) {
  return;
 }
 int VAR_1;
 RPanel *VAR_2 = ((void*)0);
 for (VAR_1 = 0; VAR_1 < VAR_0->n_panels; VAR_1++) {
  VAR_2 = FUNC_0 (VAR_0, VAR_1);
  FUNC_1 (VAR_0->can, VAR_2->view->pos.x, VAR_2->view->pos.y, VAR_2->view->pos.w, VAR_2->view->pos.h, ' ');
 }
 FUNC_2 (VAR_0->can);
 FUNC_3 ();
}
