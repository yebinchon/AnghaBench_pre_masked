
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* panels; } ;
struct TYPE_6__ {int mode; } ;
typedef int RPanelsMode ;
typedef TYPE_1__ RPanels ;
typedef TYPE_2__ RCore ;


 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(RCore *VAR_0, RPanelsMode VAR_1) {
 RPanels *VAR_2 = VAR_0->panels;
 FUNC_0 (VAR_0, 0);
 VAR_2->mode = VAR_1;
 FUNC_1 (VAR_2);
}
