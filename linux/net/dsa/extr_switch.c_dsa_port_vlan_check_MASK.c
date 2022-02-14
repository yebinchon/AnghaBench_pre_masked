
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switchdev_obj_port_vlan {int dummy; } ;
struct dsa_switch {int dummy; } ;
struct dsa_port {int slave; int bridge_dev; } ;


 int VAR_0 ;
 struct dsa_port* FUNC_0 (struct dsa_switch*,int) ;
 int FUNC_1 (int ,int ,void*) ;

__attribute__((used)) static int FUNC_2(struct dsa_switch *VAR_1, int VAR_2,
          const struct switchdev_obj_port_vlan *VAR_3)
{
 const struct dsa_port *VAR_4 = FUNC_0(VAR_1, VAR_2);
 int VAR_5 = 0;




 if (!VAR_4->bridge_dev)
  return VAR_5;







 return FUNC_1(VAR_4->slave, VAR_0,
        (void *)VAR_3);
}
