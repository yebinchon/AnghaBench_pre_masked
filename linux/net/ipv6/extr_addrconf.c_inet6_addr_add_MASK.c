
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int mc_autojoin_sk; } ;
struct net {TYPE_1__ ipv6; } ;
struct inet6_ifaddr {int flags; int rt_priority; int prefix_len; int addr; } ;
struct inet6_dev {int flags; int rt_priority; int prefix_len; int addr; } ;
struct ifa6_config {int plen; unsigned long valid_lft; unsigned long preferred_lft; int ifa_flags; int pfx; int scope; } ;
typedef scalar_t__ clock_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (struct inet6_ifaddr*) ;
 int FUNC_2 (struct inet6_ifaddr*) ;
 scalar_t__ VAR_11 ;
 struct net_device* FUNC_3 (struct net*,int) ;
 struct inet6_ifaddr* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct inet6_ifaddr*) ;
 scalar_t__ FUNC_6 (unsigned long) ;
 int FUNC_7 (int *,int ,int ,struct net_device*,scalar_t__,scalar_t__,int ) ;
 unsigned long FUNC_8 (unsigned long,unsigned long) ;
 int FUNC_9 () ;
 int FUNC_10 (struct inet6_ifaddr*) ;
 struct inet6_ifaddr* FUNC_11 (struct inet6_ifaddr*,struct ifa6_config*,int,struct netlink_ext_ack*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,struct inet6_ifaddr*) ;
 int FUNC_14 (int ,int,int ,int) ;
 int VAR_12 ;
 scalar_t__ FUNC_15 (unsigned long) ;
 int FUNC_16 (struct inet6_ifaddr*,struct inet6_ifaddr*,unsigned long,unsigned long,int,int ) ;

__attribute__((used)) static int FUNC_17(struct net *VAR_13, int VAR_14,
     struct ifa6_config *VAR_15,
     struct netlink_ext_ack *VAR_16)
{
 struct inet6_ifaddr *VAR_17;
 struct inet6_dev *VAR_18;
 struct net_device *VAR_19;
 unsigned long VAR_20;
 clock_t VAR_21;
 u32 VAR_22;

 FUNC_0();

 if (VAR_15->plen > 128)
  return -VAR_0;


 if (!VAR_15->valid_lft || VAR_15->preferred_lft > VAR_15->valid_lft)
  return -VAR_0;

 if (VAR_15->ifa_flags & VAR_5 && VAR_15->plen != 64)
  return -VAR_0;

 VAR_19 = FUNC_3(VAR_13, VAR_14);
 if (!VAR_19)
  return -VAR_1;

 VAR_18 = FUNC_4(VAR_19);
 if (FUNC_1(VAR_18))
  return FUNC_2(VAR_18);

 if (VAR_15->ifa_flags & VAR_6) {
  int VAR_23 = FUNC_14(VAR_13->ipv6.mc_autojoin_sk,
      1, VAR_15->pfx, VAR_14);

  if (VAR_23 < 0)
   return VAR_23;
 }

 VAR_15->scope = FUNC_12(VAR_15->pfx);

 VAR_20 = FUNC_8(VAR_15->valid_lft, VAR_3);
 if (FUNC_6(VAR_20)) {
  VAR_21 = FUNC_15(VAR_20 * VAR_3);
  VAR_15->valid_lft = VAR_20;
  VAR_22 = VAR_11;
 } else {
  VAR_21 = 0;
  VAR_22 = 0;
  VAR_15->ifa_flags |= VAR_10;
 }

 VAR_20 = FUNC_8(VAR_15->preferred_lft, VAR_3);
 if (FUNC_6(VAR_20)) {
  if (VAR_20 == 0)
   VAR_15->ifa_flags |= VAR_4;
  VAR_15->preferred_lft = VAR_20;
 }

 VAR_17 = FUNC_11(VAR_18, VAR_15, 1, VAR_16);
 if (!FUNC_1(VAR_17)) {
  if (!(VAR_15->ifa_flags & VAR_8)) {
   FUNC_7(&VAR_17->addr, VAR_17->prefix_len,
           VAR_17->rt_priority, VAR_19, VAR_21,
           VAR_22, VAR_2);
  }




  if (!(VAR_17->flags & (VAR_9 | VAR_7)))
   FUNC_13(0, VAR_17);





  FUNC_5(VAR_17);
  if (VAR_15->ifa_flags & VAR_5)
   FUNC_16(VAR_18, VAR_17, VAR_15->valid_lft,
      VAR_15->preferred_lft, 1, VAR_12);
  FUNC_10(VAR_17);
  FUNC_9();
  return 0;
 } else if (VAR_15->ifa_flags & VAR_6) {
  FUNC_14(VAR_13->ipv6.mc_autojoin_sk, 0,
          VAR_15->pfx, VAR_14);
 }

 return FUNC_2(VAR_17);
}
