
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vlan_vid_info {int list; int vid; int proto; } ;
struct vlan_info {int nr_vids; struct net_device* real_dev; } ;
struct net_device {int name; } ;
typedef int __be16 ;


 int FUNC_0 (struct vlan_vid_info*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,int ,int ) ;
 int FUNC_3 (struct net_device*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct vlan_info *VAR_0,
      struct vlan_vid_info *VAR_1)
{
 struct net_device *VAR_2 = VAR_0->real_dev;
 __be16 VAR_3 = VAR_1->proto;
 u16 VAR_4 = VAR_1->vid;
 int VAR_5;

 VAR_5 = FUNC_3(VAR_2, VAR_3, VAR_4);
 if (VAR_5)
  FUNC_2("failed to kill vid %04x/%d for device %s\n",
   VAR_3, VAR_4, VAR_2->name);

 FUNC_1(&VAR_1->list);
 FUNC_0(VAR_1);
 VAR_0->nr_vids--;
}
