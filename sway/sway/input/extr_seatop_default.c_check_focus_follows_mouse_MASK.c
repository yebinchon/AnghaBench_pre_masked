
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sway_seat {int dummy; } ;
struct sway_output {int dummy; } ;
struct sway_node {scalar_t__ type; TYPE_1__* sway_container; } ;
struct seatop_default_event {struct sway_node* previous_node; } ;
struct TYPE_4__ {scalar_t__ focus_follows_mouse; } ;
struct TYPE_3__ {int view; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* VAR_2 ;
 struct sway_output* FUNC_0 (struct sway_node*) ;
 scalar_t__ FUNC_1 (struct sway_node*) ;
 struct sway_node* FUNC_2 (struct sway_seat*) ;
 struct sway_node* FUNC_3 (struct sway_seat*,struct sway_node*) ;
 int FUNC_4 (struct sway_seat*,struct sway_node*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct sway_seat *VAR_3,
  struct seatop_default_event *VAR_4, struct sway_node *VAR_5) {
 struct sway_node *VAR_6 = FUNC_2(VAR_3);



 if (VAR_6 && VAR_5->type == VAR_1) {
  struct sway_output *VAR_7 = FUNC_0(VAR_6);
  struct sway_output *VAR_8 = FUNC_0(VAR_5);
  if (VAR_8 != VAR_7) {
   FUNC_4(VAR_3, FUNC_3(VAR_3, VAR_5));
  }
  return;
 }



 if (FUNC_1(VAR_5) &&
   FUNC_5(VAR_5->sway_container->view)) {




  if (VAR_5 != VAR_4->previous_node ||
    VAR_2->focus_follows_mouse == VAR_0) {
   FUNC_4(VAR_3, VAR_5);
  }
 }
}
