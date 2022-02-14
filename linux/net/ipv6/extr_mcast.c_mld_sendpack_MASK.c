
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sk_buff {TYPE_2__* dev; int len; } ;
struct TYPE_6__ {int igmp_sk; } ;
struct net {TYPE_1__ ipv6; } ;
struct mld2_report {int mld2r_cksum; } ;
struct ipv6hdr {int daddr; int saddr; int payload_len; } ;
struct inet6_dev {int dummy; } ;
struct flowi6 {int dummy; } ;
struct dst_entry {int dummy; } ;
struct TYPE_7__ {int ifindex; } ;


 int FUNC_0 (struct net*,struct inet6_dev*,int ) ;
 int FUNC_1 (struct net*,struct inet6_dev*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct net*,struct inet6_dev*,int ) ;
 int FUNC_3 (struct net*,struct inet6_dev*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (struct dst_entry*) ;
 int VAR_5 ;
 int FUNC_5 (int ,int ,struct net*,int ,struct sk_buff*,int *,TYPE_2__*,int ) ;
 int VAR_6 ;
 int FUNC_6 (struct dst_entry*) ;
 struct inet6_dev* FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int *,int *,int,int ,int ) ;
 int FUNC_9 (int,int,int ) ;
 struct net* FUNC_10 (TYPE_2__*) ;
 int VAR_7 ;
 int FUNC_11 (int) ;
 struct dst_entry* FUNC_12 (TYPE_2__*,struct flowi6*) ;
 int FUNC_13 (int ,struct flowi6*,int ,int *,int *,int ) ;
 struct ipv6hdr* FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (struct sk_buff*) ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 (struct sk_buff*,struct dst_entry*) ;
 int FUNC_19 (struct sk_buff*) ;
 int FUNC_20 (struct sk_buff*) ;
 int FUNC_21 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_22(struct sk_buff *VAR_8)
{
 struct ipv6hdr *VAR_9 = FUNC_14(VAR_8);
 struct mld2_report *VAR_10 =
         (struct mld2_report *)FUNC_21(VAR_8);
 int VAR_11, VAR_12;
 struct inet6_dev *VAR_13;
 struct net *VAR_14 = FUNC_10(VAR_8->dev);
 int VAR_15;
 struct flowi6 VAR_16;
 struct dst_entry *VAR_17;

 FUNC_16();
 VAR_13 = FUNC_7(VAR_8->dev);
 FUNC_3(VAR_14, VAR_13, VAR_3, VAR_8->len);

 VAR_11 = (FUNC_20(VAR_8) - FUNC_19(VAR_8)) -
  sizeof(*VAR_9);
 VAR_12 = FUNC_20(VAR_8) - FUNC_21(VAR_8);
 VAR_9->payload_len = FUNC_11(VAR_11);

 VAR_10->mld2r_cksum = FUNC_8(&VAR_9->saddr, &VAR_9->daddr, VAR_12,
        VAR_2,
        FUNC_9(FUNC_21(VAR_8),
       VAR_12, 0));

 FUNC_13(VAR_14->ipv6.igmp_sk, &VAR_16, VAR_1,
    &FUNC_14(VAR_8)->saddr, &FUNC_14(VAR_8)->daddr,
    VAR_8->dev->ifindex);
 VAR_17 = FUNC_12(VAR_8->dev, &VAR_16);

 VAR_15 = 0;
 if (FUNC_4(VAR_17)) {
  VAR_15 = FUNC_6(VAR_17);
  VAR_17 = ((void*)0);
 }
 FUNC_18(VAR_8, VAR_17);
 if (VAR_15)
  goto err_out;

 VAR_15 = FUNC_5(VAR_5, VAR_6,
        VAR_14, VAR_14->ipv6.igmp_sk, VAR_8, ((void*)0), VAR_8->dev,
        VAR_7);
out:
 if (!VAR_15) {
  FUNC_0(VAR_14, VAR_13, VAR_1);
  FUNC_1(VAR_14, VAR_13, VAR_0);
 } else {
  FUNC_2(VAR_14, VAR_13, VAR_4);
 }

 FUNC_17();
 return;

err_out:
 FUNC_15(VAR_8);
 goto out;
}
