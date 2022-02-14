
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {TYPE_2__* panels; } ;
struct TYPE_13__ {TYPE_1__* view; } ;
struct TYPE_12__ {int n_panels; } ;
struct TYPE_11__ {int refresh; } ;
typedef TYPE_2__ RPanels ;
typedef TYPE_3__ RPanel ;
typedef TYPE_4__ RCore ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int ) ;
 TYPE_3__* FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_4__*,TYPE_3__*,int *) ;

void FUNC_3(RCore *VAR_1, bool VAR_2, bool VAR_3) {
 RPanels *VAR_4 = VAR_1->panels;
 int VAR_5;
 for (VAR_5 = 0; VAR_5 < VAR_4->n_panels; VAR_5++) {
  RPanel *VAR_6 = FUNC_1 (VAR_4, VAR_5);
  if (!VAR_3 && FUNC_0 (VAR_6, VAR_0)) {
   continue;
  }
  VAR_6->view->refresh = 1;
  if (VAR_2) {
   FUNC_2 (VAR_1, VAR_6, ((void*)0));
  }
 }
}
