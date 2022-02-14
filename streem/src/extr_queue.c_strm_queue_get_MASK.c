
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strm_queue_node {scalar_t__ n; struct strm_queue_node* next; } ;
struct strm_queue {struct strm_queue_node* head; } ;


 int FUNC_0 (struct strm_queue_node*) ;
 scalar_t__ FUNC_1 (struct strm_queue_node*,struct strm_queue_node*,struct strm_queue_node*) ;

void*
FUNC_2(struct strm_queue* VAR_0)
{
  while (1) {
    struct strm_queue_node *VAR_1 = VAR_0->head;
    struct strm_queue_node *VAR_2 = VAR_1->next;
    if (VAR_1 != VAR_0->head) continue;
    if (VAR_2 == ((void*)0)) {
      return ((void*)0);
    }
    if (FUNC_1(VAR_0->head, VAR_1, VAR_2)) {
      void *VAR_3 = (void*)VAR_2->n;
      FUNC_0(VAR_1);
      return VAR_3;
    }
  }
}
