
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct inet_frag_queue {struct sk_buff* fragments_tail; struct sk_buff* last_run_head; } ;
struct TYPE_2__ {struct sk_buff* next_frag; int frag_run_len; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_2(struct inet_frag_queue *VAR_0,
       struct sk_buff *VAR_1)
{
 FUNC_1(VAR_1);

 FUNC_0(VAR_0->last_run_head)->frag_run_len += VAR_1->len;
 FUNC_0(VAR_0->fragments_tail)->next_frag = VAR_1;
 VAR_0->fragments_tail = VAR_1;
}
