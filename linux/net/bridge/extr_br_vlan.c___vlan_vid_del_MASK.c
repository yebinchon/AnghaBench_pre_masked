
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct net_bridge_vlan {int priv_flags; int vid; } ;
struct net_bridge {int vlan_proto; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct net_device*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2, struct net_bridge *VAR_3,
     const struct net_bridge_vlan *VAR_4)
{
 int VAR_5;




 VAR_5 = FUNC_0(VAR_2, VAR_4->vid);
 if (!(VAR_4->priv_flags & VAR_0))
  FUNC_1(VAR_2, VAR_3->vlan_proto, VAR_4->vid);
 return VAR_5 == -VAR_1 ? 0 : VAR_5;
}
