
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switchdev_obj {struct net_device* orig_dev; } ;
struct net_device {int dummy; } ;
struct dsa_port {scalar_t__ bridge_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct switchdev_obj const*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct dsa_port*,int ) ;
 struct dsa_port* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1,
         const struct switchdev_obj *VAR_2)
{
 struct dsa_port *VAR_3 = FUNC_3(VAR_1);

 if (VAR_2->orig_dev != VAR_1)
  return -VAR_0;

 if (VAR_3->bridge_dev && !FUNC_1(VAR_3->bridge_dev))
  return 0;




 return FUNC_2(VAR_3, FUNC_0(VAR_2));
}
