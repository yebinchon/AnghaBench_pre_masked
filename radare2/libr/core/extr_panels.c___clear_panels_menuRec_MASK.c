
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int n_sub; scalar_t__ selectedIndex; struct TYPE_3__** sub; } ;
typedef TYPE_1__ RPanelsMenuItem ;



void FUNC_0(RPanelsMenuItem *VAR_0) {
 int VAR_1 = 0;
 for(VAR_1 = 0; VAR_1 < VAR_0->n_sub; VAR_1++) {
  RPanelsMenuItem *VAR_2 = VAR_0->sub[VAR_1];
  if (VAR_2) {
   VAR_2->selectedIndex = 0;
   FUNC_0 (VAR_2);
  }
 }
}
