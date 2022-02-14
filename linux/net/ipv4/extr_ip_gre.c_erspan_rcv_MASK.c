
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tnl_ptk_info {int flags; int key; } ;
struct sk_buff {TYPE_4__* dev; scalar_t__ data; } ;
struct net {int dummy; } ;
struct TYPE_7__ {int tun_flags; } ;
struct ip_tunnel_info {int options_len; TYPE_3__ key; } ;
struct TYPE_6__ {struct ip_tunnel_info tun_info; } ;
struct metadata_dst {TYPE_2__ u; } ;
struct iphdr {int daddr; int saddr; } ;
struct ip_tunnel_net {int dummy; } ;
struct ip_tunnel {scalar_t__ collect_md; } ;
struct erspan_md2 {int dummy; } ;
struct TYPE_5__ {struct erspan_md2 md2; } ;
struct erspan_metadata {int version; TYPE_1__ u; } ;
struct erspan_base_hdr {int ver; } ;
typedef int __be64 ;
typedef int __be16 ;
struct TYPE_8__ {int ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int,int ,int,int) ;
 struct net* FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int) ;
 int VAR_7 ;
 int FUNC_3 (int ) ;
 struct iphdr* FUNC_4 (struct sk_buff*) ;
 struct metadata_dst* FUNC_5 (struct sk_buff*,int,int ,int) ;
 struct erspan_metadata* FUNC_6 (struct ip_tunnel_info*) ;
 struct ip_tunnel* FUNC_7 (struct ip_tunnel_net*,int ,int,int ,int ,int ) ;
 int FUNC_8 (struct ip_tunnel*,struct sk_buff*,struct tnl_ptk_info*,struct metadata_dst*,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct sk_buff*) ;
 int VAR_8 ;
 int FUNC_11 (struct erspan_md2*,struct erspan_metadata*,int ) ;
 struct ip_tunnel_net* FUNC_12 (struct net*,int ) ;
 int FUNC_13 (struct sk_buff*,int) ;
 unsigned char* FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*) ;
 scalar_t__ FUNC_17 (int) ;

__attribute__((used)) static int FUNC_18(struct sk_buff *VAR_9, struct tnl_ptk_info *VAR_10,
        int VAR_11)
{
 struct net *VAR_12 = FUNC_1(VAR_9->dev);
 struct metadata_dst *VAR_13 = ((void*)0);
 struct erspan_base_hdr *VAR_14;
 struct ip_tunnel_net *VAR_15;
 struct ip_tunnel *VAR_16;
 const struct iphdr *VAR_17;
 struct erspan_md2 *VAR_18;
 int VAR_19;
 int VAR_20;

 VAR_15 = FUNC_12(VAR_12, VAR_7);

 VAR_17 = FUNC_4(VAR_9);
 VAR_14 = (struct erspan_base_hdr *)(VAR_9->data + VAR_11);
 VAR_19 = VAR_14->ver;

 VAR_16 = FUNC_7(VAR_15, VAR_9->dev->ifindex,
      VAR_10->flags | VAR_6,
      VAR_17->saddr, VAR_17->daddr, VAR_10->key);

 if (VAR_16) {
  VAR_20 = VAR_11 + FUNC_2(VAR_19);
  if (FUNC_17(!FUNC_13(VAR_9, VAR_20)))
   return VAR_4;

  if (FUNC_0(VAR_9,
        VAR_20,
        FUNC_3(VAR_2),
        0, 0) < 0)
   goto drop;

  if (VAR_16->collect_md) {
   struct erspan_metadata *VAR_21, *VAR_22;
   struct ip_tunnel_info *VAR_23;
   unsigned char *VAR_24;
   __be64 VAR_25;
   __be16 VAR_26;

   VAR_10->flags |= VAR_6;
   VAR_26 = VAR_10->flags;
   VAR_25 = FUNC_9(VAR_10->key);

   VAR_13 = FUNC_5(VAR_9, VAR_26,
      VAR_25, sizeof(*VAR_22));
   if (!VAR_13)
    return VAR_4;





   VAR_24 = FUNC_14(VAR_9) +
        FUNC_15(VAR_9);
   VAR_21 = (struct erspan_metadata *)(VAR_24 + VAR_11 +
           sizeof(*VAR_14));
   VAR_22 = FUNC_6(&VAR_13->u.tun_info);
   VAR_22->version = VAR_19;
   VAR_18 = &VAR_22->u.md2;
   FUNC_11(VAR_18, VAR_21, VAR_19 == 1 ? VAR_0 :
             VAR_1);

   VAR_23 = &VAR_13->u.tun_info;
   VAR_23->key.tun_flags |= VAR_5;
   VAR_23->options_len = sizeof(*VAR_22);
  }

  FUNC_16(VAR_9);
  FUNC_8(VAR_16, VAR_9, VAR_10, VAR_13, VAR_8);
  return VAR_3;
 }
 return VAR_4;

drop:
 FUNC_10(VAR_9);
 return VAR_3;
}
