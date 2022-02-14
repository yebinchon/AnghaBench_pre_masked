
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct switchdev_obj_port_vlan {int vid_begin; int vid_end; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct net_device *VAR_1,
          int VAR_2,
          void *VAR_3)
{
 struct switchdev_obj_port_vlan *VAR_4 = VAR_3;
 u16 VAR_5;

 for (VAR_5 = VAR_4->vid_begin; VAR_5 <= VAR_4->vid_end; ++VAR_5) {
  if (VAR_5 == VAR_2)
   return -VAR_0;
 }

 return 0;
}
