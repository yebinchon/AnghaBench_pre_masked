
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ selectedIndex; } ;
struct TYPE_8__ {TYPE_2__* panels; } ;
struct TYPE_7__ {TYPE_1__* panels_menu; } ;
struct TYPE_6__ {int depth; scalar_t__ n_refresh; TYPE_4__* root; TYPE_4__** history; } ;
typedef TYPE_1__ RPanelsMenu ;
typedef TYPE_2__ RPanels ;
typedef TYPE_3__ RCore ;


 int FUNC_0 (TYPE_4__*) ;

void FUNC_1(RCore *VAR_0) {
 RPanels *VAR_1 = VAR_0->panels;
 RPanelsMenu *VAR_2 = VAR_1->panels_menu;
 FUNC_0 (VAR_2->root);
 VAR_2->root->selectedIndex = 0;
 VAR_2->history[0] = VAR_2->root;
 VAR_2->depth = 1;
 VAR_2->n_refresh = 0;
}
