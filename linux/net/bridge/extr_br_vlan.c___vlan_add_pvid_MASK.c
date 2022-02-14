
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct net_bridge_vlan_group {scalar_t__ pvid; } ;


 int FUNC_0 () ;

__attribute__((used)) static bool FUNC_1(struct net_bridge_vlan_group *VAR_0, u16 VAR_1)
{
 if (VAR_0->pvid == VAR_1)
  return 0;

 FUNC_0();
 VAR_0->pvid = VAR_1;

 return 1;
}
