
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_node {scalar_t__ destroying; } ;
struct sway_workspace {struct sway_container* fullscreen; struct sway_node node; } ;
struct sway_view {struct sway_container* container; } ;
struct sway_seat {int dummy; } ;
struct sway_container {scalar_t__ fullscreen_mode; struct sway_container* parent; struct sway_node node; struct sway_workspace* workspace; int is_sticky; } ;
typedef enum sway_container_layout { ____Placeholder_sway_container_layout } sway_container_layout ;
struct TYPE_2__ {struct sway_container* fullscreen_global; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct sway_container*) ;
 int FUNC_1 (struct sway_container*) ;
 int FUNC_2 (struct sway_container*,struct sway_container*) ;
 int FUNC_3 (struct sway_container*) ;
 struct sway_seat* FUNC_4 () ;
 TYPE_1__* VAR_3 ;
 struct sway_node* FUNC_5 (struct sway_seat*,struct sway_node*) ;
 int FUNC_6 (struct sway_workspace*) ;

bool FUNC_7(struct sway_view *VAR_4) {
 if (VAR_4->container->node.destroying) {
  return 0;
 }
 struct sway_workspace *VAR_5 = VAR_4->container->workspace;
 if (!VAR_5 && VAR_4->container->fullscreen_mode != VAR_0) {
  bool VAR_6 = 0;
  struct sway_container *VAR_7 = VAR_4->container->parent;
  while (VAR_7) {
   if (VAR_7->fullscreen_mode == VAR_0) {
    VAR_6 = 1;
   }
   VAR_7 = VAR_7->parent;
  }
  if (!VAR_6) {
   return 0;
  }
 }

 struct sway_container *VAR_8 = VAR_4->container;
 while (VAR_8->parent) {
  VAR_8 = VAR_8->parent;
 }
 bool VAR_9 = FUNC_0(VAR_8) && VAR_8->is_sticky;
 if (!VAR_9 && VAR_5 && !FUNC_6(VAR_5)) {
  return 0;
 }

 struct sway_seat *VAR_10 = FUNC_4();
 struct sway_container *VAR_11 = VAR_4->container;
 while (VAR_11) {
  enum sway_container_layout VAR_12 = FUNC_3(VAR_11);
  if ((VAR_12 == VAR_2 || VAR_12 == VAR_1)
    && !FUNC_0(VAR_11)) {
   struct sway_node *VAR_13 = VAR_11->parent ?
    &VAR_11->parent->node : &VAR_11->workspace->node;
   if (FUNC_5(VAR_10, VAR_13) != &VAR_11->node) {
    return 0;
   }
  }
  VAR_11 = VAR_11->parent;
 }

 struct sway_container *VAR_14 = VAR_3->fullscreen_global ?
  VAR_3->fullscreen_global : VAR_5->fullscreen;
 if (VAR_14 && !FUNC_1(VAR_4->container) &&
   !FUNC_2(VAR_4->container, VAR_14)) {
  return 0;
 }
 return 1;
}
