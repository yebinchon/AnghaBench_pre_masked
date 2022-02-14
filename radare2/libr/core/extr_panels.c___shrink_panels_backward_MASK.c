
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* panels; } ;
struct TYPE_4__ {int * panel; } ;
typedef TYPE_1__ RPanels ;
typedef TYPE_2__ RCore ;



void FUNC_0(RCore *VAR_0, int VAR_1) {
 RPanels *VAR_2 = VAR_0->panels;
 int VAR_3 = VAR_1;
 for (; VAR_3 > 0; VAR_3--) {
  VAR_2->panel[VAR_3] = VAR_2->panel[VAR_3 - 1];
 }
}
