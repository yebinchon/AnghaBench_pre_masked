
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skb_seq_state {unsigned int lower_offset; unsigned int upper_offset; int * frag_data; scalar_t__ stepped_offset; scalar_t__ frag_idx; struct sk_buff* cur_skb; struct sk_buff* root_skb; } ;
struct sk_buff {int dummy; } ;



void FUNC_0(struct sk_buff *VAR_0, unsigned int VAR_1,
     unsigned int VAR_2, struct skb_seq_state *VAR_3)
{
 VAR_3->lower_offset = VAR_1;
 VAR_3->upper_offset = VAR_2;
 VAR_3->root_skb = VAR_3->cur_skb = VAR_0;
 VAR_3->frag_idx = VAR_3->stepped_offset = 0;
 VAR_3->frag_data = ((void*)0);
}
