
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int id; } ;
struct switchdev_obj_port_vlan {int vid_end; int vid_begin; TYPE_1__ obj; } ;
struct dsa_port {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dsa_port*,struct switchdev_obj_port_vlan*) ;

int FUNC_1(struct dsa_port *VAR_1, u16 VAR_2)
{
 struct switchdev_obj_port_vlan VAR_3 = {
  .obj.id = VAR_0,
  .vid_begin = VAR_2,
  .vid_end = VAR_2,
 };

 return FUNC_0(VAR_1, &VAR_3);
}
