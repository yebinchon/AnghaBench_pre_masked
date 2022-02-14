
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strm_queue_node {struct strm_queue_node* next; struct strm_queue_node* head; } ;
struct strm_queue {struct strm_queue* next; struct strm_queue* head; } ;


 int FUNC_0 (struct strm_queue_node*) ;

void
FUNC_1(struct strm_queue* VAR_0)
{
  struct strm_queue_node* VAR_1 = VAR_0->head;

  FUNC_0(VAR_0);
  while (VAR_1) {
    struct strm_queue_node* VAR_2 = VAR_1->next;
    FUNC_0(VAR_1);
    VAR_1 = VAR_2;
  }
}
