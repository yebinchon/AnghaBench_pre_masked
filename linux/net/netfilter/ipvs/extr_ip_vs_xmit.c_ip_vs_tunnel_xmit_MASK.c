
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct udphdr {int dummy; } ;
struct sk_buff {scalar_t__ ip_summed; int ignore_df; int sk; int len; int network_header; int transport_header; } ;
struct TYPE_5__ {struct net_device* dev; } ;
struct rtable {TYPE_1__ dst; } ;
struct netns_ipvs {struct net* net; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct iphdr {int version; int ihl; void* ttl; int saddr; int daddr; void* tos; void* protocol; int frag_off; } ;
struct ip_vs_protocol {int dummy; } ;
struct ip_vs_iphdr {int dummy; } ;
struct TYPE_6__ {int ip; } ;
struct ip_vs_conn {TYPE_2__ daddr; int af; TYPE_3__* dest; struct netns_ipvs* ipvs; } ;
struct guehdr {int dummy; } ;
typedef void* __u8 ;
typedef int __be32 ;
typedef int __be16 ;
struct TYPE_8__ {int opt; } ;
struct TYPE_7__ {int tun_type; int tun_flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_4__* FUNC_1 (struct sk_buff*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_5 (struct netns_ipvs*,int ,struct sk_buff*,TYPE_3__*,int ,int,int *,struct ip_vs_iphdr*) ;
 int FUNC_6 (int ,int ) ;
 size_t FUNC_7 (int ) ;
 struct iphdr* FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct net*,int ,struct sk_buff*) ;
 int FUNC_10 (struct net*,struct sk_buff*,int *) ;
 struct sk_buff* FUNC_11 (struct sk_buff*,int ,unsigned int,void**,int *,void**,void**,int *) ;
 int FUNC_12 (int ,struct sk_buff*,struct ip_vs_conn*,int) ;
 int FUNC_13 (struct sk_buff*,struct ip_vs_conn*) ;
 scalar_t__ FUNC_14 (struct sk_buff*,int) ;
 int FUNC_15 (struct net*,struct sk_buff*,struct ip_vs_conn*,void**) ;
 scalar_t__ FUNC_16 (struct net*,struct sk_buff*,struct ip_vs_conn*,void**) ;
 int FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (int *,int ,int) ;
 int FUNC_19 (struct sk_buff*,int) ;
 int FUNC_20 (struct sk_buff*) ;
 struct rtable* FUNC_21 (struct sk_buff*) ;
 int FUNC_22 (struct sk_buff*,void*) ;
 scalar_t__ FUNC_23 (struct netns_ipvs*) ;
 int FUNC_24 (int,struct sk_buff*,int ,int ,int ) ;

int
FUNC_25(struct sk_buff *VAR_22, struct ip_vs_conn *VAR_23,
    struct ip_vs_protocol *VAR_24, struct ip_vs_iphdr *VAR_25)
{
 struct netns_ipvs *VAR_26 = VAR_23->ipvs;
 struct net *VAR_27 = VAR_26->net;
 struct rtable *VAR_28;
 __be32 VAR_29;
 struct net_device *VAR_30;
 __u8 VAR_31 = 0;
 __u8 VAR_32 = 0;
 __u8 VAR_33 = 0;
 __be16 VAR_34 = 0;
 __be16 *VAR_35 = ((void*)0);
 struct iphdr *VAR_36;
 unsigned int VAR_37;
 int VAR_38, VAR_39;
 int VAR_40, VAR_41;
 int VAR_42;

 FUNC_0(10);

 VAR_39 = FUNC_5(VAR_26, VAR_23->af, VAR_22, VAR_23->dest, VAR_23->daddr.ip,
       VAR_7 |
       VAR_8 |
       VAR_6 |
       VAR_9, &VAR_29, VAR_25);
 if (VAR_39 < 0)
  goto tx_error;
 if (VAR_39)
  return FUNC_12(VAR_12, VAR_22, VAR_23, 1);

 VAR_28 = FUNC_21(VAR_22);
 VAR_30 = VAR_28->dst.dev;




 VAR_37 = FUNC_3(VAR_30) + sizeof(struct iphdr);

 VAR_40 = VAR_23->dest->tun_type;
 VAR_42 = VAR_23->dest->tun_flags;

 if (VAR_40 == VAR_5) {
  size_t VAR_43, VAR_44 = 0;

  if ((VAR_42 & VAR_11) &&
      VAR_22->ip_summed == VAR_1) {
   VAR_44 += VAR_3 + VAR_2;
  }
  VAR_43 = sizeof(struct guehdr) + VAR_44;

  VAR_37 += sizeof(struct udphdr) + VAR_43;
 } else if (VAR_40 == VAR_4) {
  size_t VAR_45;
  __be16 VAR_46 = 0;

  if (VAR_42 & VAR_10)
   VAR_46 |= VAR_21;
  VAR_45 = FUNC_7(VAR_46);

  VAR_37 += VAR_45;
 }


 VAR_35 = FUNC_23(VAR_26) ? &VAR_34 : ((void*)0);
 VAR_22 = FUNC_11(VAR_22, VAR_23->af, VAR_37,
      &VAR_31, ((void*)0), &VAR_32,
      &VAR_33, VAR_35);
 if (FUNC_2(VAR_22))
  goto tx_error;

 VAR_41 = FUNC_6(VAR_0, VAR_23->af);
 if (VAR_40 == VAR_5) {
  if ((VAR_42 & VAR_10) ||
      (VAR_42 & VAR_11))
   VAR_41 |= VAR_20;
  else
   VAR_41 |= VAR_19;
  if ((VAR_42 & VAR_11) &&
      VAR_22->ip_summed == VAR_1) {
   VAR_41 |= VAR_18;
  }
 } else if (VAR_40 == VAR_4) {
  if (VAR_42 & VAR_10)
   VAR_41 |= VAR_17;
  else
   VAR_41 |= VAR_16;
 }

 if (FUNC_14(VAR_22, VAR_41))
  goto tx_error;

 VAR_22->transport_header = VAR_22->network_header;

 FUNC_22(VAR_22, VAR_31);

 if (VAR_40 == VAR_5) {
  bool VAR_47 = 0;

  if (FUNC_16(VAR_27, VAR_22, VAR_23, &VAR_31))
   goto tx_error;

  if ((VAR_42 & VAR_10) ||
      (VAR_42 & VAR_11))
   VAR_47 = 1;

  FUNC_24(!VAR_47, VAR_22, VAR_29, VAR_23->daddr.ip, VAR_22->len);
 } else if (VAR_40 == VAR_4)
  FUNC_15(VAR_27, VAR_22, VAR_23, &VAR_31);

 FUNC_19(VAR_22, sizeof(struct iphdr));
 FUNC_20(VAR_22);
 FUNC_18(&(FUNC_1(VAR_22)->opt), 0, sizeof(FUNC_1(VAR_22)->opt));




 VAR_36 = FUNC_8(VAR_22);
 VAR_36->version = 4;
 VAR_36->ihl = sizeof(struct iphdr)>>2;
 VAR_36->frag_off = VAR_34;
 VAR_36->protocol = VAR_31;
 VAR_36->tos = VAR_32;
 VAR_36->daddr = VAR_23->daddr.ip;
 VAR_36->saddr = VAR_29;
 VAR_36->ttl = VAR_33;
 FUNC_10(VAR_27, VAR_22, ((void*)0));


 VAR_22->ignore_df = 1;

 VAR_38 = FUNC_13(VAR_22, VAR_23);
 if (VAR_38 == VAR_13)
  FUNC_9(VAR_27, VAR_22->sk, VAR_22);
 else if (VAR_38 == VAR_14)
  FUNC_17(VAR_22);

 FUNC_4(10);

 return VAR_15;

  tx_error:
 if (!FUNC_2(VAR_22))
  FUNC_17(VAR_22);
 FUNC_4(10);
 return VAR_15;
}
