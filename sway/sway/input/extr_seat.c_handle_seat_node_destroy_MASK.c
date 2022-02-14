
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wl_listener {int dummy; } ;
struct sway_node {scalar_t__ type; TYPE_2__* sway_container; int * sway_workspace; } ;
struct sway_workspace {struct sway_node node; } ;
struct sway_seat_node {struct sway_node* node; struct sway_seat* seat; } ;
struct sway_seat {int * workspace; } ;
struct sway_container {struct sway_node node; } ;
struct TYPE_6__ {int node; } ;
struct TYPE_5__ {TYPE_1__* workspace; scalar_t__ scratchpad; } ;
struct TYPE_4__ {struct sway_node node; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct sway_node* FUNC_0 (struct sway_node*) ;
 scalar_t__ FUNC_1 (struct sway_node*,struct sway_node*) ;
 TYPE_3__* VAR_3 ;
 struct sway_node* FUNC_2 (struct sway_seat*) ;
 struct sway_node* FUNC_3 (struct sway_seat*,int *) ;
 struct sway_container* FUNC_4 (struct sway_seat*,struct sway_node*) ;
 struct sway_workspace* FUNC_5 (struct sway_seat*) ;
 struct sway_seat_node* VAR_4 ;
 int FUNC_6 (struct sway_seat_node*) ;
 int FUNC_7 (struct sway_node*,struct sway_seat*) ;
 int FUNC_8 (struct sway_seat*,struct sway_node*) ;
 int FUNC_9 (struct sway_seat*,struct sway_node*) ;
 struct sway_seat_node* FUNC_10 (struct wl_listener*,int ,int ) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(struct wl_listener *VAR_5, void *VAR_6) {
 struct sway_seat_node *VAR_7 =
  FUNC_10(VAR_5, VAR_7, VAR_2);
 struct sway_seat *VAR_8 = VAR_7->seat;
 struct sway_node *VAR_9 = VAR_7->node;
 struct sway_node *VAR_10 = FUNC_0(VAR_9);
 struct sway_node *VAR_11 = FUNC_2(VAR_8);

 if (VAR_9->type == VAR_1) {
  FUNC_6(VAR_7);




  if (VAR_8->workspace == VAR_9->sway_workspace) {
   struct sway_node *VAR_12 = FUNC_3(VAR_8, &VAR_3->node);
   FUNC_8(VAR_8, ((void*)0));
   if (VAR_12) {
    FUNC_8(VAR_8, VAR_12);
   } else {
    VAR_8->workspace = ((void*)0);
   }
  }
  return;
 }




 bool VAR_13 = VAR_11 &&
  (VAR_11 == VAR_9 || FUNC_1(VAR_11, VAR_9));

 FUNC_6(VAR_7);

 if (!VAR_10 && !VAR_13) {

  return;
 }


 struct sway_node *VAR_14 = ((void*)0);
 while (VAR_14 == ((void*)0) && VAR_10 != ((void*)0)) {
  struct sway_container *VAR_15 =
   FUNC_4(VAR_8, VAR_10);
  VAR_14 = VAR_15 ? &VAR_15->node : ((void*)0);

  if (VAR_14 == ((void*)0) && VAR_10->type == VAR_1) {
   VAR_14 = VAR_10;
   break;
  }

  VAR_10 = FUNC_0(VAR_10);
 }

 if (!VAR_14) {
  struct sway_workspace *VAR_16 = FUNC_5(VAR_8);
  if (!VAR_16) {
   return;
  }
  struct sway_container *VAR_17 =
   FUNC_4(VAR_8, &VAR_16->node);
  VAR_14 = VAR_17 ? &(VAR_17->node) : &(VAR_16->node);
 }

 if (VAR_14->type == VAR_1 &&
   !FUNC_11(VAR_14->sway_workspace)) {

  return;
 }

 if (VAR_13) {

  if (VAR_9->type == VAR_0 && VAR_9->sway_container->scratchpad) {
   FUNC_8(VAR_8, ((void*)0));
  }


  FUNC_7(VAR_14, VAR_8);
  FUNC_8(VAR_8, VAR_14);
 } else {

  VAR_11 = FUNC_3(VAR_8, &VAR_3->node);
  FUNC_9(VAR_8, VAR_14);
  if (VAR_11->type == VAR_0 && VAR_11->sway_container->workspace) {
   FUNC_9(VAR_8, &VAR_11->sway_container->workspace->node);
  }
  FUNC_9(VAR_8, VAR_11);
 }
}
