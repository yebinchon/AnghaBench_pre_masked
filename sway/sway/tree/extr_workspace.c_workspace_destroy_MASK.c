
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tiling; int floating; } ;
struct TYPE_4__ {int destroying; scalar_t__ ntxnrefs; } ;
struct sway_workspace {TYPE_1__ current; int tiling; int floating; int output_priority; struct sway_workspace* representation; struct sway_workspace* name; TYPE_2__ node; } ;


 int FUNC_0 (struct sway_workspace*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,char*) ;

void FUNC_4(struct sway_workspace *VAR_0) {
 if (!FUNC_3(VAR_0->node.destroying,
    "Tried to free workspace which wasn't marked as destroying")) {
  return;
 }
 if (!FUNC_3(VAR_0->node.ntxnrefs == 0, "Tried to free workspace "
    "which is still referenced by transactions")) {
  return;
 }

 FUNC_0(VAR_0->name);
 FUNC_0(VAR_0->representation);
 FUNC_2(VAR_0->output_priority);
 FUNC_1(VAR_0->floating);
 FUNC_1(VAR_0->tiling);
 FUNC_1(VAR_0->current.floating);
 FUNC_1(VAR_0->current.tiling);
 FUNC_0(VAR_0);
}
