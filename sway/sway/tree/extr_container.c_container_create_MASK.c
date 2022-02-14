
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sway_view {int dummy; } ;
struct TYPE_6__ {int destroy; } ;
struct TYPE_5__ {void* children; } ;
struct sway_container {float alpha; int node; TYPE_2__ events; void* outputs; void* marks; TYPE_1__ current; void* children; struct sway_view* view; int layout; } ;
struct TYPE_7__ {int new_node; } ;
struct TYPE_8__ {TYPE_3__ events; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sway_container* FUNC_0 (int,int) ;
 void* FUNC_1 () ;
 int FUNC_2 (int *,int ,struct sway_container*) ;
 TYPE_4__* VAR_3 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;

struct sway_container *FUNC_6(struct sway_view *VAR_4) {
 struct sway_container *VAR_5 = FUNC_0(1, sizeof(struct sway_container));
 if (!VAR_5) {
  FUNC_3(VAR_2, "Unable to allocate sway_container");
  return ((void*)0);
 }
 FUNC_2(&VAR_5->node, VAR_1, VAR_5);
 VAR_5->layout = VAR_0;
 VAR_5->view = VAR_4;
 VAR_5->alpha = 1.0f;

 if (!VAR_4) {
  VAR_5->children = FUNC_1();
  VAR_5->current.children = FUNC_1();
 }
 VAR_5->marks = FUNC_1();
 VAR_5->outputs = FUNC_1();

 FUNC_5(&VAR_5->events.destroy);
 FUNC_4(&VAR_3->events.new_node, &VAR_5->node);

 return VAR_5;
}
