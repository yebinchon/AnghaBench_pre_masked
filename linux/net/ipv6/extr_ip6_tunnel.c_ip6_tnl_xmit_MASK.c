
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sk_buff {scalar_t__ protocol; unsigned int len; scalar_t__ sk; } ;
struct net_device_stats {int tx_carrier_errors; int collisions; } ;
struct net_device {unsigned int needed_headroom; } ;
struct net {int dummy; } ;
struct neighbour {int primary_key; } ;
struct in6_addr {int dummy; } ;
struct ipv6hdr {scalar_t__ hop_limit; struct in6_addr daddr; int saddr; int nexthdr; } ;
struct ipv6_tel_txoption {int ops; } ;
struct TYPE_8__ {scalar_t__ type; } ;
struct TYPE_11__ {scalar_t__ hop_limit; scalar_t__ proto; int flags; scalar_t__ collect_md; int name; int raddr; } ;
struct ip6_tnl {int encap_hlen; unsigned int tun_hlen; scalar_t__ err_count; int hlen; int dst_cache; TYPE_1__ encap; TYPE_4__ parms; struct net* net; scalar_t__ err_time; TYPE_2__* dev; } ;
struct flowi6 {struct in6_addr daddr; int saddr; int flowlabel; } ;
struct dst_entry {int header_len; struct net_device* dev; scalar_t__ error; } ;
typedef int __u8 ;
typedef int __u32 ;
struct TYPE_14__ {int dev; } ;
struct TYPE_13__ {scalar_t__ ttl; } ;
struct TYPE_10__ {scalar_t__ ttl; } ;
struct TYPE_12__ {TYPE_3__ key; } ;
struct TYPE_9__ {scalar_t__ type; struct net_device_stats stats; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (struct dst_entry*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct dst_entry*) ;
 scalar_t__ VAR_11 ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct net_device*) ;
 struct dst_entry* FUNC_5 (int *) ;
 int FUNC_6 (int *,struct dst_entry*,int *) ;
 int FUNC_7 (struct sk_buff*) ;
 unsigned int FUNC_8 (struct dst_entry*) ;
 struct neighbour* FUNC_9 (int ,struct in6_addr*) ;
 int FUNC_10 (struct dst_entry*) ;
 int FUNC_11 (struct flowi6*) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (struct ipv6_tel_txoption*,int) ;
 scalar_t__ FUNC_14 (struct dst_entry*) ;
 TYPE_7__* FUNC_15 (struct dst_entry*) ;
 int FUNC_16 (struct ipv6hdr*,int ,int ) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (struct net*,struct sk_buff*,int ,int,struct flowi6*) ;
 struct dst_entry* FUNC_19 (struct net*,int *,struct flowi6*) ;
 int FUNC_20 (struct sk_buff*,struct ip6_tnl*,int *,struct flowi6*) ;
 int FUNC_21 (struct ip6_tnl*,int *,struct in6_addr*) ;
 int FUNC_22 (int *,struct sk_buff*,struct net_device*) ;
 TYPE_6__* FUNC_23 (struct sk_buff*) ;
 scalar_t__ FUNC_24 (int *) ;
 int FUNC_25 (struct in6_addr*) ;
 scalar_t__ FUNC_26 (struct net*,int ,struct in6_addr*,int ,int *) ;
 struct ipv6hdr* FUNC_27 (struct sk_buff*) ;
 int FUNC_28 (struct sk_buff*,int *,int *) ;
 int VAR_12 ;
 int FUNC_29 (int,int ) ;
 int FUNC_30 (struct in6_addr*,struct in6_addr*,int) ;
 int FUNC_31 (struct neighbour*) ;
 int FUNC_32 (struct net*,int ) ;
 int FUNC_33 (char*,int ) ;
 struct ip6_tnl* FUNC_34 (struct net_device*) ;
 int FUNC_35 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_36 (struct sk_buff*) ;
 int FUNC_37 (struct sk_buff*) ;
 int FUNC_38 (struct sk_buff*,struct dst_entry*) ;
 int FUNC_39 (struct sk_buff*,int) ;
 unsigned int FUNC_40 (struct sk_buff*) ;
 int FUNC_41 (struct sk_buff*) ;
 int FUNC_42 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_43 (struct sk_buff*,unsigned int) ;
 int FUNC_44 (struct sk_buff*) ;
 int FUNC_45 (struct sk_buff*,int) ;
 int FUNC_46 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_47 (struct sk_buff*) ;
 TYPE_5__* FUNC_48 (struct sk_buff*) ;
 scalar_t__ FUNC_49 (int ,scalar_t__) ;
 struct dst_entry* FUNC_50 (struct net*,struct dst_entry*,int ,int *,int ) ;

int FUNC_51(struct sk_buff *VAR_13, struct net_device *VAR_14, __u8 VAR_15,
   struct flowi6 *VAR_16, int VAR_17, __u32 *VAR_18,
   __u8 VAR_19)
{
 struct ip6_tnl *VAR_20 = FUNC_34(VAR_14);
 struct net *VAR_21 = VAR_20->net;
 struct net_device_stats *VAR_22 = &VAR_20->dev->stats;
 struct ipv6hdr *VAR_23;
 struct ipv6_tel_txoption VAR_24;
 struct dst_entry *VAR_25 = ((void*)0), *VAR_26 = ((void*)0);
 struct net_device *VAR_27;
 int VAR_28;
 unsigned int VAR_29 = VAR_20->dev->type == VAR_0 ? VAR_2 : 0;
 unsigned int VAR_30 = sizeof(struct ipv6hdr) + VAR_20->encap_hlen;
 unsigned int VAR_31 = VAR_30;
 bool VAR_32 = 0;
 u8 VAR_33;
 int VAR_34 = -1;

 if (VAR_20->parms.collect_md) {
  VAR_33 = FUNC_48(VAR_13)->key.ttl;
  goto route_lookup;
 } else {
  VAR_33 = VAR_20->parms.hop_limit;
 }


 if (FUNC_24(&VAR_20->parms.raddr)) {
  if (VAR_13->protocol == FUNC_12(VAR_4)) {
   struct in6_addr *VAR_35;
   struct neighbour *VAR_36;
   int VAR_37;

   if (!FUNC_37(VAR_13))
    goto tx_err_link_failure;

   VAR_36 = FUNC_9(FUNC_37(VAR_13),
       &FUNC_27(VAR_13)->daddr);
   if (!VAR_36)
    goto tx_err_link_failure;

   VAR_35 = (struct in6_addr *)&VAR_36->primary_key;
   VAR_37 = FUNC_25(VAR_35);

   if (VAR_37 == VAR_9)
    VAR_35 = &FUNC_27(VAR_13)->daddr;

   FUNC_30(&VAR_16->daddr, VAR_35, sizeof(VAR_16->daddr));
   FUNC_31(VAR_36);
  }
 } else if (VAR_20->parms.proto != 0 && !(VAR_20->parms.flags &
         (VAR_7 |
          VAR_6))) {



  VAR_32 = 1;
 }

 if (VAR_32)
  VAR_25 = FUNC_5(&VAR_20->dst_cache);

 if (!FUNC_21(VAR_20, &VAR_16->saddr, &VAR_16->daddr))
  goto tx_err_link_failure;

 if (!VAR_25) {
route_lookup:

  VAR_16->flowlabel = FUNC_17(VAR_15, VAR_16->flowlabel);

  VAR_25 = FUNC_19(VAR_21, ((void*)0), VAR_16);

  if (VAR_25->error)
   goto tx_err_link_failure;
  VAR_25 = FUNC_50(VAR_21, VAR_25, FUNC_11(VAR_16), ((void*)0), 0);
  if (FUNC_0(VAR_25)) {
   VAR_34 = FUNC_2(VAR_25);
   VAR_25 = ((void*)0);
   goto tx_err_link_failure;
  }
  if (VAR_20->parms.collect_md && FUNC_24(&VAR_16->saddr) &&
      FUNC_26(VAR_21, FUNC_15(VAR_25)->dev,
           &VAR_16->daddr, 0, &VAR_16->saddr))
   goto tx_err_link_failure;
  VAR_26 = VAR_25;
 }

 VAR_27 = VAR_25->dev;

 if (VAR_27 == VAR_14) {
  VAR_22->collisions++;
  FUNC_33("%s: Local routing loop detected!\n",
         VAR_20->parms.name);
  goto tx_err_dst_release;
 }
 VAR_28 = FUNC_8(VAR_25) - VAR_29 - VAR_30 - VAR_20->tun_hlen;
 if (VAR_17 >= 0) {
  VAR_31 += 8;
  VAR_28 -= 8;
 }
 VAR_28 = FUNC_29(VAR_28, VAR_13->protocol == FUNC_12(VAR_4) ?
         VAR_10 : VAR_8);

 FUNC_39(VAR_13, VAR_28);
 if (VAR_13->len - VAR_20->tun_hlen - VAR_29 > VAR_28 && !FUNC_41(VAR_13)) {
  *VAR_18 = VAR_28;
  VAR_34 = -VAR_1;
  goto tx_err_dst_release;
 }

 if (VAR_20->err_count > 0) {
  if (FUNC_49(VAR_12,
    VAR_20->err_time + VAR_5)) {
   VAR_20->err_count--;

   FUNC_7(VAR_13);
  } else {
   VAR_20->err_count = 0;
  }
 }

 FUNC_45(VAR_13, !FUNC_32(VAR_20->net, FUNC_4(VAR_14)));




 VAR_31 += FUNC_1(VAR_27);

 if (FUNC_40(VAR_13) < VAR_31 || FUNC_47(VAR_13) ||
     (FUNC_36(VAR_13) && !FUNC_35(VAR_13, 0))) {
  struct sk_buff *VAR_38;

  VAR_38 = FUNC_43(VAR_13, VAR_31);
  if (!VAR_38)
   goto tx_err_dst_release;

  if (VAR_13->sk)
   FUNC_46(VAR_38, VAR_13->sk);
  FUNC_3(VAR_13);
  VAR_13 = VAR_38;
 }

 if (VAR_20->parms.collect_md) {
  if (VAR_20->encap.type != VAR_11)
   goto tx_err_dst_release;
 } else {
  if (VAR_32 && VAR_26)
   FUNC_6(&VAR_20->dst_cache, VAR_26, &VAR_16->saddr);
 }
 FUNC_38(VAR_13, VAR_25);

 if (VAR_33 == 0) {
  if (VAR_13->protocol == FUNC_12(VAR_3))
   VAR_33 = FUNC_23(VAR_13)->ttl;
  else if (VAR_13->protocol == FUNC_12(VAR_4))
   VAR_33 = FUNC_27(VAR_13)->hop_limit;
  else
   VAR_33 = FUNC_14(VAR_25);
 }




 VAR_31 = FUNC_1(VAR_25->dev) + sizeof(struct ipv6hdr)
   + VAR_25->header_len + VAR_20->hlen;
 if (VAR_31 > VAR_14->needed_headroom)
  VAR_14->needed_headroom = VAR_31;

 VAR_34 = FUNC_20(VAR_13, VAR_20, &VAR_19, VAR_16);
 if (VAR_34)
  return VAR_34;

 if (VAR_17 >= 0) {
  FUNC_13(&VAR_24, VAR_17);
  FUNC_28(VAR_13, &VAR_24.ops, &VAR_19);
 }

 FUNC_42(VAR_13, sizeof(struct ipv6hdr));
 FUNC_44(VAR_13);
 VAR_23 = FUNC_27(VAR_13);
 FUNC_16(VAR_23, VAR_15,
       FUNC_18(VAR_21, VAR_13, VAR_16->flowlabel, 1, VAR_16));
 VAR_23->hop_limit = VAR_33;
 VAR_23->nexthdr = VAR_19;
 VAR_23->saddr = VAR_16->saddr;
 VAR_23->daddr = VAR_16->daddr;
 FUNC_22(((void*)0), VAR_13, VAR_14);
 return 0;
tx_err_link_failure:
 VAR_22->tx_carrier_errors++;
 FUNC_7(VAR_13);
tx_err_dst_release:
 FUNC_10(VAR_25);
 return VAR_34;
}
