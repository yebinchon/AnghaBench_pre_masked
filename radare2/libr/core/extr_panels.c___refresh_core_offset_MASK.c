
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int offset; int * panels; } ;
struct TYPE_8__ {TYPE_1__* model; } ;
struct TYPE_7__ {int addr; } ;
typedef int RPanels ;
typedef TYPE_2__ RPanel ;
typedef TYPE_3__ RCore ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_1 (int *) ;

void FUNC_2 (RCore *VAR_1) {
 RPanels *VAR_2 = VAR_1->panels;
 RPanel *VAR_3 = FUNC_1 (VAR_2);
 if (FUNC_0 (VAR_3, VAR_0)) {
  VAR_1->offset = VAR_3->model->addr;
 }
}
