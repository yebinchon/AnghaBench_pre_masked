
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ truesize; scalar_t__ len; int data_len; struct sk_buff* next; } ;
struct TYPE_2__ {struct sk_buff* frag_list; } ;


 int FUNC_0 (struct sk_buff*) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_2(struct sk_buff *VAR_0, struct sk_buff *VAR_1,
       struct sk_buff **VAR_2)
{



 if (!FUNC_0(VAR_0))
  FUNC_1(VAR_0)->frag_list = VAR_1;

 VAR_1->next = ((void*)0);

 (*VAR_2)->next = VAR_1;
 *VAR_2 = VAR_1;

 VAR_0->len += VAR_1->len;
 VAR_0->data_len += VAR_1->len;
 VAR_0->truesize += VAR_1->truesize;
}
