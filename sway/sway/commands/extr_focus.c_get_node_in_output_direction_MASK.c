
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sway_node {int dummy; } ;
struct sway_workspace {struct sway_node node; TYPE_3__* tiling; int layout; TYPE_2__* fullscreen; } ;
struct sway_seat {int dummy; } ;
struct sway_output {int dummy; } ;
struct sway_container {struct sway_node node; } ;
typedef enum wlr_direction { ____Placeholder_wlr_direction } wlr_direction ;
struct TYPE_5__ {struct sway_seat* seat; } ;
struct TYPE_8__ {TYPE_1__ handler_context; } ;
struct TYPE_7__ {scalar_t__ length; struct sway_container** items; } ;
struct TYPE_6__ {int node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 TYPE_4__* VAR_4 ;
 struct sway_workspace* FUNC_0 (struct sway_output*) ;
 struct sway_node* FUNC_1 (struct sway_seat*,int *) ;
 struct sway_container* FUNC_2 (struct sway_seat*,struct sway_workspace*) ;
 struct sway_container* FUNC_3 (struct sway_seat*,struct sway_node*) ;
 int FUNC_4 (struct sway_workspace*,char*) ;

__attribute__((used)) static struct sway_node *FUNC_5(
  struct sway_output *VAR_5, enum wlr_direction VAR_6) {
 struct sway_seat *VAR_7 = VAR_4->handler_context.seat;
 struct sway_workspace *VAR_8 = FUNC_0(VAR_5);
 if (!FUNC_4(VAR_8, "Expected output to have a workspace")) {
  return ((void*)0);
 }
 if (VAR_8->fullscreen) {
  return FUNC_1(VAR_7, &VAR_8->fullscreen->node);
 }
 struct sway_container *VAR_9 = ((void*)0);

 if (VAR_8->tiling->length > 0) {
  switch (VAR_6) {
  case 130:
   if (VAR_8->layout == VAR_0 || VAR_8->layout == VAR_2) {

    VAR_9 = VAR_8->tiling->items[VAR_8->tiling->length-1];
   } else {
    VAR_9 = FUNC_2(VAR_7, VAR_8);
   }
   break;
  case 129:
   if (VAR_8->layout == VAR_0 || VAR_8->layout == VAR_2) {

    VAR_9 = VAR_8->tiling->items[0];
   } else {
    VAR_9 = FUNC_2(VAR_7, VAR_8);
   }
   break;
  case 128:
   if (VAR_8->layout == VAR_3 || VAR_8->layout == VAR_1) {

    VAR_9 = VAR_8->tiling->items[VAR_8->tiling->length-1];
   } else {
    VAR_9 = FUNC_2(VAR_7, VAR_8);
   }
   break;
  case 131:
   if (VAR_8->layout == VAR_3 || VAR_8->layout == VAR_1) {

    VAR_9 = VAR_8->tiling->items[0];
   } else {
    VAR_9 = FUNC_2(VAR_7, VAR_8);
   }
   break;
  }
 }

 if (VAR_9) {
  VAR_9 = FUNC_3(VAR_7, &VAR_9->node);
  return &VAR_9->node;
 }

 return &VAR_8->node;
}
