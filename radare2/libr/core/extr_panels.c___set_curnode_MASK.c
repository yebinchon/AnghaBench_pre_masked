
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* panels; } ;
struct TYPE_4__ {int n_panels; int curnode; } ;
typedef TYPE_1__ RPanels ;
typedef TYPE_2__ RCore ;



void FUNC_0(RCore *VAR_0, int VAR_1) {
 RPanels *VAR_2 = VAR_0->panels;
 if (VAR_1 >= VAR_2->n_panels) {
  VAR_1 = 0;
 }
 if (VAR_1 < 0) {
  VAR_1 = VAR_2->n_panels - 1;
 }
 VAR_2->curnode = VAR_1;
}
