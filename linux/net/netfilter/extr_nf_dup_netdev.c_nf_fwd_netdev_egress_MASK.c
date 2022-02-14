
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_pktinfo {int skb; } ;
struct net_device {int dummy; } ;


 struct net_device* FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct net_device*) ;
 int FUNC_3 (struct nft_pktinfo const*) ;

void FUNC_4(const struct nft_pktinfo *VAR_0, int VAR_1)
{
 struct net_device *VAR_2;

 VAR_2 = FUNC_0(FUNC_3(VAR_0), VAR_1);
 if (!VAR_2) {
  FUNC_1(VAR_0->skb);
  return;
 }

 FUNC_2(VAR_0->skb, VAR_2);
}
