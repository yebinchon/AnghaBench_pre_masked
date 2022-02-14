
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int notify; } ;
struct TYPE_5__ {int new_node; } ;
struct sway_root {TYPE_4__ output_layout_change; TYPE_3__* output_layout; void* scratchpad; void* outputs; TYPE_1__ events; int drag_icons; int xwayland_unmanaged; int all_outputs; int node; } ;
struct TYPE_6__ {int change; } ;
struct TYPE_7__ {TYPE_2__ events; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sway_root* FUNC_0 (int,int) ;
 void* FUNC_1 () ;
 int FUNC_2 (int *,int ,struct sway_root*) ;
 int VAR_2 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_4__*) ;
 int FUNC_6 (int *) ;
 TYPE_3__* FUNC_7 () ;

struct sway_root *FUNC_8(void) {
 struct sway_root *VAR_3 = FUNC_0(1, sizeof(struct sway_root));
 if (!VAR_3) {
  FUNC_3(VAR_1, "Unable to allocate sway_root");
  return ((void*)0);
 }
 FUNC_2(&VAR_3->node, VAR_0, VAR_3);
 VAR_3->output_layout = FUNC_7();
 FUNC_4(&VAR_3->all_outputs);



 FUNC_4(&VAR_3->drag_icons);
 FUNC_6(&VAR_3->events.new_node);
 VAR_3->outputs = FUNC_1();
 VAR_3->scratchpad = FUNC_1();

 VAR_3->output_layout_change.notify = VAR_2;
 FUNC_5(&VAR_3->output_layout->events.change,
  &VAR_3->output_layout_change);
 return VAR_3;
}
