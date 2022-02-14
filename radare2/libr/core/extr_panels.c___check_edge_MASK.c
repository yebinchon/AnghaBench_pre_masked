
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* view; } ;
struct TYPE_10__ {int n_panels; } ;
struct TYPE_8__ {int x; int w; int y; int h; } ;
struct TYPE_9__ {int edgeflag; TYPE_1__ pos; } ;
typedef TYPE_3__ RPanels ;
typedef TYPE_4__ RPanel ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (TYPE_3__*,int) ;

void FUNC_1(RPanels *VAR_2) {
 int VAR_3, VAR_4, VAR_5, VAR_6 = 0, VAR_7 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_2->n_panels; VAR_3++) {
  RPanel *VAR_8 = FUNC_0 (VAR_2, VAR_3);
  if (!VAR_8) {
   continue;
  }
  VAR_4 = VAR_8->view->pos.x + VAR_8->view->pos.w;
  VAR_5 = VAR_8->view->pos.y + VAR_8->view->pos.h;
  if (VAR_4 > VAR_6) {
   VAR_6 = VAR_4;
  }
  if (VAR_5 > VAR_7) {
   VAR_7 = VAR_5;
  }
 }
 int VAR_9, VAR_10;
 for (VAR_3 = 0; VAR_3 < VAR_2->n_panels; VAR_3++) {
  RPanel *VAR_11 = FUNC_0 (VAR_2, VAR_3);
  if (!VAR_11) {
   continue;
  }
  VAR_9 = VAR_10 = 0;
  if (VAR_11->view->pos.x + VAR_11->view->pos.w == VAR_6) {
   VAR_9 = (1 << VAR_1);
  }
  if (VAR_11->view->pos.y + VAR_11->view->pos.h == VAR_7) {
   VAR_10 = (1 << VAR_0);
  }
  VAR_11->view->edgeflag = VAR_9 | VAR_10;
 }
}
