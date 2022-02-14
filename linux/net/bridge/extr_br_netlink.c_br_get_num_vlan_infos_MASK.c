
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_bridge_vlan_group {int num_vlans; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_bridge_vlan_group*,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct net_bridge_vlan_group *VAR_1,
     u32 VAR_2)
{
 int VAR_3;

 if (!VAR_1)
  return 0;

 if (VAR_2 & VAR_0)
  return VAR_1->num_vlans;

 FUNC_1();
 VAR_3 = FUNC_0(VAR_1, VAR_2);
 FUNC_2();

 return VAR_3;
}
