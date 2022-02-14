
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlan_info {int vid_list; struct net_device* real_dev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct vlan_info* FUNC_1 (int,int ) ;

__attribute__((used)) static struct vlan_info *FUNC_2(struct net_device *VAR_1)
{
 struct vlan_info *VAR_2;

 VAR_2 = FUNC_1(sizeof(struct vlan_info), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 VAR_2->real_dev = VAR_1;
 FUNC_0(&VAR_2->vid_list);
 return VAR_2;
}
