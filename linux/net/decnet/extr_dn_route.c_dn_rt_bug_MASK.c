
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct dn_skb_cb {int dst; int src; } ;


 struct dn_skb_cb* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_1)
{
 struct dn_skb_cb *VAR_2 = FUNC_0(VAR_1);

 FUNC_3("dn_rt_bug: skb from:%04x to:%04x\n",
       FUNC_2(VAR_2->src), FUNC_2(VAR_2->dst));

 FUNC_1(VAR_1);

 return VAR_0;
}
