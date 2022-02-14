
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_11__ {TYPE_2__* panels; } ;
struct TYPE_10__ {TYPE_1__* model; } ;
struct TYPE_9__ {int n_panels; } ;
struct TYPE_8__ {int addr; } ;
typedef TYPE_2__ RPanels ;
typedef TYPE_3__ RPanel ;
typedef TYPE_4__ RCore ;


 TYPE_3__* FUNC_0 (TYPE_2__*,int) ;

void FUNC_1(RCore *VAR_0, ut64 VAR_1) {
 RPanels *VAR_2 = VAR_0->panels;
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_2->n_panels; VAR_3++) {
  RPanel *VAR_4 = FUNC_0 (VAR_2, VAR_3);
  VAR_4->model->addr = VAR_1;
 }
}
