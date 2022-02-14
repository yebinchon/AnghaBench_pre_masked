
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nft_pktinfo {int skb; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 struct net_device* FUNC_0 (int ,int) ;
 int FUNC_1 (struct sk_buff*,struct net_device*) ;
 int FUNC_2 (struct nft_pktinfo const*) ;
 struct sk_buff* FUNC_3 (int ,int ) ;

void FUNC_4(const struct nft_pktinfo *VAR_1, int VAR_2)
{
 struct net_device *VAR_3;
 struct sk_buff *VAR_4;

 VAR_3 = FUNC_0(FUNC_2(VAR_1), VAR_2);
 if (VAR_3 == ((void*)0))
  return;

 VAR_4 = FUNC_3(VAR_1->skb, VAR_0);
 if (VAR_4)
  FUNC_1(VAR_4, VAR_3);
}
