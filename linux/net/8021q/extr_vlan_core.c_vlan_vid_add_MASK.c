
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vlan_vid_info {int refcount; } ;
struct vlan_info {int dummy; } ;
struct net_device {int vlan_info; } ;
typedef int __be16 ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (struct vlan_info*,int ,int ,struct vlan_vid_info**) ;
 int FUNC_2 (struct vlan_info*) ;
 int FUNC_3 (int ,struct vlan_info*) ;
 struct vlan_info* FUNC_4 (int ) ;
 struct vlan_info* FUNC_5 (struct net_device*) ;
 struct vlan_vid_info* FUNC_6 (struct vlan_info*,int ,int ) ;

int FUNC_7(struct net_device *VAR_1, __be16 VAR_2, u16 VAR_3)
{
 struct vlan_info *VAR_4;
 struct vlan_vid_info *VAR_5;
 bool VAR_6 = 0;
 int VAR_7;

 FUNC_0();

 VAR_4 = FUNC_4(VAR_1->vlan_info);
 if (!VAR_4) {
  VAR_4 = FUNC_5(VAR_1);
  if (!VAR_4)
   return -VAR_0;
  VAR_6 = 1;
 }
 VAR_5 = FUNC_6(VAR_4, VAR_2, VAR_3);
 if (!VAR_5) {
  VAR_7 = FUNC_1(VAR_4, VAR_2, VAR_3, &VAR_5);
  if (VAR_7)
   goto out_free_vlan_info;
 }
 VAR_5->refcount++;

 if (VAR_6)
  FUNC_3(VAR_1->vlan_info, VAR_4);

 return 0;

out_free_vlan_info:
 if (VAR_6)
  FUNC_2(VAR_4);
 return VAR_7;
}
