
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_seat_node {int link; } ;
struct sway_seat {int focus_stack; } ;
struct sway_node {int dummy; } ;


 struct sway_node* FUNC_0 (struct sway_node*) ;
 int FUNC_1 (struct sway_node*) ;
 struct sway_seat_node* FUNC_2 (struct sway_seat*,struct sway_node*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct sway_seat *VAR_0, struct sway_node *VAR_1) {
 struct sway_seat_node *VAR_2 = FUNC_2(VAR_0, VAR_1);
 FUNC_4(&VAR_2->link);
 FUNC_3(&VAR_0->focus_stack, &VAR_2->link);
 FUNC_1(VAR_1);



 struct sway_node *VAR_3 = FUNC_0(VAR_1);
 if (VAR_3) {
  FUNC_1(VAR_3);
 }
}
