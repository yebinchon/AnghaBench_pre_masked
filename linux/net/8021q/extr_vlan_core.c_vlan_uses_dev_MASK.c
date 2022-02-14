
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ nr_vlan_devs; } ;
struct vlan_info {TYPE_1__ grp; } ;
struct net_device {int vlan_info; } ;


 int FUNC_0 () ;
 struct vlan_info* FUNC_1 (int ) ;

bool FUNC_2(const struct net_device *VAR_0)
{
 struct vlan_info *VAR_1;

 FUNC_0();

 VAR_1 = FUNC_1(VAR_0->vlan_info);
 if (!VAR_1)
  return 0;
 return VAR_1->grp.nr_vlan_devs ? 1 : 0;
}
