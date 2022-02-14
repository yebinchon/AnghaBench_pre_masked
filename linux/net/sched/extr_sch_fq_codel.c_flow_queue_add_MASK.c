
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {struct sk_buff* next; } ;
struct fq_codel_flow {struct sk_buff* tail; struct sk_buff* head; } ;



__attribute__((used)) static inline void FUNC_0(struct fq_codel_flow *VAR_0,
      struct sk_buff *VAR_1)
{
 if (VAR_0->head == ((void*)0))
  VAR_0->head = VAR_1;
 else
  VAR_0->tail->next = VAR_1;
 VAR_0->tail = VAR_1;
 VAR_1->next = ((void*)0);
}
