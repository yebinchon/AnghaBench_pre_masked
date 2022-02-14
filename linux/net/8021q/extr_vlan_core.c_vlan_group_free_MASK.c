
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlan_group {int ** vlan_devices_arrays; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct vlan_group *VAR_2)
{
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
   FUNC_0(VAR_2->vlan_devices_arrays[VAR_3][VAR_4]);
}
