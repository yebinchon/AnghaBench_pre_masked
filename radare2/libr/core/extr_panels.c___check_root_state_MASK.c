
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* panels_root; } ;
struct TYPE_4__ {scalar_t__ root_state; } ;
typedef scalar_t__ RPanelsRootState ;
typedef TYPE_2__ RCore ;



bool FUNC_0(RCore *VAR_0, RPanelsRootState VAR_1) {
 return VAR_0->panels_root->root_state == VAR_1;
}
