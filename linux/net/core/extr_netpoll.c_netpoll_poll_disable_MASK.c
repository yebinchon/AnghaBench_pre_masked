
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netpoll_info {int dev_lock; } ;
struct net_device {int npinfo; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int VAR_0 ;
 struct netpoll_info* FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;

void FUNC_5(struct net_device *VAR_1)
{
 struct netpoll_info *VAR_2;
 int VAR_3;
 FUNC_1();
 VAR_3 = FUNC_3(&VAR_0);
 VAR_2 = FUNC_2(VAR_1->npinfo, &VAR_0);
 if (VAR_2)
  FUNC_0(&VAR_2->dev_lock);
 FUNC_4(&VAR_0, VAR_3);
}
