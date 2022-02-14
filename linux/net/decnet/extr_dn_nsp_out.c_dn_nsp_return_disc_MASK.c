
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct dn_skb_cb {int dst_port; int src_port; } ;
typedef int gfp_t ;


 struct dn_skb_cb* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned char,unsigned short,int ,int ,int,int *,int ,int ) ;
 int FUNC_2 (struct sk_buff*) ;

void FUNC_3(struct sk_buff *VAR_1, unsigned char VAR_2,
   unsigned short VAR_3)
{
 struct dn_skb_cb *VAR_4 = FUNC_0(VAR_1);
 int VAR_5 = 0;
 gfp_t VAR_6 = VAR_0;

 FUNC_1(((void*)0), VAR_2, VAR_3, VAR_6, FUNC_2(VAR_1), VAR_5,
   ((void*)0), VAR_4->src_port, VAR_4->dst_port);
}
