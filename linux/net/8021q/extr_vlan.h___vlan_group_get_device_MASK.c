
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct vlan_group {struct net_device**** vlan_devices_arrays; } ;
struct net_device {int dummy; } ;


 size_t VAR_0 ;

__attribute__((used)) static inline struct net_device *FUNC_0(struct vlan_group *VAR_1,
        unsigned int VAR_2,
        u16 VAR_3)
{
 struct net_device **VAR_4;

 VAR_4 = VAR_1->vlan_devices_arrays[VAR_2]
           [VAR_3 / VAR_0];
 return VAR_4 ? VAR_4[VAR_3 % VAR_0] : ((void*)0);
}
