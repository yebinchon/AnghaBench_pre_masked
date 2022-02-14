
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vlan_vid_info {int list; } ;
struct vlan_info {int nr_vids; int vid_list; struct net_device* real_dev; } ;
struct net_device {int dummy; } ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (struct vlan_vid_info*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct net_device*,int ,int ) ;
 struct vlan_vid_info* FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct vlan_info *VAR_1, __be16 VAR_2, u16 VAR_3,
     struct vlan_vid_info **VAR_4)
{
 struct net_device *VAR_5 = VAR_1->real_dev;
 struct vlan_vid_info *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(VAR_2, VAR_3);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_5, VAR_2, VAR_3);
 if (VAR_7) {
  FUNC_0(VAR_6);
  return VAR_7;
 }

 FUNC_1(&VAR_6->list, &VAR_1->vid_list);
 VAR_1->nr_vids++;
 *VAR_4 = VAR_6;
 return 0;
}
