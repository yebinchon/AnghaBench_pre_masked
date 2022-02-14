
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * model; } ;
typedef int RPanels ;
typedef int RPanelModel ;
typedef TYPE_1__ RPanel ;


 TYPE_1__* FUNC_0 (int *,int) ;

void FUNC_1(RPanels *VAR_0, int VAR_1, int VAR_2) {
 RPanel *VAR_3 = FUNC_0 (VAR_0, VAR_1);
 RPanel *VAR_4 = FUNC_0 (VAR_0, VAR_2);
 RPanelModel *VAR_5 = VAR_3->model;

 VAR_3->model = VAR_4->model;
 VAR_4->model = VAR_5;
}
