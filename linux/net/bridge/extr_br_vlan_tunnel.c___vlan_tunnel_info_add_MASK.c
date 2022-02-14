
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct net_bridge_vlan_group {int tunnel_hash; } ;
struct TYPE_6__ {int tunnel_id; struct metadata_dst* tunnel_dst; } ;
struct net_bridge_vlan {TYPE_3__ tinfo; int tnode; } ;
struct TYPE_4__ {int mode; } ;
struct TYPE_5__ {TYPE_1__ tun_info; } ;
struct metadata_dst {int dst; TYPE_2__ u; } ;
typedef int __be64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct metadata_dst* FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int *,int ) ;

__attribute__((used)) static int FUNC_5(struct net_bridge_vlan_group *VAR_6,
      struct net_bridge_vlan *VAR_7, u32 VAR_8)
{
 struct metadata_dst *VAR_9 = ((void*)0);
 __be64 VAR_10 = FUNC_3(FUNC_1(VAR_8));
 int VAR_11;

 if (VAR_7->tinfo.tunnel_dst)
  return -VAR_0;

 VAR_9 = FUNC_0(0, 0, 0, 0, 0, VAR_4,
        VAR_10, 0);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->u.tun_info.mode |= VAR_3 | VAR_2;
 VAR_7->tinfo.tunnel_dst = VAR_9;
 VAR_7->tinfo.tunnel_id = VAR_10;

 VAR_11 = FUNC_4(&VAR_6->tunnel_hash, &VAR_7->tnode,
         VAR_5);
 if (VAR_11)
  goto out;

 return 0;
out:
 FUNC_2(&VAR_7->tinfo.tunnel_dst->dst);
 VAR_7->tinfo.tunnel_dst = ((void*)0);
 VAR_7->tinfo.tunnel_id = 0;

 return VAR_11;
}
