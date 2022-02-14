
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlist_node {struct qlist_node* next; } ;
struct qlist_head {size_t bytes; struct qlist_node* tail; struct qlist_node* head; } ;


 int FUNC_0 (struct qlist_head*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct qlist_head *VAR_0, struct qlist_node *VAR_1,
  size_t VAR_2)
{
 if (FUNC_1(FUNC_0(VAR_0)))
  VAR_0->head = VAR_1;
 else
  VAR_0->tail->next = VAR_1;
 VAR_0->tail = VAR_1;
 VAR_1->next = ((void*)0);
 VAR_0->bytes += VAR_2;
}
