
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_seat_node {int link; } ;
struct sway_seat {int focus_stack; } ;
struct sway_node {int dummy; } ;


 struct sway_seat_node* FUNC_0 (struct sway_seat*,struct sway_node*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct sway_node *VAR_0, void *VAR_1) {
 struct sway_seat *VAR_2 = VAR_1;
 struct sway_seat_node *VAR_3 = FUNC_0(VAR_2, VAR_0);
 if (!VAR_3) {
  return;
 }
 FUNC_2(&VAR_3->link);
 FUNC_1(&VAR_2->focus_stack, &VAR_3->link);
}
