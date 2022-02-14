
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vlan_vid_info {scalar_t__ refcount; } ;
struct vlan_info {scalar_t__ nr_vids; int rcu; } ;
struct net_device {int vlan_info; } ;
typedef int __be16 ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct vlan_info*,struct vlan_vid_info*) ;
 int FUNC_3 (int *,int ) ;
 struct vlan_info* FUNC_4 (int ) ;
 int VAR_0 ;
 struct vlan_vid_info* FUNC_5 (struct vlan_info*,int ,int ) ;

void FUNC_6(struct net_device *VAR_1, __be16 VAR_2, u16 VAR_3)
{
 struct vlan_info *VAR_4;
 struct vlan_vid_info *VAR_5;

 FUNC_0();

 VAR_4 = FUNC_4(VAR_1->vlan_info);
 if (!VAR_4)
  return;

 VAR_5 = FUNC_5(VAR_4, VAR_2, VAR_3);
 if (!VAR_5)
  return;
 VAR_5->refcount--;
 if (VAR_5->refcount == 0) {
  FUNC_2(VAR_4, VAR_5);
  if (VAR_4->nr_vids == 0) {
   FUNC_1(VAR_1->vlan_info, ((void*)0));
   FUNC_3(&VAR_4->rcu, VAR_0);
  }
 }
}
