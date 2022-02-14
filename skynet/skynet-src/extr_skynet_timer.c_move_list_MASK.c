
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_node {struct timer_node* next; } ;
struct timer {int ** t; } ;


 int FUNC_0 (struct timer*,struct timer_node*) ;
 struct timer_node* FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct timer *VAR_0, int VAR_1, int VAR_2) {
 struct timer_node *VAR_3 = FUNC_1(&VAR_0->t[VAR_1][VAR_2]);
 while (VAR_3) {
  struct timer_node *VAR_4=VAR_3->next;
  FUNC_0(VAR_0,VAR_3);
  VAR_3=VAR_4;
 }
}
