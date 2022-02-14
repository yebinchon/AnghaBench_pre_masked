
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int workspaces; } ;
struct TYPE_3__ {int destroying; scalar_t__ ntxnrefs; } ;
struct sway_output {TYPE_2__ current; int workspaces; TYPE_1__ node; int * wlr_output; } ;


 int FUNC_0 (struct sway_output*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char*) ;

void FUNC_3(struct sway_output *VAR_0) {
 if (!FUNC_2(VAR_0->node.destroying,
    "Tried to free output which wasn't marked as destroying")) {
  return;
 }
 if (!FUNC_2(VAR_0->wlr_output == ((void*)0),
    "Tried to free output which still had a wlr_output")) {
  return;
 }
 if (!FUNC_2(VAR_0->node.ntxnrefs == 0, "Tried to free output "
    "which is still referenced by transactions")) {
  return;
 }
 FUNC_1(VAR_0->workspaces);
 FUNC_1(VAR_0->current.workspaces);
 FUNC_0(VAR_0);
}
