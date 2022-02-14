
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
struct TYPE_11__ {int n_panels; } ;
struct TYPE_9__ {int x; int w; int y; int h; } ;
struct TYPE_10__ {TYPE_1__ pos; } ;
typedef TYPE_3__ RPanels ;
typedef TYPE_4__ RPanel ;
typedef TYPE_5__ RCore ;


 TYPE_4__* FUNC_0 (TYPE_3__*,int) ;

int FUNC_1(RCore *VAR_0, int VAR_1, int VAR_2) {
 RPanels *VAR_3 = VAR_0->panels;
 int VAR_4 = -1;
 for (VAR_4 = 0; VAR_4 < VAR_3->n_panels; VAR_4++) {
  RPanel *VAR_5 = FUNC_0 (VAR_3, VAR_4);
  if (VAR_1 >= VAR_5->view->pos.x && VAR_1 < VAR_5->view->pos.x + VAR_5->view->pos.w) {
   if (VAR_2 >= VAR_5->view->pos.y && VAR_2 < VAR_5->view->pos.y + VAR_5->view->pos.h) {
    break;
   }
  }
 }
 return VAR_4;
}
