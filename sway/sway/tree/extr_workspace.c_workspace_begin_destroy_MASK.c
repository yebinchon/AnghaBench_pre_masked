
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int destroy; } ;
struct TYPE_5__ {int destroying; TYPE_1__ events; } ;
struct sway_workspace {TYPE_2__ node; scalar_t__ output; int name; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct sway_workspace*,char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int *,TYPE_2__*) ;
 int FUNC_4 (struct sway_workspace*) ;

void FUNC_5(struct sway_workspace *VAR_1) {
 FUNC_2(VAR_0, "Destroying workspace '%s'", VAR_1->name);
 FUNC_0(((void*)0), VAR_1, "empty");
 FUNC_3(&VAR_1->node.events.destroy, &VAR_1->node);

 if (VAR_1->output) {
  FUNC_4(VAR_1);
 }
 VAR_1->node.destroying = 1;
 FUNC_1(&VAR_1->node);
}
