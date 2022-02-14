
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nhmsg {int nh_family; scalar_t__ nh_scope; scalar_t__ resvd; int nh_protocol; int nh_flags; } ;
struct TYPE_2__ {scalar_t__ nhc_lwtstate; scalar_t__ nhc_scope; struct net_device* nhc_dev; } ;
struct fib6_nh {int fib_nh_gw6; int fib_nh_gw_family; } ;
struct fib_nh {int fib_nh_gw4; int fib_nh_gw_family; } ;
struct nh_info {int family; TYPE_1__ fib_nhc; struct fib6_nh fib6_nh; struct fib_nh fib_nh; scalar_t__ reject_nh; } ;
struct nh_group {int dummy; } ;
struct nexthop {int nh_info; int nh_grp; scalar_t__ is_group; int id; int protocol; int nh_flags; } ;
struct net_device {int ifindex; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct sk_buff*,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (struct sk_buff*,int ,int *) ;
 scalar_t__ FUNC_3 (struct sk_buff*,struct nh_group*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;
 struct nhmsg* FUNC_5 (struct nlmsghdr*) ;
 int FUNC_6 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_7 (struct sk_buff*,int ,int ,int,int,unsigned int) ;
 void* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_8, struct nexthop *VAR_9,
   int VAR_10, u32 VAR_11, u32 VAR_12, unsigned int VAR_13)
{
 struct fib6_nh *VAR_14;
 struct fib_nh *VAR_15;
 struct nlmsghdr *VAR_16;
 struct nh_info *VAR_17;
 struct nhmsg *VAR_18;

 VAR_16 = FUNC_7(VAR_8, VAR_11, VAR_12, VAR_10, sizeof(*VAR_18), VAR_13);
 if (!VAR_16)
  return -VAR_1;

 VAR_18 = FUNC_5(VAR_16);
 VAR_18->nh_family = VAR_0;
 VAR_18->nh_flags = VAR_9->nh_flags;
 VAR_18->nh_protocol = VAR_9->protocol;
 VAR_18->nh_scope = 0;
 VAR_18->resvd = 0;

 if (FUNC_4(VAR_8, VAR_6, VAR_9->id))
  goto nla_put_failure;

 if (VAR_9->is_group) {
  struct nh_group *VAR_19 = FUNC_8(VAR_9->nh_grp);

  if (FUNC_3(VAR_8, VAR_19))
   goto nla_put_failure;
  goto out;
 }

 VAR_17 = FUNC_8(VAR_9->nh_info);
 VAR_18->nh_family = VAR_17->family;
 if (VAR_17->reject_nh) {
  if (FUNC_1(VAR_8, VAR_2))
   goto nla_put_failure;
  goto out;
 } else {
  const struct net_device *VAR_20;

  VAR_20 = VAR_17->fib_nhc.nhc_dev;
  if (VAR_20 && FUNC_4(VAR_8, VAR_7, VAR_20->ifindex))
   goto nla_put_failure;
 }

 VAR_18->nh_scope = VAR_17->fib_nhc.nhc_scope;
 switch (VAR_17->family) {
 case 129:
  VAR_15 = &VAR_17->fib_nh;
  if (VAR_15->fib_nh_gw_family &&
      FUNC_4(VAR_8, VAR_5, VAR_15->fib_nh_gw4))
   goto nla_put_failure;
  break;

 case 128:
  VAR_14 = &VAR_17->fib6_nh;
  if (VAR_14->fib_nh_gw_family &&
      FUNC_2(VAR_8, VAR_5, &VAR_14->fib_nh_gw6))
   goto nla_put_failure;
  break;
 }

 if (VAR_17->fib_nhc.nhc_lwtstate &&
     FUNC_0(VAR_8, VAR_17->fib_nhc.nhc_lwtstate,
    VAR_3, VAR_4) < 0)
  goto nla_put_failure;

out:
 FUNC_6(VAR_8, VAR_16);
 return 0;

nla_put_failure:
 return -VAR_1;
}
