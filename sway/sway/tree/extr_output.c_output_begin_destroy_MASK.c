
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int destroying; } ;
struct sway_output {TYPE_1__* wlr_output; int link; TYPE_2__ node; int enabled; } ;
struct TYPE_3__ {int * data; int name; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct sway_output *VAR_1) {
 if (!FUNC_1(!VAR_1->enabled, "Expected a disabled output")) {
  return;
 }
 FUNC_2(VAR_0, "Destroying output '%s'", VAR_1->wlr_output->name);

 VAR_1->node.destroying = 1;
 FUNC_0(&VAR_1->node);

 FUNC_3(&VAR_1->link);
 VAR_1->wlr_output->data = ((void*)0);
 VAR_1->wlr_output = ((void*)0);
}
