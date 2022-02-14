
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vlan_vid_info {int vid; int proto; } ;
typedef int __be16 ;


 int VAR_0 ;
 struct vlan_vid_info* FUNC_0 (int,int ) ;

__attribute__((used)) static struct vlan_vid_info *FUNC_1(__be16 VAR_1, u16 VAR_2)
{
 struct vlan_vid_info *VAR_3;

 VAR_3 = FUNC_0(sizeof(struct vlan_vid_info), VAR_0);
 if (!VAR_3)
  return ((void*)0);
 VAR_3->proto = VAR_1;
 VAR_3->vid = VAR_2;

 return VAR_3;
}
