
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cond_node {int false_list; int true_list; struct cond_node* next; struct cond_node* expr; } ;
struct cond_expr {int false_list; int true_list; struct cond_expr* next; struct cond_expr* expr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct cond_node*) ;

__attribute__((used)) static void FUNC_2(struct cond_node *VAR_0)
{
 struct cond_expr *VAR_1, *VAR_2;

 for (VAR_1 = VAR_0->expr; VAR_1; VAR_1 = VAR_2) {
  VAR_2 = VAR_1->next;
  FUNC_1(VAR_1);
 }
 FUNC_0(VAR_0->true_list);
 FUNC_0(VAR_0->false_list);
 FUNC_1(VAR_0);
}
