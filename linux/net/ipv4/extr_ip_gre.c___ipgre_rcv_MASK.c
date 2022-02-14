
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tnl_ptk_info {int flags; int key; int proto; } ;
struct sk_buff {TYPE_1__* dev; } ;
struct metadata_dst {int dummy; } ;
struct iphdr {int daddr; int saddr; } ;
struct ip_tunnel_net {int dummy; } ;
struct ip_tunnel {scalar_t__ collect_md; TYPE_2__* dev; } ;
typedef int __be64 ;
typedef int __be16 ;
struct TYPE_4__ {scalar_t__ type; } ;
struct TYPE_3__ {int ifindex; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int,int ,int,int) ;
 struct iphdr* FUNC_1 (struct sk_buff*) ;
 struct metadata_dst* FUNC_2 (struct sk_buff*,int,int ,int ) ;
 struct ip_tunnel* FUNC_3 (struct ip_tunnel_net*,int ,int,int ,int ,int ) ;
 int FUNC_4 (struct ip_tunnel*,struct sk_buff*,struct tnl_ptk_info const*,struct metadata_dst*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sk_buff*) ;
 int VAR_6 ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_7, const struct tnl_ptk_info *VAR_8,
         struct ip_tunnel_net *VAR_9, int VAR_10, bool VAR_11)
{
 struct metadata_dst *VAR_12 = ((void*)0);
 const struct iphdr *VAR_13;
 struct ip_tunnel *VAR_14;

 VAR_13 = FUNC_1(VAR_7);
 VAR_14 = FUNC_3(VAR_9, VAR_7->dev->ifindex, VAR_8->flags,
      VAR_13->saddr, VAR_13->daddr, VAR_8->key);

 if (VAR_14) {
  if (FUNC_0(VAR_7, VAR_10, VAR_8->proto,
        VAR_11, 0) < 0)
   goto drop;

  if (VAR_14->dev->type != VAR_0)
   FUNC_7(VAR_7);
  else
   FUNC_8(VAR_7);
  if (VAR_14->collect_md) {
   __be16 VAR_15;
   __be64 VAR_16;

   VAR_15 = VAR_8->flags & (VAR_4 | VAR_5);
   VAR_16 = FUNC_5(VAR_8->key);
   VAR_12 = FUNC_2(VAR_7, VAR_15, VAR_16, 0);
   if (!VAR_12)
    return VAR_3;
  }

  FUNC_4(VAR_14, VAR_7, VAR_8, VAR_12, VAR_6);
  return VAR_2;
 }
 return VAR_1;

drop:
 FUNC_6(VAR_7);
 return VAR_2;
}
