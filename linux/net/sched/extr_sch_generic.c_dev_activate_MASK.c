
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int * qdisc; } ;


 int FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,int (*) (struct net_device*,scalar_t__,int *),int*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int VAR_0 ;
 int FUNC_6 (struct net_device*,scalar_t__,int *) ;

void FUNC_7(struct net_device *VAR_1)
{
 int VAR_2;






 if (VAR_1->qdisc == &VAR_0)
  FUNC_0(VAR_1);

 if (!FUNC_4(VAR_1))

  return;

 VAR_2 = 0;
 FUNC_3(VAR_1, FUNC_6, &VAR_2);
 if (FUNC_1(VAR_1))
  FUNC_6(VAR_1, FUNC_1(VAR_1), ((void*)0));

 if (VAR_2) {
  FUNC_5(VAR_1);
  FUNC_2(VAR_1);
 }
}
