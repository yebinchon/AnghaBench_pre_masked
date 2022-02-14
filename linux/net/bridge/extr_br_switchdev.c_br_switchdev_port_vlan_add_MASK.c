
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int id; struct net_device* orig_dev; } ;
struct switchdev_obj_port_vlan {TYPE_1__ obj; int vid_end; int vid_begin; int flags; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,TYPE_1__*,struct netlink_ext_ack*) ;

int FUNC_1(struct net_device *VAR_1, u16 VAR_2, u16 VAR_3,
          struct netlink_ext_ack *VAR_4)
{
 struct switchdev_obj_port_vlan VAR_5 = {
  .obj.orig_dev = VAR_1,
  .obj.id = VAR_0,
  .flags = VAR_3,
  .vid_begin = VAR_2,
  .vid_end = VAR_2,
 };

 return FUNC_0(VAR_1, &VAR_5.obj, VAR_4);
}
