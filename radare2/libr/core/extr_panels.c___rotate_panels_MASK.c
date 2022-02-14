
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* panels; } ;
struct TYPE_9__ {int * model; } ;
struct TYPE_8__ {int n_panels; } ;
typedef TYPE_1__ RPanels ;
typedef int RPanelModel ;
typedef TYPE_2__ RPanel ;
typedef TYPE_3__ RCore ;


 TYPE_2__* FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_3__*,int,int) ;

void FUNC_2(RCore *VAR_0, bool VAR_1) {
 RPanels *VAR_2 = VAR_0->panels;
 RPanel *VAR_3 = FUNC_0 (VAR_2, 0);
 RPanel *VAR_4 = FUNC_0 (VAR_2, VAR_2->n_panels - 1);
 int VAR_5;
 RPanelModel *VAR_6;
 if (!VAR_1) {
  VAR_6 = VAR_3->model;
  for (VAR_5 = 0; VAR_5 < VAR_2->n_panels - 1; VAR_5++) {
   RPanel *VAR_7 = FUNC_0 (VAR_2, VAR_5);
   RPanel *VAR_8 = FUNC_0 (VAR_2, VAR_5 + 1);
   VAR_7->model = VAR_8->model;
  }
  VAR_4->model = VAR_6;
 } else {
  VAR_6 = VAR_4->model;
  for (VAR_5 = VAR_2->n_panels - 1; VAR_5 > 0; VAR_5--) {
   RPanel *VAR_9 = FUNC_0 (VAR_2, VAR_5);
   RPanel *VAR_10 = FUNC_0 (VAR_2, VAR_5 - 1);
   VAR_9->model = VAR_10->model;
  }
  VAR_3->model = VAR_6;
 }
 FUNC_1 (VAR_0, 0, 1);
}
