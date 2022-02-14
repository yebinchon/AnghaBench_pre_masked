
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
struct TYPE_9__ {scalar_t__ x; int w; } ;
struct TYPE_10__ {TYPE_1__ pos; } ;
typedef TYPE_3__ RPanels ;
typedef TYPE_4__ RPanel ;
typedef TYPE_5__ RCore ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (int*) ;

void FUNC_2(RCore *VAR_1) {
 int VAR_2, VAR_3;
 (void)FUNC_1 (&VAR_3);
 RPanels *VAR_4 = VAR_1->panels;
 for (VAR_2 = 0; VAR_2 < VAR_4->n_panels; VAR_2++) {
  RPanel *VAR_5 = FUNC_0 (VAR_4, VAR_2);
  if (VAR_5->view->pos.x == 0) {
   if (VAR_5->view->pos.w >= VAR_0) {
    VAR_5->view->pos.x += VAR_0 - 1;
    VAR_5->view->pos.w -= VAR_0 - 1;
   }
  }
 }
}
