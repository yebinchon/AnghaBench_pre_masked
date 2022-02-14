
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int len; scalar_t__ sk; } ;
struct TYPE_7__ {struct net_device* dev; } ;
struct rtable {scalar_t__ rt_type; TYPE_3__ dst; } ;
struct TYPE_5__ {int tx_errors; int tx_dropped; int collisions; int tx_carrier_errors; } ;
struct net_device {int priv_flags; TYPE_1__ stats; } ;
struct neighbour {int primary_key; } ;
struct in6_addr {scalar_t__* s6_addr32; } ;
struct ipv6hdr {int hop_limit; struct in6_addr daddr; } ;
struct iphdr {int tos; int ttl; scalar_t__ daddr; int saddr; scalar_t__ frag_off; } ;
struct TYPE_6__ {struct iphdr iph; int link; } ;
struct ip_tunnel {int hlen; scalar_t__ err_count; int net; scalar_t__ err_time; TYPE_2__ parms; int dst_cache; int fwmark; } ;
struct flowi4 {int daddr; int saddr; } ;
typedef int netdev_tx_t ;
typedef scalar_t__ __be32 ;
typedef scalar_t__ __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct rtable*) ;
 int FUNC_2 (struct net_device*) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int) ;
 int VAR_11 ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct net_device*) ;
 struct rtable* FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,TYPE_3__*,int ) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (TYPE_3__*) ;
 struct neighbour* FUNC_10 (scalar_t__,struct in6_addr*) ;
 int FUNC_11 (struct flowi4*,int ,int ,int ,int ,int,int ,scalar_t__,int ,int ,int ,int ) ;
 int FUNC_12 (struct sk_buff*,int ,int ,int) ;
 struct rtable* FUNC_13 (int ,struct flowi4*,int *) ;
 int FUNC_14 (struct rtable*) ;
 scalar_t__ FUNC_15 (struct sk_buff*,struct ip_tunnel*,int*,struct flowi4*) ;
 scalar_t__ FUNC_16 (struct sk_buff*,int ) ;
 int FUNC_17 (int *,struct rtable*,struct sk_buff*,int ,int ,int,int,int,scalar_t__,int) ;
 scalar_t__ FUNC_18 (struct in6_addr const*) ;
 int FUNC_19 (struct in6_addr const*) ;
 int FUNC_20 (struct ipv6hdr const*) ;
 struct ipv6hdr* FUNC_21 (struct sk_buff*) ;
 int VAR_12 ;
 int FUNC_22 (struct sk_buff*) ;
 int FUNC_23 (struct neighbour*) ;
 int FUNC_24 (char*) ;
 int FUNC_25 (int ,int ) ;
 struct ip_tunnel* FUNC_26 (struct net_device*) ;
 int FUNC_27 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_28 (struct sk_buff*) ;
 scalar_t__ FUNC_29 (struct sk_buff*) ;
 int FUNC_30 (struct sk_buff*,int) ;
 unsigned int FUNC_31 (struct sk_buff*) ;
 int FUNC_32 (struct sk_buff*) ;
 struct sk_buff* FUNC_33 (struct sk_buff*,unsigned int) ;
 int FUNC_34 (struct sk_buff*,int) ;
 int FUNC_35 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_36 (struct sk_buff*) ;
 int FUNC_37 (int ,int *) ;
 scalar_t__ FUNC_38 (int ,scalar_t__) ;
 scalar_t__ FUNC_39 (struct ip_tunnel*,struct in6_addr*) ;

__attribute__((used)) static netdev_tx_t FUNC_40(struct sk_buff *VAR_13,
         struct net_device *VAR_14)
{
 struct ip_tunnel *VAR_15 = FUNC_26(VAR_14);
 const struct iphdr *VAR_16 = &VAR_15->parms.iph;
 const struct ipv6hdr *VAR_17 = FUNC_21(VAR_13);
 u8 VAR_18 = VAR_15->parms.iph.tos;
 __be16 VAR_19 = VAR_16->frag_off;
 struct rtable *VAR_20;
 struct net_device *VAR_21;
 unsigned int VAR_22;
 __be32 VAR_23 = VAR_16->daddr;
 struct flowi4 VAR_24;
 int VAR_25;
 const struct in6_addr *VAR_26;
 int VAR_27;
 u8 VAR_28;
 u8 VAR_29 = VAR_2;
 int VAR_30 = VAR_15->hlen + sizeof(struct iphdr);

 if (VAR_18 == 1)
  VAR_18 = FUNC_20(VAR_17);


 if (VAR_14->priv_flags & VAR_1) {
  struct neighbour *VAR_31 = ((void*)0);
  bool VAR_32 = 0;

  if (FUNC_29(VAR_13))
   VAR_31 = FUNC_10(FUNC_29(VAR_13), &VAR_17->daddr);

  if (!VAR_31) {
   FUNC_24("nexthop == NULL\n");
   goto tx_error;
  }

  VAR_26 = (const struct in6_addr *)&VAR_31->primary_key;
  VAR_27 = FUNC_19(VAR_26);

  if ((VAR_27 & VAR_6) &&
       FUNC_18(VAR_26))
   VAR_23 = VAR_26->s6_addr32[3];
  else
   VAR_32 = 1;

  FUNC_23(VAR_31);
  if (VAR_32)
   goto tx_error;
 }

 if (!VAR_23)
  VAR_23 = FUNC_39(VAR_15, &VAR_17->daddr);

 if (!VAR_23) {
  struct neighbour *VAR_33 = ((void*)0);
  bool VAR_34 = 0;

  if (FUNC_29(VAR_13))
   VAR_33 = FUNC_10(FUNC_29(VAR_13), &VAR_17->daddr);

  if (!VAR_33) {
   FUNC_24("nexthop == NULL\n");
   goto tx_error;
  }

  VAR_26 = (const struct in6_addr *)&VAR_33->primary_key;
  VAR_27 = FUNC_19(VAR_26);

  if (VAR_27 == VAR_4) {
   VAR_26 = &FUNC_21(VAR_13)->daddr;
   VAR_27 = FUNC_19(VAR_26);
  }

  if ((VAR_27 & VAR_5) != 0)
   VAR_23 = VAR_26->s6_addr32[3];
  else
   VAR_34 = 1;

  FUNC_23(VAR_33);
  if (VAR_34)
   goto tx_error;
 }

 FUNC_11(&VAR_24, VAR_15->parms.link, VAR_15->fwmark,
      FUNC_3(VAR_18), VAR_10, VAR_2,
      0, VAR_23, VAR_16->saddr, 0, 0,
      FUNC_37(VAR_15->net, ((void*)0)));

 VAR_20 = FUNC_6(&VAR_15->dst_cache, &VAR_24);
 if (!VAR_20) {
  VAR_20 = FUNC_13(VAR_15->net, &VAR_24, ((void*)0));
  if (FUNC_1(VAR_20)) {
   VAR_14->stats.tx_carrier_errors++;
   goto tx_error_icmp;
  }
  FUNC_7(&VAR_15->dst_cache, &VAR_20->dst, VAR_24);
 }

 if (VAR_20->rt_type != VAR_9) {
  FUNC_14(VAR_20);
  VAR_14->stats.tx_carrier_errors++;
  goto tx_error_icmp;
 }
 VAR_21 = VAR_20->dst.dev;

 if (VAR_21 == VAR_14) {
  FUNC_14(VAR_20);
  VAR_14->stats.collisions++;
  goto tx_error;
 }

 if (FUNC_16(VAR_13, VAR_11)) {
  FUNC_14(VAR_20);
  goto tx_error;
 }

 if (VAR_19) {
  VAR_25 = FUNC_9(&VAR_20->dst) - VAR_30;

  if (VAR_25 < 68) {
   VAR_14->stats.collisions++;
   FUNC_14(VAR_20);
   goto tx_error;
  }

  if (VAR_25 < VAR_7) {
   VAR_25 = VAR_7;
   VAR_19 = 0;
  }

  if (VAR_15->parms.iph.daddr)
   FUNC_30(VAR_13, VAR_25);

  if (VAR_13->len > VAR_25 && !FUNC_32(VAR_13)) {
   FUNC_12(VAR_13, VAR_0, 0, VAR_25);
   FUNC_14(VAR_20);
   goto tx_error;
  }
 }

 if (VAR_15->err_count > 0) {
  if (FUNC_38(VAR_12,
    VAR_15->err_time + VAR_3)) {
   VAR_15->err_count--;
   FUNC_8(VAR_13);
  } else
   VAR_15->err_count = 0;
 }




 VAR_22 = FUNC_2(VAR_21) + VAR_30;

 if (FUNC_31(VAR_13) < VAR_22 || FUNC_36(VAR_13) ||
     (FUNC_28(VAR_13) && !FUNC_27(VAR_13, 0))) {
  struct sk_buff *VAR_35 = FUNC_33(VAR_13, VAR_22);
  if (!VAR_35) {
   FUNC_14(VAR_20);
   VAR_14->stats.tx_dropped++;
   FUNC_22(VAR_13);
   return VAR_8;
  }
  if (VAR_13->sk)
   FUNC_35(VAR_35, VAR_13->sk);
  FUNC_4(VAR_13);
  VAR_13 = VAR_35;
  VAR_17 = FUNC_21(VAR_13);
 }
 VAR_28 = VAR_16->ttl;
 if (VAR_28 == 0)
  VAR_28 = VAR_17->hop_limit;
 VAR_18 = FUNC_0(VAR_18, FUNC_20(VAR_17));

 if (FUNC_15(VAR_13, VAR_15, &VAR_29, &VAR_24) < 0) {
  FUNC_14(VAR_20);
  goto tx_error;
 }

 FUNC_34(VAR_13, VAR_2);

 FUNC_17(((void*)0), VAR_20, VAR_13, VAR_24, VAR_24, VAR_29, VAR_18, VAR_28,
        VAR_19, !FUNC_25(VAR_15->net, FUNC_5(VAR_14)));
 return VAR_8;

tx_error_icmp:
 FUNC_8(VAR_13);
tx_error:
 FUNC_22(VAR_13);
 VAR_14->stats.tx_errors++;
 return VAR_8;
}
