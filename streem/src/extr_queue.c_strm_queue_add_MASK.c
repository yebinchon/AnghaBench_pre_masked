
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strm_queue_node {struct strm_queue_node* next; void* n; } ;
struct strm_queue {struct strm_queue_node* tail; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct strm_queue_node*,struct strm_queue_node*,struct strm_queue_node*) ;

int
FUNC_2(struct strm_queue* VAR_0, void* VAR_1)
{
  struct strm_queue_node *VAR_2 = (struct strm_queue_node*)FUNC_0(sizeof(struct strm_queue_node));

  VAR_2->n = VAR_1;
  VAR_2->next = ((void*)0);
  while (1) {
    struct strm_queue_node *VAR_3 = VAR_0->tail;
    struct strm_queue_node *VAR_4 = VAR_3->next;
    if (VAR_3 != VAR_0->tail) continue;
    if (VAR_4 == ((void*)0)) {
      if (FUNC_1(VAR_3->next, VAR_4, VAR_2)) {
        FUNC_1(VAR_0->tail, VAR_3, VAR_2);
        return 1;
      }
    }
    else {
      FUNC_1(VAR_0->tail, VAR_3, VAR_4);
    }
  }
}
