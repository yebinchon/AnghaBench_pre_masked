
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int config; TYPE_3__* panels; } ;
struct TYPE_12__ {TYPE_2__* view; } ;
struct TYPE_11__ {int n_panels; int mouse_on_edge_x; int mouse_orig_x; } ;
struct TYPE_9__ {int const x; } ;
struct TYPE_10__ {TYPE_1__ pos; } ;
typedef TYPE_3__ RPanels ;
typedef TYPE_4__ RPanel ;
typedef TYPE_5__ RCore ;


 TYPE_4__* FUNC_0 (TYPE_3__*,int) ;
 scalar_t__ FUNC_1 (int ,char*) ;

bool FUNC_2(RCore *VAR_0, int VAR_1, int VAR_2) {
 RPanels *VAR_3 = VAR_0->panels;
 const int VAR_4 = FUNC_1 (VAR_0->config, "scr.panelborder")? 3: 1;
 int VAR_5 = 0;
 for (; VAR_5 < VAR_3->n_panels; VAR_5++) {
  RPanel *VAR_6 = FUNC_0 (VAR_3, VAR_5);
  if (VAR_1 > VAR_6->view->pos.x - (VAR_4 - 1) && VAR_1 <= VAR_6->view->pos.x + VAR_4) {
   VAR_3->mouse_on_edge_x = 1;
   VAR_3->mouse_orig_x = VAR_1;
   return 1;
  }
 }
 return 0;
}
