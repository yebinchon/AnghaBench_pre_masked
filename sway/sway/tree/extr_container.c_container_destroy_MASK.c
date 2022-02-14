
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int children; } ;
struct TYPE_4__ {int destroying; scalar_t__ ntxnrefs; } ;
struct sway_container {TYPE_3__* view; int marks_urgent; int marks_unfocused; int marks_focused_inactive; int marks_focused; int marks; int outputs; TYPE_2__ current; int children; int title_urgent; int title_unfocused; int title_focused_inactive; int title_focused; struct sway_container* formatted_title; struct sway_container* title; TYPE_1__ node; } ;
struct TYPE_6__ {scalar_t__ destroying; struct sway_container* container; } ;


 int FUNC_0 (struct sway_container*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ) ;

void FUNC_6(struct sway_container *VAR_0) {
 if (!FUNC_3(VAR_0->node.destroying,
    "Tried to free container which wasn't marked as destroying")) {
  return;
 }
 if (!FUNC_3(VAR_0->node.ntxnrefs == 0, "Tried to free container "
    "which is still referenced by transactions")) {
  return;
 }
 FUNC_0(VAR_0->title);
 FUNC_0(VAR_0->formatted_title);
 FUNC_5(VAR_0->title_focused);
 FUNC_5(VAR_0->title_focused_inactive);
 FUNC_5(VAR_0->title_unfocused);
 FUNC_5(VAR_0->title_urgent);
 FUNC_1(VAR_0->children);
 FUNC_1(VAR_0->current.children);
 FUNC_1(VAR_0->outputs);

 FUNC_2(VAR_0->marks);
 FUNC_5(VAR_0->marks_focused);
 FUNC_5(VAR_0->marks_focused_inactive);
 FUNC_5(VAR_0->marks_unfocused);
 FUNC_5(VAR_0->marks_urgent);

 if (VAR_0->view) {
  if (VAR_0->view->container == VAR_0) {
   VAR_0->view->container = ((void*)0);
  }
  if (VAR_0->view->destroying) {
   FUNC_4(VAR_0->view);
  }
 }

 FUNC_0(VAR_0);
}
