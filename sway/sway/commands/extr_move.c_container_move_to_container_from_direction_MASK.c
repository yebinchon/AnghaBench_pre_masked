
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sway_node {struct sway_container* sway_container; } ;
struct sway_container {scalar_t__ parent; scalar_t__ workspace; struct sway_node node; scalar_t__ height_fraction; scalar_t__ width_fraction; scalar_t__ height; scalar_t__ width; TYPE_1__* children; int layout; scalar_t__ view; } ;
typedef int list_t ;
typedef enum wlr_direction { ____Placeholder_wlr_direction } wlr_direction ;
struct TYPE_5__ {int seat; } ;
struct TYPE_6__ {TYPE_2__ handler_context; } ;
struct TYPE_4__ {int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* VAR_5 ;
 int FUNC_0 (struct sway_container*,struct sway_container*) ;
 int * FUNC_1 (struct sway_container*) ;
 int FUNC_2 (struct sway_container*,struct sway_container*,int) ;
 int FUNC_3 (struct sway_container*) ;
 scalar_t__ FUNC_4 (int ,int) ;
 int FUNC_5 (int *,struct sway_container*) ;
 int FUNC_6 (int *,int,int) ;
 struct sway_node* FUNC_7 (int ,struct sway_node*) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (scalar_t__,struct sway_container*,int) ;

__attribute__((used)) static void FUNC_10(
  struct sway_container *VAR_6, struct sway_container *VAR_7,
  enum wlr_direction VAR_8) {
 if (VAR_7->view) {
  if (VAR_7->parent == VAR_6->parent &&
    VAR_7->workspace == VAR_6->workspace) {
   FUNC_8(VAR_0, "Swapping siblings");
   list_t *VAR_9 = FUNC_1(VAR_6);
   int VAR_10 = FUNC_5(VAR_9, VAR_6);
   int VAR_11 = FUNC_5(VAR_9, VAR_7);
   FUNC_6(VAR_9, VAR_10, VAR_11);
  } else {
   FUNC_8(VAR_0, "Promoting to sibling of cousin");
   int VAR_12 =
    VAR_8 == VAR_2 || VAR_8 == VAR_4;
   int VAR_13 = FUNC_3(VAR_7) + VAR_12;
   if (VAR_7->parent) {
    FUNC_2(VAR_7->parent, VAR_6, VAR_13);
   } else {
    FUNC_9(VAR_7->workspace,
      VAR_6, VAR_13);
   }
   VAR_6->width = VAR_6->height = 0;
   VAR_6->width_fraction = VAR_6->height_fraction = 0;
  }
  return;
 }

 if (FUNC_4(VAR_7->layout, VAR_8)) {
  FUNC_8(VAR_0, "Reparenting container (parallel)");
  int VAR_14 =
   VAR_8 == VAR_3 || VAR_8 == VAR_1 ?
   0 : VAR_7->children->length;
  FUNC_2(VAR_7, VAR_6, VAR_14);
  VAR_6->width = VAR_6->height = 0;
  VAR_6->width_fraction = VAR_6->height_fraction = 0;
  return;
 }

 FUNC_8(VAR_0, "Reparenting container (perpendicular)");
 struct sway_node *VAR_15 = FUNC_7(
   VAR_5->handler_context.seat, &VAR_7->node);
 if (!VAR_15 || VAR_15 == &VAR_7->node) {

  FUNC_0(VAR_7, VAR_6);
  return;
 }


 FUNC_10(VAR_6,
   VAR_15->sway_container, VAR_8);
}
