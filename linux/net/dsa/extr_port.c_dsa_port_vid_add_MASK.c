
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct switchdev_trans {int ph_prepare; } ;
struct TYPE_2__ {int id; } ;
struct switchdev_obj_port_vlan {int vid_end; int vid_begin; int flags; TYPE_1__ obj; } ;
struct dsa_port {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dsa_port*,struct switchdev_obj_port_vlan*,struct switchdev_trans*) ;

int FUNC_1(struct dsa_port *VAR_1, u16 VAR_2, u16 VAR_3)
{
 struct switchdev_obj_port_vlan VAR_4 = {
  .obj.id = VAR_0,
  .flags = VAR_3,
  .vid_begin = VAR_2,
  .vid_end = VAR_2,
 };
 struct switchdev_trans VAR_5;
 int VAR_6;

 VAR_5.ph_prepare = 1;
 VAR_6 = FUNC_0(VAR_1, &VAR_4, &VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_5.ph_prepare = 0;
 return FUNC_0(VAR_1, &VAR_4, &VAR_5);
}
