
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_seat_node {struct sway_node* node; } ;
struct TYPE_2__ {int next; } ;
struct sway_seat {TYPE_1__ focus_stack; int has_focus; } ;
struct sway_node {int dummy; } ;


 struct sway_seat_node* VAR_0 ;
 int VAR_1 ;
 struct sway_seat_node* FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

struct sway_node *FUNC_2(struct sway_seat *VAR_2) {
 if (!VAR_2->has_focus) {
  return ((void*)0);
 }
 if (FUNC_1(&VAR_2->focus_stack)) {
  return ((void*)0);
 }
 struct sway_seat_node *VAR_3 =
  FUNC_0(VAR_2->focus_stack.next, VAR_3, VAR_1);
 return VAR_3->node;
}
