
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {TYPE_1__* sk; scalar_t__ truesize; scalar_t__ len; int data_len; struct sk_buff* next; } ;
struct TYPE_6__ {struct sk_buff* last; } ;
struct TYPE_5__ {struct sk_buff* frag_list; } ;
struct TYPE_4__ {int sk_wmem_alloc; } ;


 TYPE_3__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (scalar_t__,int *) ;
 TYPE_2__* FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_4(struct sk_buff *VAR_0, struct sk_buff *VAR_1)
{
 if (FUNC_0(VAR_0)->last == VAR_0)
  FUNC_3(VAR_0)->frag_list = VAR_1;
 else
  FUNC_0(VAR_0)->last->next = VAR_1;
 FUNC_0(VAR_0)->last = VAR_1;

 VAR_0->truesize += VAR_1->truesize;
 VAR_0->data_len += VAR_1->len;
 VAR_0->len += VAR_1->len;
 FUNC_2(VAR_1->truesize, &VAR_0->sk->sk_wmem_alloc);

 FUNC_1(VAR_1);
}
