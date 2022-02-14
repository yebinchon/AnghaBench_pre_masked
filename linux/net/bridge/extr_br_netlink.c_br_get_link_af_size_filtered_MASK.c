
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int priv_flags; } ;
struct net_bridge_vlan_group {int dummy; } ;
struct net_bridge_port {int flags; } ;
struct net_bridge {int dummy; } ;
struct bridge_vlan_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_bridge_vlan_group*,int ) ;
 scalar_t__ FUNC_1 (struct net_bridge_vlan_group*) ;
 struct net_bridge_port* FUNC_2 (struct net_device const*) ;
 struct net_bridge_vlan_group* FUNC_3 (struct net_bridge*) ;
 struct net_bridge_vlan_group* FUNC_4 (struct net_bridge_port*) ;
 struct net_bridge* FUNC_5 (struct net_device const*) ;
 scalar_t__ FUNC_6 (struct net_device const*) ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;
 int FUNC_9 () ;

__attribute__((used)) static size_t FUNC_10(const struct net_device *VAR_2,
        u32 VAR_3)
{
 struct net_bridge_vlan_group *VAR_4 = ((void*)0);
 struct net_bridge_port *VAR_5 = ((void*)0);
 struct net_bridge *VAR_6;
 int VAR_7;
 size_t VAR_8 = 0;

 FUNC_8();
 if (FUNC_6(VAR_2)) {
  VAR_5 = FUNC_2(VAR_2);
  VAR_4 = FUNC_4(VAR_5);
 } else if (VAR_2->priv_flags & VAR_1) {
  VAR_6 = FUNC_5(VAR_2);
  VAR_4 = FUNC_3(VAR_6);
 }
 VAR_7 = FUNC_0(VAR_4, VAR_3);
 FUNC_9();

 if (VAR_5 && (VAR_5->flags & VAR_0))
  VAR_8 += FUNC_1(VAR_4);


 VAR_8 += VAR_7 * FUNC_7(sizeof(struct bridge_vlan_info));

 return VAR_8;
}
