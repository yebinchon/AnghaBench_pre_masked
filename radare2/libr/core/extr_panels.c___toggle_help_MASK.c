
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {TYPE_2__* panels; } ;
struct TYPE_16__ {TYPE_1__* model; } ;
struct TYPE_15__ {int n_panels; scalar_t__ mode; } ;
struct TYPE_14__ {int cmd; } ;
typedef TYPE_2__ RPanels ;
typedef TYPE_3__ RPanel ;
typedef TYPE_4__ RCore ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,TYPE_3__*,int) ;
 TYPE_3__* FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (TYPE_4__*,int,int) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (int ,char*) ;

void FUNC_7(RCore *VAR_2) {
 RPanels *VAR_3 = VAR_2->panels;
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < VAR_3->n_panels; VAR_4++) {
  RPanel *VAR_5 = FUNC_2 (VAR_3, VAR_4);
  if (FUNC_6 (VAR_5->model->cmd, "Help")) {
   FUNC_1 (VAR_2, VAR_5, VAR_4);
   if (VAR_3->mode == VAR_1) {
    FUNC_3 (VAR_2, VAR_0);
   }
   FUNC_4 (VAR_2, 0, 0);
   return;
  }
 }
 FUNC_0 (VAR_2);
 if (VAR_3->mode == VAR_1) {
  FUNC_3 (VAR_2, VAR_0);
 }
 FUNC_5 (VAR_3);
}
