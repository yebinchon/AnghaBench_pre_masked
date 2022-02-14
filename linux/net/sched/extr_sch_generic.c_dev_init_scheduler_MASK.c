
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int watchdog_timer; int * qdisc; } ;


 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,scalar_t__,int *) ;
 int VAR_0 ;
 int FUNC_2 (struct net_device*,int (*) (struct net_device*,scalar_t__,int *),int *) ;
 int VAR_1 ;
 int FUNC_3 (int *,int ,int ) ;

void FUNC_4(struct net_device *VAR_2)
{
 VAR_2->qdisc = &VAR_1;
 FUNC_2(VAR_2, FUNC_1, &VAR_1);
 if (FUNC_0(VAR_2))
  FUNC_1(VAR_2, FUNC_0(VAR_2), &VAR_1);

 FUNC_3(&VAR_2->watchdog_timer, VAR_0, 0);
}
