
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* view; } ;
struct TYPE_8__ {int * snows; } ;
struct TYPE_7__ {int refresh; } ;
typedef TYPE_2__ RPanels ;
typedef TYPE_3__ RPanel ;


 TYPE_3__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;

void FUNC_2(RPanels *VAR_0) {
 RPanel *VAR_1 = FUNC_0 (VAR_0);
 FUNC_1 (VAR_0->snows);
 VAR_0->snows = ((void*)0);
 VAR_1->view->refresh = 1;
}
