
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*,struct net_device*) ;
 int FUNC_1 (struct net_device*,struct net_device*) ;

void FUNC_2(struct net_device *VAR_0,
      struct net_device *VAR_1,
      struct net_device *VAR_2)
{
 if (!VAR_1)
  return;

 if (VAR_0 && VAR_1 != VAR_0)
  FUNC_0(VAR_2, VAR_0);

 FUNC_1(VAR_1, VAR_2);
}
