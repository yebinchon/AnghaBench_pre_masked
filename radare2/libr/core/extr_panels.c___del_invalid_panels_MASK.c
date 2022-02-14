
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {TYPE_3__* panels; } ;
struct TYPE_13__ {TYPE_1__* view; } ;
struct TYPE_12__ {int n_panels; } ;
struct TYPE_11__ {int w; int h; } ;
struct TYPE_10__ {TYPE_2__ pos; } ;
typedef TYPE_3__ RPanels ;
typedef TYPE_4__ RPanel ;
typedef TYPE_5__ RCore ;


 int FUNC_0 (TYPE_5__*,int) ;
 TYPE_4__* FUNC_1 (TYPE_3__*,int) ;

void FUNC_2(RCore *VAR_0) {
 RPanels *VAR_1 = VAR_0->panels;
 int VAR_2;
 for (VAR_2 = 1; VAR_2 < VAR_1->n_panels; VAR_2++) {
  RPanel *VAR_3 = FUNC_1 (VAR_1, VAR_2);
  if (VAR_3->view->pos.w < 2) {
   FUNC_0 (VAR_0, VAR_2);
   FUNC_2 (VAR_0);
   break;
  }
  if (VAR_3->view->pos.h < 2) {
   FUNC_0 (VAR_0, VAR_2);
   FUNC_2 (VAR_0);
   break;
  }
 }
}
