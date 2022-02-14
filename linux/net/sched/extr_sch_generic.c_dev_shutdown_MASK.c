
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int watchdog_timer; int * qdisc; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int (*) (struct net_device*,scalar_t__,int *),int *) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct net_device*,scalar_t__,int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct net_device *VAR_1)
{
 FUNC_2(VAR_1, FUNC_4, &VAR_0);
 if (FUNC_1(VAR_1))
  FUNC_4(VAR_1, FUNC_1(VAR_1), &VAR_0);
 FUNC_3(VAR_1->qdisc);
 VAR_1->qdisc = &VAR_0;

 FUNC_0(FUNC_5(&VAR_1->watchdog_timer));
}
