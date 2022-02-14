
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ag71xx {int lock; scalar_t__ link; int phy_dev; } ;


 int FUNC_0 (struct ag71xx*) ;
 int FUNC_1 (struct ag71xx*) ;
 struct ag71xx* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_0)
{
 unsigned long VAR_1;
 struct ag71xx *VAR_2 = FUNC_2(VAR_0);

 FUNC_3(VAR_0);
 FUNC_4(VAR_2->phy_dev);

 FUNC_5(&VAR_2->lock, VAR_1);
 if (VAR_2->link) {
  VAR_2->link = 0;
  FUNC_1(VAR_2);
 }
 FUNC_6(&VAR_2->lock, VAR_1);

 FUNC_0(VAR_2);

 return 0;
}
