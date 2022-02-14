
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sock {int dummy; } ;
struct sk_buff {struct net_device* dev; int priority; } ;
struct net_device {int needed_tailroom; int ifindex; } ;
struct TYPE_3__ {struct sock* igmp_sk; } ;
struct net {TYPE_1__ ipv6; } ;
struct in6_addr {int dummy; } ;
struct mld_msg {int mld_type; int mld_cksum; struct in6_addr mld_mca; } ;
struct ipv6hdr {int dummy; } ;
struct inet6_dev {int dummy; } ;
struct icmp6hdr {int dummy; } ;
struct flowi6 {int dummy; } ;
struct dst_entry {int dummy; } ;
typedef int ra ;
struct TYPE_4__ {int daddr; int saddr; } ;


 int FUNC_0 (struct net*,struct inet6_dev*,int) ;
 int FUNC_1 (struct net*,struct inet6_dev*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct net*,struct inet6_dev*,int ) ;
 int FUNC_3 (struct net*,struct inet6_dev*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (struct dst_entry*) ;
 int FUNC_5 (struct net_device*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int ,int ,struct net*,struct sock*,struct sk_buff*,int *,struct net_device*,int ) ;
 int VAR_10 ;
 int FUNC_7 (struct dst_entry*) ;
 int VAR_11 ;
 struct inet6_dev* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct in6_addr const*,struct in6_addr const*,int,int,int ) ;
 int FUNC_10 (struct mld_msg*,int,int ) ;
 struct net* FUNC_11 (struct net_device*) ;
 int VAR_12 ;
 struct dst_entry* FUNC_12 (struct net_device*,struct flowi6*) ;
 int FUNC_13 (struct sock*,struct flowi6*,int,int *,int *,int ) ;
 struct in6_addr VAR_13 ;
 struct in6_addr VAR_14 ;
 int FUNC_14 (struct sock*,struct sk_buff*,struct net_device*,struct in6_addr const*,struct in6_addr const*,int ,int) ;
 scalar_t__ FUNC_15 (struct net_device*,struct in6_addr*,int ) ;
 TYPE_2__* FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (struct sk_buff*) ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 int FUNC_20 (struct sk_buff*,struct dst_entry*) ;
 int FUNC_21 (struct sk_buff*,int*,int) ;
 struct mld_msg* FUNC_22 (struct sk_buff*,int) ;
 int FUNC_23 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_24 (struct sock*,int,int,int*) ;

__attribute__((used)) static void FUNC_25(struct in6_addr *VAR_15, struct net_device *VAR_16, int VAR_17)
{
 struct net *VAR_18 = FUNC_11(VAR_16);
 struct sock *VAR_19 = VAR_18->ipv6.igmp_sk;
 struct inet6_dev *VAR_20;
 struct sk_buff *VAR_21;
 struct mld_msg *VAR_22;
 const struct in6_addr *VAR_23, *VAR_24;
 struct in6_addr VAR_25;
 int VAR_26 = FUNC_5(VAR_16);
 int VAR_27 = VAR_16->needed_tailroom;
 int VAR_28, VAR_29, VAR_30, VAR_31;
 u8 VAR_32[8] = { VAR_3, 0,
       VAR_7, 2, 0, 0,
       VAR_6, 0 };
 struct flowi6 VAR_33;
 struct dst_entry *VAR_34;

 if (VAR_17 == VAR_1)
  VAR_23 = &VAR_14;
 else
  VAR_23 = VAR_15;

 VAR_29 = sizeof(struct icmp6hdr) + sizeof(struct in6_addr);
 VAR_30 = VAR_29 + sizeof(VAR_32);
 VAR_31 = sizeof(struct ipv6hdr) + VAR_30;

 FUNC_18();
 FUNC_3(VAR_18, FUNC_8(VAR_16),
        VAR_4, VAR_31);
 FUNC_19();

 VAR_21 = FUNC_24(VAR_19, VAR_26 + VAR_27 + VAR_31, 1, &VAR_28);

 if (!VAR_21) {
  FUNC_18();
  FUNC_2(VAR_18, FUNC_8(VAR_16),
         VAR_5);
  FUNC_19();
  return;
 }
 VAR_21->priority = VAR_11;
 FUNC_23(VAR_21, VAR_26);

 if (FUNC_15(VAR_16, &VAR_25, VAR_2)) {




  VAR_24 = &VAR_13;
 } else
  VAR_24 = &VAR_25;

 FUNC_14(VAR_19, VAR_21, VAR_16, VAR_24, VAR_23, VAR_8, VAR_30);

 FUNC_21(VAR_21, VAR_32, sizeof(VAR_32));

 VAR_22 = FUNC_22(VAR_21, sizeof(struct mld_msg));
 VAR_22->mld_type = VAR_17;
 VAR_22->mld_mca = *VAR_15;

 VAR_22->mld_cksum = FUNC_9(VAR_24, VAR_23, VAR_29,
      VAR_3,
      FUNC_10(VAR_22, VAR_29, 0));

 FUNC_18();
 VAR_20 = FUNC_8(VAR_21->dev);

 FUNC_13(VAR_19, &VAR_33, VAR_17,
    &FUNC_16(VAR_21)->saddr, &FUNC_16(VAR_21)->daddr,
    VAR_21->dev->ifindex);
 VAR_34 = FUNC_12(VAR_21->dev, &VAR_33);
 if (FUNC_4(VAR_34)) {
  VAR_28 = FUNC_7(VAR_34);
  goto err_out;
 }

 FUNC_20(VAR_21, VAR_34);
 VAR_28 = FUNC_6(VAR_9, VAR_10,
        VAR_18, VAR_19, VAR_21, ((void*)0), VAR_21->dev,
        VAR_12);
out:
 if (!VAR_28) {
  FUNC_0(VAR_18, VAR_20, VAR_17);
  FUNC_1(VAR_18, VAR_20, VAR_0);
 } else
  FUNC_2(VAR_18, VAR_20, VAR_5);

 FUNC_19();
 return;

err_out:
 FUNC_17(VAR_21);
 goto out;
}
