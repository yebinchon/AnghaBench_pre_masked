
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct net_bridge {int dummy; } ;
struct br_vlan_link_state_walk_data {struct net_bridge* br; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int ,struct br_vlan_link_state_walk_data*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1,
          struct net_bridge *VAR_2)
{
 struct br_vlan_link_state_walk_data VAR_3 = {
  .br = VAR_2
 };

 FUNC_1();
 FUNC_0(VAR_1, VAR_0,
          &VAR_3);
 FUNC_2();
}
