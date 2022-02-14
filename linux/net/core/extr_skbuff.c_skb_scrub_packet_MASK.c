
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ tstamp; scalar_t__ mark; scalar_t__ offload_l3_fwd_mark; scalar_t__ offload_fwd_mark; scalar_t__ ignore_df; scalar_t__ skb_iif; int pkt_type; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;

void FUNC_5(struct sk_buff *VAR_1, bool VAR_2)
{
 VAR_1->pkt_type = VAR_0;
 VAR_1->skb_iif = 0;
 VAR_1->ignore_df = 0;
 FUNC_3(VAR_1);
 FUNC_4(VAR_1);
 FUNC_1(VAR_1);
 FUNC_2(VAR_1);






 if (!VAR_2)
  return;

 FUNC_0(VAR_1);
 VAR_1->mark = 0;
 VAR_1->tstamp = 0;
}
