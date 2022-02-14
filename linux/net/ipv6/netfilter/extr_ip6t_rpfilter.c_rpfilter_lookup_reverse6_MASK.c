
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int mark; } ;
struct TYPE_3__ {scalar_t__ error; } ;
struct rt6_info {int rt6i_flags; TYPE_2__* rt6i_idev; TYPE_1__ dst; } ;
struct net_device {scalar_t__ ifindex; } ;
struct net {int dummy; } ;
struct ipv6hdr {int saddr; int daddr; int nexthdr; } ;
struct in6_addr {int dummy; } ;
struct flowi6 {int flowlabel; scalar_t__ flowi6_oif; int flowi6_mark; int saddr; int daddr; int flowi6_proto; int flowi6_iif; } ;
typedef int __be32 ;
struct TYPE_4__ {struct net_device const* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (struct net*,struct flowi6*,struct sk_buff const*,int) ;
 int FUNC_1 (struct rt6_info*) ;
 struct ipv6hdr* FUNC_2 (struct sk_buff const*) ;
 scalar_t__ FUNC_3 (struct net_device const*) ;
 int FUNC_4 (int *,int *,int) ;
 scalar_t__ FUNC_5 (struct net_device const*) ;
 scalar_t__ FUNC_6 (struct net_device const*) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;

__attribute__((used)) static bool FUNC_9(struct net *VAR_10, const struct sk_buff *VAR_11,
         const struct net_device *VAR_12, u8 VAR_13)
{
 struct rt6_info *VAR_14;
 struct ipv6hdr *VAR_15 = FUNC_2(VAR_11);
 bool VAR_16 = 0;
 struct flowi6 VAR_17 = {
  .flowi6_iif = VAR_1,
  .flowlabel = (* (__be32 *) VAR_15) & VAR_0,
  .flowi6_proto = VAR_15->nexthdr,
  .daddr = VAR_15->saddr,
 };
 int VAR_18;

 if (FUNC_8(&VAR_15->daddr)) {
  FUNC_4(&VAR_17, &VAR_15->daddr, sizeof(struct in6_addr));
  VAR_18 = VAR_2;
 } else {
  VAR_18 = 0;
 }

 VAR_17 = VAR_13 & VAR_9 ? VAR_11->mark : 0;

 if (FUNC_7(&VAR_15->saddr)) {
  VAR_18 |= VAR_3;
  VAR_17 = VAR_12->ifindex;

 } else if (FUNC_5(VAR_12) || FUNC_6(VAR_12) ||
    (VAR_13 & VAR_8) == 0)
  VAR_17 = VAR_12->ifindex;

 VAR_14 = (void *)FUNC_0(VAR_10, &VAR_17, VAR_11, VAR_18);
 if (VAR_14->dst.error)
  goto out;

 if (VAR_14->rt6i_flags & (VAR_6|VAR_4))
  goto out;

 if (VAR_14->rt6i_flags & VAR_5) {
  VAR_16 = VAR_13 & VAR_7;
  goto out;
 }

 if (VAR_14->rt6i_idev->dev == VAR_12 ||
     FUNC_3(VAR_14->rt6i_idev->dev) == VAR_12->ifindex ||
     (VAR_13 & VAR_8))
  VAR_16 = 1;
 out:
 FUNC_1(VAR_14);
 return VAR_16;
}
