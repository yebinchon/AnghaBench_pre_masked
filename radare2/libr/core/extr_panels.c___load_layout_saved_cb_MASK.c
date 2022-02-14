
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__* panels_menu; } ;
struct TYPE_11__ {TYPE_7__* panels; } ;
struct TYPE_10__ {int depth; TYPE_1__** history; } ;
struct TYPE_9__ {size_t selectedIndex; int name; struct TYPE_9__** sub; } ;
typedef TYPE_1__ RPanelsMenuItem ;
typedef TYPE_2__ RPanelsMenu ;
typedef TYPE_3__ RCore ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_3__*,int ) ;

int FUNC_5(void *VAR_1) {
 RCore *VAR_2 = (RCore *)VAR_1;
 RPanelsMenu *VAR_3 = VAR_2->panels->panels_menu;
 RPanelsMenuItem *VAR_4 = VAR_3->history[VAR_3->depth - 1];
 RPanelsMenuItem *VAR_5 = VAR_4->sub[VAR_4->selectedIndex];
 if (!FUNC_4 (VAR_2, VAR_5->name)) {
  FUNC_0 (VAR_2);
  FUNC_1 (VAR_2->panels);
 }
 FUNC_2 (VAR_2, 0);
 VAR_2->panels->panels_menu->depth = 1;
 FUNC_3 (VAR_2, VAR_0);
 return 0;
}
