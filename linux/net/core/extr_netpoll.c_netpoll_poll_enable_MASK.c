
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netpoll_info {int dev_lock; } ;
struct net_device {int npinfo; } ;


 struct netpoll_info* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;

void FUNC_4(struct net_device *VAR_0)
{
 struct netpoll_info *VAR_1;
 FUNC_1();
 VAR_1 = FUNC_0(VAR_0->npinfo);
 if (VAR_1)
  FUNC_3(&VAR_1->dev_lock);
 FUNC_2();
}
