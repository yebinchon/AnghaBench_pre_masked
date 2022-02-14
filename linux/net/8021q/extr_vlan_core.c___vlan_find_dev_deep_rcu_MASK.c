
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vlan_info {int grp; } ;
struct net_device {int vlan_info; } ;
typedef int __be16 ;


 struct net_device* FUNC_0 (struct net_device*) ;
 struct vlan_info* FUNC_1 (int ) ;
 struct net_device* FUNC_2 (int *,int ,int ) ;

struct net_device *FUNC_3(struct net_device *VAR_0,
     __be16 VAR_1, u16 VAR_2)
{
 struct vlan_info *VAR_3 = FUNC_1(VAR_0->vlan_info);

 if (VAR_3) {
  return FUNC_2(&VAR_3->grp,
          VAR_1, VAR_2);
 } else {





  struct net_device *VAR_4;

  VAR_4 = FUNC_0(VAR_0);
  if (VAR_4)
   return FUNC_3(VAR_4,
          VAR_1, VAR_2);
 }

 return ((void*)0);
}
