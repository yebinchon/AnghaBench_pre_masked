
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct net_device {int dummy; } ;
struct inet6_dev {int dummy; } ;



 int VAR_0 ;
 struct inet6_dev* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct inet6_dev*) ;
 struct net_device* FUNC_2 (void*) ;

__attribute__((used)) static int FUNC_3(struct notifier_block *VAR_1,
    unsigned long VAR_2,
    void *VAR_3)
{
 struct net_device *VAR_4 = FUNC_2(VAR_3);
 struct inet6_dev *VAR_5 = FUNC_0(VAR_4);

 switch (VAR_2) {
 case 128:
  if (VAR_5)
   FUNC_1(VAR_5);
  break;
 default:
  break;
 }

 return VAR_0;
}
