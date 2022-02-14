
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct net {int dummy; } ;
struct in_ifaddr {struct in_device* ifa_dev; } ;
struct in_device {scalar_t__ dead; int dev; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 struct net* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct net*,int ,void*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct notifier_block *VAR_3,
      unsigned long VAR_4,
      void *VAR_5)
{
 struct in_device *VAR_6 = ((struct in_ifaddr *)VAR_5)->ifa_dev;
 struct net *VAR_7 = FUNC_0(VAR_6->dev);






 if (VAR_6->dead)
  return VAR_1;

 if (VAR_4 == VAR_0)
  FUNC_1(VAR_7, VAR_2, VAR_5, 0, 0);

 return VAR_1;
}
