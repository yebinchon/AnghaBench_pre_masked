
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;
struct net_device {int dummy; } ;
struct ag71xx {struct phy_device* phy_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct phy_device*) ;
 struct ag71xx* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1)
{
 struct ag71xx *VAR_2 = FUNC_1(VAR_1);
 struct phy_device *VAR_3 = VAR_2->phy_dev;

 if (!VAR_3)
  return -VAR_0;

 return FUNC_0(VAR_3);
}
