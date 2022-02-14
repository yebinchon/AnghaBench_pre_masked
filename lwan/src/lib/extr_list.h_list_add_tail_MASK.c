
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_node {struct list_node* prev; struct list_node* next; } ;
struct list_head {struct list_node n; } ;


 int FUNC_0 (struct list_head*) ;

__attribute__((used)) static inline void FUNC_1(struct list_head *VAR_0, struct list_node *VAR_1)
{
 VAR_1->next = &VAR_0->n;
 VAR_1->prev = VAR_0->n.prev;
 VAR_0->n.prev->next = VAR_1;
 VAR_0->n.prev = VAR_1;
 (void)FUNC_0(VAR_0);
}
