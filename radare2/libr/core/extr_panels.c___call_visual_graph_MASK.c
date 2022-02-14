
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int config; TYPE_1__* panels; } ;
struct TYPE_8__ {int * can; } ;
typedef TYPE_1__ RPanels ;
typedef TYPE_2__ RCore ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int * FUNC_1 (TYPE_2__*,int,int) ;
 int FUNC_2 (TYPE_2__*,int,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int*) ;
 int FUNC_7 (TYPE_2__*,int *,int *,int) ;

void FUNC_8(RCore *VAR_0) {
 if (FUNC_0 (VAR_0)) {
  RPanels *VAR_1 = VAR_0->panels;

  FUNC_5 (VAR_1->can);
  VAR_1->can = ((void*)0);

  int VAR_2 = FUNC_3 (VAR_0->config, "scr.color");

  FUNC_7 (VAR_0, ((void*)0), ((void*)0), 1);
  FUNC_4 (VAR_0->config, "scr.color", VAR_2);

  int VAR_3, VAR_4 = FUNC_6 (&VAR_3);
  VAR_1->can = FUNC_1 (VAR_0, VAR_4, VAR_3);
  FUNC_2 (VAR_0, 0, 0);
 }
}
