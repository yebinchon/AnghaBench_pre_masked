
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct sk_buff {int protocol; int mark; } ;
struct TYPE_12__ {scalar_t__ header_len; struct net_device* dev; } ;
struct rtable {TYPE_5__ dst; } ;
struct TYPE_11__ {int tx_dropped; int tx_errors; int collisions; int tx_carrier_errors; } ;
struct net_device {scalar_t__ needed_headroom; TYPE_4__ stats; } ;
struct ipv6hdr {int hop_limit; } ;
struct iphdr {int tos; int ttl; int frag_off; } ;
struct TYPE_9__ {int dst; int src; } ;
struct TYPE_10__ {TYPE_2__ ipv4; } ;
struct ip_tunnel_key {int tos; int tun_flags; int ttl; TYPE_3__ u; int tun_id; } ;
struct ip_tunnel_info {int mode; int dst_cache; struct ip_tunnel_key key; } ;
struct TYPE_8__ {scalar_t__ type; } ;
struct ip_tunnel {int net; TYPE_1__ encap; } ;
struct flowi4 {int daddr; int saddr; } ;
typedef int __be16 ;
struct TYPE_13__ {int opt; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_7__* FUNC_0 (struct sk_buff*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct rtable*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (struct net_device*) ;
 struct rtable* FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,TYPE_5__*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_5__*) ;
 struct rtable* FUNC_9 (int ,struct flowi4*) ;
 int FUNC_10 (struct rtable*) ;
 int FUNC_11 (struct sk_buff*,struct ip_tunnel_info*) ;
 int FUNC_12 (int,struct iphdr const*,struct sk_buff*) ;
 scalar_t__ FUNC_13 (struct ip_tunnel_info*) ;
 int FUNC_14 (struct flowi4*,int,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_15 (int *,struct rtable*,struct sk_buff*,int ,int ,int,int,int,int,int) ;
 int FUNC_16 (struct ipv6hdr const*) ;
 int FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (int *,int ,int) ;
 int FUNC_19 (int ,int ) ;
 struct ip_tunnel* FUNC_20 (struct net_device*) ;
 scalar_t__ FUNC_21 (struct sk_buff*,scalar_t__) ;
 int FUNC_22 (struct sk_buff*) ;
 scalar_t__ FUNC_23 (struct sk_buff*) ;
 struct ip_tunnel_info* FUNC_24 (struct sk_buff*) ;
 scalar_t__ FUNC_25 (struct net_device*,struct sk_buff*,struct rtable*,int,struct iphdr const*,int,int ,int) ;
 int FUNC_26 (int ) ;
 scalar_t__ FUNC_27 (int) ;

void FUNC_28(struct sk_buff *VAR_7, struct net_device *VAR_8,
         u8 VAR_9, int VAR_10)
{
 struct ip_tunnel *VAR_11 = FUNC_20(VAR_8);
 u32 VAR_12 = sizeof(struct iphdr);
 struct ip_tunnel_info *VAR_13;
 const struct ip_tunnel_key *VAR_14;
 const struct iphdr *VAR_15;
 struct rtable *VAR_16 = ((void*)0);
 struct flowi4 VAR_17;
 __be16 VAR_18 = 0;
 u8 VAR_19, VAR_20;
 bool VAR_21;

 VAR_13 = FUNC_24(VAR_7);
 if (FUNC_27(!VAR_13 || !(VAR_13->mode & VAR_4) ||
       FUNC_13(VAR_13) != VAR_0))
  goto tx_error;
 VAR_14 = &VAR_13->key;
 FUNC_18(&(FUNC_0(VAR_7)->opt), 0, sizeof(FUNC_0(VAR_7)->opt));
 VAR_15 = (const struct iphdr *)FUNC_23(VAR_7);
 VAR_19 = VAR_14->tos;
 if (VAR_19 == 1) {
  if (VAR_7->protocol == FUNC_7(VAR_1))
   VAR_19 = VAR_15->tos;
  else if (VAR_7->protocol == FUNC_7(VAR_2))
   VAR_19 = FUNC_16((const struct ipv6hdr *)VAR_15);
 }
 FUNC_14(&VAR_17, VAR_9, VAR_14->u.ipv4.dst, VAR_14->u.ipv4.src,
       FUNC_26(VAR_14->tun_id), FUNC_3(VAR_19),
       0, VAR_7->mark, FUNC_22(VAR_7));
 if (VAR_11->encap.type != VAR_6)
  goto tx_error;

 VAR_21 = FUNC_11(VAR_7, VAR_13);
 if (VAR_21)
  VAR_16 = FUNC_5(&VAR_13->dst_cache, &VAR_17);
 if (!VAR_16) {
  VAR_16 = FUNC_9(VAR_11->net, &VAR_17);
  if (FUNC_1(VAR_16)) {
   VAR_8->stats.tx_carrier_errors++;
   goto tx_error;
  }
  if (VAR_21)
   FUNC_6(&VAR_13->dst_cache, &VAR_16->dst,
       VAR_17);
 }
 if (VAR_16->dst.dev == VAR_8) {
  FUNC_10(VAR_16);
  VAR_8->stats.collisions++;
  goto tx_error;
 }

 if (VAR_14->tun_flags & VAR_5)
  VAR_18 = FUNC_7(VAR_3);
 if (FUNC_25(VAR_8, VAR_7, VAR_16, VAR_18, VAR_15, VAR_10,
       VAR_14->u.ipv4.dst, 1)) {
  FUNC_10(VAR_16);
  goto tx_error;
 }

 VAR_19 = FUNC_12(VAR_19, VAR_15, VAR_7);
 VAR_20 = VAR_14->ttl;
 if (VAR_20 == 0) {
  if (VAR_7->protocol == FUNC_7(VAR_1))
   VAR_20 = VAR_15->ttl;
  else if (VAR_7->protocol == FUNC_7(VAR_2))
   VAR_20 = ((const struct ipv6hdr *)VAR_15)->hop_limit;
  else
   VAR_20 = FUNC_8(&VAR_16->dst);
 }

 if (!VAR_18 && VAR_7->protocol == FUNC_7(VAR_1))
  VAR_18 = VAR_15->frag_off & FUNC_7(VAR_3);

 VAR_12 += FUNC_2(VAR_16->dst.dev) + VAR_16->dst.header_len;
 if (VAR_12 > VAR_8->needed_headroom)
  VAR_8->needed_headroom = VAR_12;

 if (FUNC_21(VAR_7, VAR_8->needed_headroom)) {
  FUNC_10(VAR_16);
  goto tx_dropped;
 }
 FUNC_15(((void*)0), VAR_16, VAR_7, VAR_17, VAR_17, VAR_9, VAR_19, VAR_20,
        VAR_18, !FUNC_19(VAR_11->net, FUNC_4(VAR_8)));
 return;
tx_error:
 VAR_8->stats.tx_errors++;
 goto kfree;
tx_dropped:
 VAR_8->stats.tx_dropped++;
kfree:
 FUNC_17(VAR_7);
}
