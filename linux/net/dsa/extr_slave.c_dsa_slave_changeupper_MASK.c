
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_notifier_changeupper_info {int upper_dev; scalar_t__ linking; } ;
struct net_device {int dummy; } ;
struct dsa_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dsa_port*,int ) ;
 int FUNC_1 (struct dsa_port*,int ) ;
 struct dsa_port* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_2,
     struct netdev_notifier_changeupper_info *VAR_3)
{
 struct dsa_port *VAR_4 = FUNC_2(VAR_2);
 int VAR_5 = VAR_0;

 if (FUNC_3(VAR_3->upper_dev)) {
  if (VAR_3->linking) {
   VAR_5 = FUNC_0(VAR_4, VAR_3->upper_dev);
   VAR_5 = FUNC_4(VAR_5);
  } else {
   FUNC_1(VAR_4, VAR_3->upper_dev);
   VAR_5 = VAR_1;
  }
 }

 return VAR_5;
}
