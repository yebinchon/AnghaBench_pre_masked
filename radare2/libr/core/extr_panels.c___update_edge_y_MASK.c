
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {TYPE_3__* panels; } ;
struct TYPE_12__ {TYPE_2__* view; } ;
struct TYPE_11__ {int n_panels; int mouse_orig_y; } ;
struct TYPE_9__ {int y; int h; } ;
struct TYPE_10__ {TYPE_1__ pos; } ;
typedef TYPE_3__ RPanels ;
typedef TYPE_4__ RPanel ;
typedef TYPE_5__ RCore ;


 TYPE_4__* FUNC_0 (TYPE_3__*,int) ;

void FUNC_1(RCore *VAR_0, int VAR_1) {
 RPanels *VAR_2 = VAR_0->panels;
 int VAR_3, VAR_4;
 int VAR_5 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_2->n_panels; VAR_3++) {
  RPanel *VAR_6 = FUNC_0 (VAR_2, VAR_3);
  if (VAR_6->view->pos.y - 2 <= VAR_2->mouse_orig_y &&
    VAR_2->mouse_orig_y <= VAR_6->view->pos.y + 2) {
   VAR_5 = VAR_6->view->pos.y;
   VAR_6->view->pos.y += VAR_1;
   VAR_6->view->pos.h -= VAR_1;
   for (VAR_4 = 0; VAR_4 < VAR_2->n_panels; VAR_4++) {
    RPanel *VAR_7 = FUNC_0 (VAR_2, VAR_4);
    if (VAR_7->view->pos.y + VAR_7->view->pos.h - 1 == VAR_5) {
     VAR_7->view->pos.h += VAR_1;
    }
   }
  }
 }
}
