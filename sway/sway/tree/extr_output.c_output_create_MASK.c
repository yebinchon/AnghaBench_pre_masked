
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wlr_output {int subpixel; struct sway_output* data; } ;
struct TYPE_5__ {void* workspaces; } ;
struct TYPE_4__ {int destroy; } ;
struct sway_output {TYPE_2__ current; void* workspaces; int link; TYPE_1__ events; int detected_subpixel; struct wlr_output* wlr_output; int node; } ;
struct TYPE_6__ {int all_outputs; } ;


 int VAR_0 ;
 struct sway_output* FUNC_0 (int,int) ;
 void* FUNC_1 () ;
 int FUNC_2 (int *,int ,struct sway_output*) ;
 TYPE_3__* VAR_1 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;

struct sway_output *FUNC_5(struct wlr_output *VAR_2) {
 struct sway_output *VAR_3 = FUNC_0(1, sizeof(struct sway_output));
 FUNC_2(&VAR_3->node, VAR_0, VAR_3);
 VAR_3->wlr_output = VAR_2;
 VAR_2->data = VAR_3;
 VAR_3->detected_subpixel = VAR_2->subpixel;

 FUNC_4(&VAR_3->events.destroy);

 FUNC_3(&VAR_1->all_outputs, &VAR_3->link);

 VAR_3->workspaces = FUNC_1();
 VAR_3->current.workspaces = FUNC_1();

 return VAR_3;
}
