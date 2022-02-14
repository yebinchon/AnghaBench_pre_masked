
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct sock {int dummy; } ;
struct sk_buff {int len; TYPE_3__* dev; } ;
struct TYPE_5__ {struct sock* ndisc_sk; } ;
struct net {TYPE_1__ ipv6; } ;
struct inet6_dev {int dummy; } ;
struct in6_addr {int dummy; } ;
struct icmp6hdr {int icmp6_cksum; int icmp6_type; } ;
struct flowi6 {int dummy; } ;
struct dst_entry {int dev; } ;
struct TYPE_7__ {int ifindex; } ;
struct TYPE_6__ {int hop_limit; } ;


 int FUNC_0 (struct net*,struct inet6_dev*,int ) ;
 int FUNC_1 (struct net*,struct inet6_dev*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct net*,struct inet6_dev*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct dst_entry*) ;
 int VAR_3 ;
 int FUNC_4 (int ,int ,struct net*,struct sock*,struct sk_buff*,int *,int ,int ) ;
 int VAR_4 ;
 struct inet6_dev* FUNC_5 (int ) ;
 int FUNC_6 (struct in6_addr const*,struct in6_addr const*,int ,int ,int ) ;
 int FUNC_7 (struct icmp6hdr*,int ,int ) ;
 struct net* FUNC_8 (TYPE_3__*) ;
 int VAR_5 ;
 struct dst_entry* FUNC_9 (TYPE_3__*,struct flowi6*) ;
 struct icmp6hdr* FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sock*,struct flowi6*,int ,struct in6_addr const*,struct in6_addr const*,int) ;
 TYPE_2__* FUNC_12 (struct sock*) ;
 int FUNC_13 (struct sk_buff*,struct in6_addr const*,struct in6_addr const*,int ,int ) ;
 int FUNC_14 (struct sk_buff*) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 struct dst_entry* FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (struct sk_buff*,struct dst_entry*) ;

__attribute__((used)) static void FUNC_19(struct sk_buff *VAR_6,
      const struct in6_addr *VAR_7,
      const struct in6_addr *VAR_8)
{
 struct dst_entry *VAR_9 = FUNC_17(VAR_6);
 struct net *VAR_10 = FUNC_8(VAR_6->dev);
 struct sock *VAR_11 = VAR_10->ipv6.ndisc_sk;
 struct inet6_dev *VAR_12;
 int VAR_13;
 struct icmp6hdr *VAR_14 = FUNC_10(VAR_6);
 u8 VAR_15;

 VAR_15 = VAR_14->icmp6_type;

 if (!VAR_9) {
  struct flowi6 VAR_16;
  int VAR_17 = VAR_6->dev->ifindex;

  FUNC_11(VAR_11, &VAR_16, VAR_15, VAR_8, VAR_7, VAR_17);
  VAR_9 = FUNC_9(VAR_6->dev, &VAR_16);
  if (FUNC_3(VAR_9)) {
   FUNC_14(VAR_6);
   return;
  }

  FUNC_18(VAR_6, VAR_9);
 }

 VAR_14->icmp6_cksum = FUNC_6(VAR_8, VAR_7, VAR_6->len,
           VAR_1,
           FUNC_7(VAR_14,
          VAR_6->len, 0));

 FUNC_13(VAR_6, VAR_8, VAR_7, FUNC_12(VAR_11)->hop_limit, VAR_6->len);

 FUNC_15();
 VAR_12 = FUNC_5(VAR_9->dev);
 FUNC_2(VAR_10, VAR_12, VAR_2, VAR_6->len);

 VAR_13 = FUNC_4(VAR_3, VAR_4,
        VAR_10, VAR_11, VAR_6, ((void*)0), VAR_9->dev,
        VAR_5);
 if (!VAR_13) {
  FUNC_0(VAR_10, VAR_12, VAR_15);
  FUNC_1(VAR_10, VAR_12, VAR_0);
 }

 FUNC_16();
}
