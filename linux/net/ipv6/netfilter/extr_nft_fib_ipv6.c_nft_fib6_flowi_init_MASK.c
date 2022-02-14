
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nft_pktinfo {TYPE_1__* skb; } ;
struct nft_fib {int flags; } ;
struct net_device {int dummy; } ;
struct ipv6hdr {int daddr; int saddr; } ;
struct flowi6 {int flowlabel; int flowi6_mark; int saddr; int flowi6_oif; int daddr; } ;
typedef int __be32 ;
struct TYPE_2__ {int mark; struct net_device const* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct net_device const*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct flowi6 *VAR_7, const struct nft_fib *VAR_8,
          const struct nft_pktinfo *VAR_9,
          const struct net_device *VAR_10,
          struct ipv6hdr *VAR_11)
{
 int VAR_12 = 0;

 if (VAR_8->flags & VAR_3) {
  VAR_7->daddr = VAR_11->daddr;
  VAR_7->saddr = VAR_11->saddr;
 } else {
  VAR_7->daddr = VAR_11->saddr;
  VAR_7->saddr = VAR_11->daddr;
 }

 if (FUNC_1(&VAR_7->daddr) & VAR_0) {
  VAR_12 |= VAR_6;
  VAR_7->flowi6_oif = FUNC_0(VAR_10 ? VAR_10 : VAR_9->skb->dev);
 }

 if (FUNC_1(&VAR_7->saddr) & VAR_1)
  VAR_12 |= VAR_5;

 if (VAR_8->flags & VAR_4)
  VAR_7->flowi6_mark = VAR_9->skb->mark;

 VAR_7->flowlabel = (*(__be32 *)VAR_11) & VAR_2;

 return VAR_12;
}
