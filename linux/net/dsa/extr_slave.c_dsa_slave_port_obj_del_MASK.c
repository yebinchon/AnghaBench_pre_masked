
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switchdev_obj {int id; struct net_device* orig_dev; } ;
struct net_device {int dummy; } ;
struct dsa_port {struct dsa_port* cpu_dp; } ;


 int VAR_0 ;



 int FUNC_0 (struct switchdev_obj const*) ;
 int FUNC_1 (struct dsa_port*,int ) ;
 struct dsa_port* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,struct switchdev_obj const*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1,
      const struct switchdev_obj *VAR_2)
{
 struct dsa_port *VAR_3 = FUNC_2(VAR_1);
 int VAR_4;

 switch (VAR_2->id) {
 case 129:
  if (VAR_2->orig_dev != VAR_1)
   return -VAR_0;
  VAR_4 = FUNC_1(VAR_3, FUNC_0(VAR_2));
  break;
 case 130:



  VAR_4 = FUNC_1(VAR_3->cpu_dp, FUNC_0(VAR_2));
  break;
 case 128:
  VAR_4 = FUNC_3(VAR_1, VAR_2);
  break;
 default:
  VAR_4 = -VAR_0;
  break;
 }

 return VAR_4;
}
