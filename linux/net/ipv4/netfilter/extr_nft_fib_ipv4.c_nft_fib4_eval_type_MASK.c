
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int code; } ;
struct nft_regs {TYPE_1__ verdict; int * data; } ;
struct nft_pktinfo {int skb; } ;
struct nft_fib {size_t dreg; int flags; } ;
struct nft_expr {int dummy; } ;
struct net_device {int dummy; } ;
struct iphdr {int saddr; int daddr; } ;
typedef int _iph ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct net_device const*,int ) ;
 struct nft_fib* FUNC_1 (struct nft_expr const*) ;
 struct net_device* FUNC_2 (struct nft_pktinfo const*) ;
 int FUNC_3 (struct nft_pktinfo const*) ;
 struct net_device* FUNC_4 (struct nft_pktinfo const*) ;
 struct iphdr* FUNC_5 (int ,int,int,struct iphdr*) ;
 int FUNC_6 (int ) ;

void FUNC_7(const struct nft_expr *VAR_4, struct nft_regs *VAR_5,
   const struct nft_pktinfo *VAR_6)
{
 const struct nft_fib *VAR_7 = FUNC_1(VAR_4);
 int VAR_8 = FUNC_6(VAR_6->skb);
 u32 *VAR_9 = &VAR_5->data[VAR_7->dreg];
 const struct net_device *VAR_10 = ((void*)0);
 struct iphdr *VAR_11, VAR_12;
 __be32 VAR_13;

 if (VAR_7->flags & VAR_1)
  VAR_10 = FUNC_2(VAR_6);
 else if (VAR_7->flags & VAR_2)
  VAR_10 = FUNC_4(VAR_6);

 VAR_11 = FUNC_5(VAR_6->skb, VAR_8, sizeof(VAR_12), &VAR_12);
 if (!VAR_11) {
  VAR_5->verdict.code = VAR_3;
  return;
 }

 if (VAR_7->flags & VAR_0)
  VAR_13 = VAR_11->daddr;
 else
  VAR_13 = VAR_11->saddr;

 *VAR_9 = FUNC_0(FUNC_3(VAR_6), VAR_10, VAR_13);
}
