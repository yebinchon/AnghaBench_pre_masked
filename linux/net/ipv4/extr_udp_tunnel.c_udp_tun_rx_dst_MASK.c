
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_5__ {int tun_flags; int tp_dst; int tp_src; } ;
struct ip_tunnel_info {TYPE_2__ key; } ;
struct TYPE_4__ {struct ip_tunnel_info tun_info; } ;
struct metadata_dst {TYPE_1__ u; } ;
typedef int __be64 ;
typedef int __be16 ;
struct TYPE_6__ {scalar_t__ check; int dest; int source; } ;


 unsigned short VAR_0 ;
 int VAR_1 ;
 struct metadata_dst* FUNC_0 (struct sk_buff*,int ,int ,int) ;
 struct metadata_dst* FUNC_1 (struct sk_buff*,int ,int ,int) ;
 TYPE_3__* FUNC_2 (struct sk_buff*) ;

struct metadata_dst *FUNC_3(struct sk_buff *VAR_2, unsigned short VAR_3,
        __be16 VAR_4, __be64 VAR_5, int VAR_6)
{
 struct metadata_dst *VAR_7;
 struct ip_tunnel_info *VAR_8;

 if (VAR_3 == VAR_0)
  VAR_7 = FUNC_0(VAR_2, VAR_4, VAR_5, VAR_6);
 else
  VAR_7 = FUNC_1(VAR_2, VAR_4, VAR_5, VAR_6);
 if (!VAR_7)
  return ((void*)0);

 VAR_8 = &VAR_7->u.tun_info;
 VAR_8->key.tp_src = FUNC_2(VAR_2)->source;
 VAR_8->key.tp_dst = FUNC_2(VAR_2)->dest;
 if (FUNC_2(VAR_2)->check)
  VAR_8->key.tun_flags |= VAR_1;
 return VAR_7;
}
