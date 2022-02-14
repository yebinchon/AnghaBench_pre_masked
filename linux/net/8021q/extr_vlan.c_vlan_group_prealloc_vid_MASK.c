
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vlan_group {struct net_device**** vlan_devices_arrays; } ;
struct net_device {int dummy; } ;
typedef int __be16 ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct net_device** FUNC_1 (unsigned int,int ) ;
 unsigned int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct vlan_group *VAR_3,
       __be16 VAR_4, u16 VAR_5)
{
 struct net_device **VAR_6;
 unsigned int VAR_7, VAR_8;
 unsigned int VAR_9;

 FUNC_0();

 VAR_7 = FUNC_2(VAR_4);
 VAR_8 = VAR_5 / VAR_2;
 VAR_6 = VAR_3->vlan_devices_arrays[VAR_7][VAR_8];
 if (VAR_6 != ((void*)0))
  return 0;

 VAR_9 = sizeof(struct net_device *) * VAR_2;
 VAR_6 = FUNC_1(VAR_9, VAR_1);
 if (VAR_6 == ((void*)0))
  return -VAR_0;

 VAR_3->vlan_devices_arrays[VAR_7][VAR_8] = VAR_6;
 return 0;
}
