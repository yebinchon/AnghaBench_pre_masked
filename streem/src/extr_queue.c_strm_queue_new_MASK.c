
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strm_queue_node {int * next; } ;
struct strm_queue {struct strm_queue_node* head; struct strm_queue_node* tail; } ;


 scalar_t__ FUNC_0 (int) ;

struct strm_queue*
FUNC_1()
{
  struct strm_queue* VAR_0;

  VAR_0 = (struct strm_queue*)FUNC_0(sizeof(struct strm_queue));
  if (VAR_0 == ((void*)0)) {
    return ((void*)0);
  }
  VAR_0->head = (struct strm_queue_node*)FUNC_0(sizeof(struct strm_queue_node));
  VAR_0->tail = VAR_0->head;
  VAR_0->head->next = ((void*)0);
  return VAR_0;
}
