
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;
struct net_bridge {int vlan_proto; } ;


 struct net_bridge* FUNC_0 (struct net_device const*) ;
 int FUNC_1 (int ) ;

int FUNC_2(const struct net_device *VAR_0, u16 *VAR_1)
{
 struct net_bridge *VAR_2 = FUNC_0(VAR_0);

 *VAR_1 = FUNC_1(VAR_2->vlan_proto);

 return 0;
}
