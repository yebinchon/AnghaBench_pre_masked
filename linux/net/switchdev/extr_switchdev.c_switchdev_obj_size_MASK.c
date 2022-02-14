
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switchdev_obj_port_vlan {int dummy; } ;
struct switchdev_obj_port_mdb {int dummy; } ;
struct switchdev_obj {int id; } ;


 int FUNC_0 () ;




__attribute__((used)) static size_t FUNC_1(const struct switchdev_obj *VAR_0)
{
 switch (VAR_0->id) {
 case 128:
  return sizeof(struct switchdev_obj_port_vlan);
 case 129:
  return sizeof(struct switchdev_obj_port_mdb);
 case 130:
  return sizeof(struct switchdev_obj_port_mdb);
 default:
  FUNC_0();
 }
 return 0;
}
