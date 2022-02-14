
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sway_seat {int dummy; } ;
struct sway_output {int dummy; } ;
struct sway_node {scalar_t__ type; } ;
struct sway_container {scalar_t__ fullscreen_mode; struct sway_node node; TYPE_1__* workspace; struct sway_container* parent; } ;
struct TYPE_6__ {int length; struct sway_container** items; } ;
typedef TYPE_2__ list_t ;
typedef enum wlr_direction { ____Placeholder_wlr_direction } wlr_direction ;
typedef enum sway_container_layout { ____Placeholder_sway_container_layout } sway_container_layout ;
struct TYPE_7__ {scalar_t__ focus_wrapping; } ;
struct TYPE_5__ {struct sway_output* output; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 TYPE_4__* VAR_13 ;
 TYPE_2__* FUNC_0 (struct sway_container*) ;
 int FUNC_1 (struct sway_container*) ;
 int FUNC_2 (struct sway_container*) ;
 struct sway_node* FUNC_3 (struct sway_output*,int) ;
 struct sway_output* FUNC_4 (struct sway_output*,int) ;
 struct sway_container* FUNC_5 (struct sway_seat*,struct sway_node*) ;

__attribute__((used)) static struct sway_node *FUNC_6(
  struct sway_container *VAR_14, struct sway_seat *VAR_15,
  enum wlr_direction VAR_16, bool VAR_17) {
 struct sway_container *VAR_18 = ((void*)0);
 struct sway_container *VAR_19 = VAR_14;
 while (VAR_19) {
  if (VAR_19->fullscreen_mode == VAR_1) {

   struct sway_output *VAR_20 = VAR_19->workspace->output;
   struct sway_output *VAR_21 =
    FUNC_4(VAR_20, VAR_16);
   if (!VAR_21) {
    return ((void*)0);
   }
   return FUNC_3(VAR_21, VAR_16);
  }
  if (VAR_19->fullscreen_mode == VAR_0) {
   return ((void*)0);
  }

  bool VAR_22 = 0;
  int VAR_23;
  int VAR_24 = FUNC_2(VAR_19);
  enum sway_container_layout VAR_25 =
   FUNC_1(VAR_19);
  list_t *VAR_26 = FUNC_0(VAR_19);

  if (VAR_16 == VAR_7 || VAR_16 == VAR_8) {
   if (VAR_25 == VAR_2 || VAR_25 == VAR_4) {
    VAR_22 = 1;
    VAR_23 = VAR_24 + (VAR_16 == VAR_7 ? -1 : 1);
   }
  } else {
   if (VAR_25 == VAR_5 || VAR_25 == VAR_3) {
    VAR_22 = 1;
    VAR_23 = VAR_24 + (VAR_16 == VAR_9 ? -1 : 1);
   }
  }

  if (VAR_22) {
   if (VAR_23 < 0 || VAR_23 >= VAR_26->length) {
    int VAR_27 = VAR_26->length;
    if (VAR_13->focus_wrapping != VAR_11 && !VAR_18
      && VAR_27 > 1) {
     if (VAR_23 < 0) {
      VAR_18 = VAR_26->items[VAR_27-1];
     } else {
      VAR_18 = VAR_26->items[0];
     }
     if (VAR_13->focus_wrapping == VAR_10) {
      struct sway_container *VAR_28 = FUNC_5(
        VAR_15, &VAR_18->node);
      return &VAR_28->node;
     }
    }
   } else {
    struct sway_container *VAR_29 = VAR_26->items[VAR_23];
    if (!VAR_17) {
     return &VAR_29->node;
    } else {
     struct sway_container *VAR_30 = FUNC_5(
       VAR_15, &VAR_29->node);
     return &VAR_30->node;
    }
   }
  }

  VAR_19 = VAR_19->parent;
 }


 struct sway_output *VAR_31 = VAR_14->workspace->output;
 struct sway_output *VAR_32 = FUNC_4(VAR_31, VAR_16);
 if ((VAR_13->focus_wrapping != VAR_12 ||
    VAR_14->node.type == VAR_6) && VAR_32) {
  return FUNC_3(VAR_32, VAR_16);
 }


 if (VAR_18) {
  struct sway_container *VAR_33 = FUNC_5(
    VAR_15, &VAR_18->node);
  return &VAR_33->node;
 }

 return ((void*)0);
}
