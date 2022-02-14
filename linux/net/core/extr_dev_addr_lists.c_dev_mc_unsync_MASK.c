
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ addr_len; int mc; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *,int *,scalar_t__) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;

void FUNC_6(struct net_device *VAR_0, struct net_device *VAR_1)
{
 if (VAR_0->addr_len != VAR_1->addr_len)
  return;

 FUNC_3(VAR_1);
 FUNC_2(VAR_0);
 FUNC_1(&VAR_0->mc, &VAR_1->mc, VAR_0->addr_len);
 FUNC_0(VAR_0);
 FUNC_4(VAR_0);
 FUNC_5(VAR_1);
}
