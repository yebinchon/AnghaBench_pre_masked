
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tunnel_id; } ;
struct net_bridge_vlan {TYPE_1__ tinfo; } ;
typedef int __be32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct net_bridge_vlan *VAR_0,
          struct net_bridge_vlan *VAR_1)
{
 __be32 VAR_2 = FUNC_1(VAR_0->tinfo.tunnel_id);
 __be32 VAR_3 = FUNC_1(VAR_1->tinfo.tunnel_id);

 return (FUNC_0(VAR_2) - FUNC_0(VAR_3)) == 1;
}
