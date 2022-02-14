
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; int data_len; unsigned int truesize; } ;
typedef int skb_frag_t ;
struct TYPE_2__ {int * frags; } ;


 int FUNC_0 (int *,int) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;

void FUNC_2(struct sk_buff *VAR_0, int VAR_1, int VAR_2,
     unsigned int VAR_3)
{
 skb_frag_t *VAR_4 = &FUNC_1(VAR_0)->frags[VAR_1];

 FUNC_0(VAR_4, VAR_2);
 VAR_0->len += VAR_2;
 VAR_0->data_len += VAR_2;
 VAR_0->truesize += VAR_3;
}
