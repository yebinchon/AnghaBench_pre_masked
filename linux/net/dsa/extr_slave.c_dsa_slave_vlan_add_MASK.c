
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switchdev_trans {int dummy; } ;
struct switchdev_obj_port_vlan {int flags; } ;
struct switchdev_obj {struct net_device* orig_dev; } ;
struct net_device {int dummy; } ;
struct dsa_port {struct dsa_port* cpu_dp; scalar_t__ bridge_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct switchdev_obj_port_vlan* FUNC_0 (struct switchdev_obj const*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct dsa_port*,struct switchdev_obj_port_vlan*,struct switchdev_trans*) ;
 struct dsa_port* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2,
         const struct switchdev_obj *VAR_3,
         struct switchdev_trans *VAR_4)
{
 struct dsa_port *VAR_5 = FUNC_3(VAR_2);
 struct switchdev_obj_port_vlan VAR_6;
 int VAR_7;

 if (VAR_3->orig_dev != VAR_2)
  return -VAR_1;

 if (VAR_5->bridge_dev && !FUNC_1(VAR_5->bridge_dev))
  return 0;

 VAR_6 = *FUNC_0(VAR_3);

 VAR_7 = FUNC_2(VAR_5, &VAR_6, VAR_4);
 if (VAR_7)
  return VAR_7;





 VAR_6.flags &= ~VAR_0;

 VAR_7 = FUNC_2(VAR_5->cpu_dp, &VAR_6, VAR_4);
 if (VAR_7)
  return VAR_7;

 return 0;
}
