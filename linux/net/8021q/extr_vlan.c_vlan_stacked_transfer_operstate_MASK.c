
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlan_dev_priv {int flags; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device const*,struct net_device*) ;

__attribute__((used)) static void FUNC_1(const struct net_device *VAR_1,
         struct net_device *VAR_2,
         struct vlan_dev_priv *VAR_3)
{
 if (!(VAR_3->flags & VAR_0))
  FUNC_0(VAR_1, VAR_2);
}
