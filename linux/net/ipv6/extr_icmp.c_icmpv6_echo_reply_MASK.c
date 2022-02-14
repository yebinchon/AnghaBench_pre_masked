
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* u32 ;
typedef int tmp_hdr ;
struct sock {void* sk_mark; } ;
struct sk_buff {scalar_t__ len; TYPE_6__* dev; int mark; } ;
struct rt6_info {int dummy; } ;
struct TYPE_8__ {int flowlabel_reflect; scalar_t__ anycast_src_echo_reply; scalar_t__ icmpv6_echo_ignore_anycast; scalar_t__ icmpv6_echo_ignore_multicast; } ;
struct TYPE_9__ {TYPE_1__ sysctl; } ;
struct net {TYPE_2__ ipv6; } ;
struct ipv6_pinfo {scalar_t__ ucast_oif; scalar_t__ mcast_oif; } ;
struct ipcm6_cookie {int tclass; int hlimit; } ;
struct inet6_dev {int dummy; } ;
struct in6_addr {int dummy; } ;
struct icmpv6_msg {void* type; scalar_t__ offset; struct sk_buff* skb; } ;
struct icmp6hdr {void* icmp6_type; } ;
struct flowi6 {scalar_t__ flowi6_oif; struct in6_addr daddr; int flowi6_uid; void* flowi6_mark; void* fl6_icmp_type; struct in6_addr saddr; int flowi6_proto; int flowlabel; } ;
struct dst_entry {int dummy; } ;
typedef int fl6 ;
struct TYPE_11__ {int flags; } ;
struct TYPE_10__ {struct in6_addr saddr; struct in6_addr daddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (struct net*,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct dst_entry*) ;
 int VAR_5 ;
 int FUNC_2 (struct net*,struct inet6_dev*,int ) ;
 struct inet6_dev* FUNC_3 (TYPE_6__*) ;
 struct net* FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (struct dst_entry*) ;
 int FUNC_6 (struct flowi6*) ;
 struct icmp6hdr* FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (struct sk_buff*) ;
 int VAR_6 ;
 int FUNC_9 (struct net*,void*) ;
 int FUNC_10 (struct sock*,struct flowi6*,struct icmp6hdr*,scalar_t__) ;
 struct sock* FUNC_11 (struct net*) ;
 int FUNC_12 (struct sock*) ;
 int FUNC_13 (struct sock*,void*,struct flowi6*) ;
 struct ipv6_pinfo* FUNC_14 (struct sock*) ;
 scalar_t__ FUNC_15 (struct sock*,int ,struct icmpv6_msg*,scalar_t__,int,struct ipcm6_cookie*,struct flowi6*,struct rt6_info*,int ) ;
 scalar_t__ FUNC_16 (struct net*,struct sock*,struct dst_entry**,struct flowi6*) ;
 int FUNC_17 (TYPE_3__*) ;
 int FUNC_18 (struct sock*) ;
 int FUNC_19 (struct ipv6_pinfo*,struct flowi6*,struct dst_entry*) ;
 int FUNC_20 (struct ipcm6_cookie*,struct ipv6_pinfo*) ;
 scalar_t__ FUNC_21 (struct in6_addr*) ;
 int FUNC_22 (int ,struct in6_addr const*) ;
 int FUNC_23 (TYPE_3__*) ;
 TYPE_3__* FUNC_24 (struct sk_buff*) ;
 int FUNC_25 (struct sk_buff*) ;
 int FUNC_26 () ;
 int FUNC_27 () ;
 int FUNC_28 (struct icmp6hdr*,struct icmp6hdr*,int) ;
 int FUNC_29 (struct flowi6*,int ,int) ;
 int FUNC_30 (struct sk_buff*,int ) ;
 int FUNC_31 (struct sk_buff*) ;
 int FUNC_32 (struct net*,int *) ;
 struct dst_entry* FUNC_33 (struct net*,struct dst_entry*,int ,struct sock*,int ) ;

__attribute__((used)) static void FUNC_34(struct sk_buff *VAR_7)
{
 struct net *VAR_8 = FUNC_4(VAR_7->dev);
 struct sock *VAR_9;
 struct inet6_dev *VAR_10;
 struct ipv6_pinfo *VAR_11;
 const struct in6_addr *VAR_12 = ((void*)0);
 struct icmp6hdr *VAR_13 = FUNC_7(VAR_7);
 struct icmp6hdr VAR_14;
 struct flowi6 VAR_15;
 struct icmpv6_msg VAR_16;
 struct dst_entry *VAR_17;
 struct ipcm6_cookie VAR_18;
 u32 VAR_19 = FUNC_0(VAR_8, VAR_7->mark);
 bool VAR_20;

 if (FUNC_21(&FUNC_24(VAR_7)->daddr) &&
     VAR_8->ipv6.sysctl.icmpv6_echo_ignore_multicast)
  return;

 VAR_12 = &FUNC_24(VAR_7)->daddr;

 VAR_20 = FUNC_22(FUNC_31(VAR_7), VAR_12);
 if (VAR_20 && VAR_8->ipv6.sysctl.icmpv6_echo_ignore_anycast)
  return;

 if (!FUNC_25(VAR_7) &&
     !(VAR_8->ipv6.sysctl.anycast_src_echo_reply && VAR_20))
  VAR_12 = ((void*)0);

 FUNC_28(&VAR_14, VAR_13, sizeof(VAR_14));
 VAR_14.icmp6_type = VAR_2;

 FUNC_29(&VAR_15, 0, sizeof(VAR_15));
 if (VAR_8->ipv6.sysctl.flowlabel_reflect & VAR_0)
  VAR_15 = FUNC_17(FUNC_24(VAR_7));

 VAR_15 = VAR_4;
 VAR_15 = FUNC_24(VAR_7)->saddr;
 if (VAR_12)
  VAR_15 = *VAR_12;
 VAR_15 = FUNC_8(VAR_7);
 VAR_15 = VAR_2;
 VAR_15 = VAR_19;
 VAR_15 = FUNC_32(VAR_8, ((void*)0));
 FUNC_30(VAR_7, FUNC_6(&VAR_15));

 FUNC_26();
 VAR_9 = FUNC_11(VAR_8);
 if (!VAR_9)
  goto out_bh_enable;
 VAR_9->sk_mark = VAR_19;
 VAR_11 = FUNC_14(VAR_9);

 if (!VAR_15 && FUNC_21(&VAR_15))
  VAR_15 = VAR_11->mcast_oif;
 else if (!VAR_15)
  VAR_15 = VAR_11->ucast_oif;

 if (FUNC_16(VAR_8, VAR_9, &VAR_17, &VAR_15))
  goto out;
 VAR_17 = FUNC_33(VAR_8, VAR_17, FUNC_6(&VAR_15), VAR_9, 0);
 if (FUNC_1(VAR_17))
  goto out;


 if ((!(VAR_7->dev->flags & VAR_3) && !FUNC_9(VAR_8, VAR_2)) ||
     !FUNC_13(VAR_9, VAR_2, &VAR_15))
  goto out_dst_release;

 VAR_10 = FUNC_3(VAR_7->dev);

 VAR_16.skb = VAR_7;
 VAR_16.offset = 0;
 VAR_16.type = VAR_2;

 FUNC_20(&VAR_18, VAR_11);
 VAR_18 = FUNC_19(VAR_11, &VAR_15, VAR_17);
 VAR_18 = FUNC_23(FUNC_24(VAR_7));

 if (FUNC_15(VAR_9, VAR_6, &VAR_16,
       VAR_7->len + sizeof(struct icmp6hdr),
       sizeof(struct icmp6hdr), &VAR_18, &VAR_15,
       (struct rt6_info *)VAR_17, VAR_5)) {
  FUNC_2(VAR_8, VAR_10, VAR_1);
  FUNC_18(VAR_9);
 } else {
  FUNC_10(VAR_9, &VAR_15, &VAR_14,
        VAR_7->len + sizeof(struct icmp6hdr));
 }
out_dst_release:
 FUNC_5(VAR_17);
out:
 FUNC_12(VAR_9);
out_bh_enable:
 FUNC_27();
}
