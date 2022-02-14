
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cond_node {struct cond_node* next; } ;


 int FUNC_0 (struct cond_node*) ;

__attribute__((used)) static void FUNC_1(struct cond_node *VAR_0)
{
 struct cond_node *VAR_1, *VAR_2;

 if (VAR_0 == ((void*)0))
  return;

 for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_1) {
  VAR_1 = VAR_2->next;
  FUNC_0(VAR_2);
 }
}
