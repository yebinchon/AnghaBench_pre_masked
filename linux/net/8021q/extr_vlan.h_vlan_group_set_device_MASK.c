
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct vlan_group {struct net_device**** vlan_devices_arrays; } ;
struct net_device {int dummy; } ;
typedef int __be16 ;


 size_t VAR_0 ;
 size_t FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct vlan_group *VAR_1,
      __be16 VAR_2, u16 VAR_3,
      struct net_device *VAR_4)
{
 struct net_device **VAR_5;
 if (!VAR_1)
  return;
 VAR_5 = VAR_1->vlan_devices_arrays[FUNC_0(VAR_2)]
           [VAR_3 / VAR_0];
 VAR_5[VAR_3 % VAR_0] = VAR_4;
}
