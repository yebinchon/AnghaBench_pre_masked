
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int kobj; } ;
struct net_device {struct device dev; } ;
struct TYPE_2__ {int count; } ;


 TYPE_1__* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct device*,int) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct device*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct net_device*) ;

void FUNC_7(struct net_device *VAR_0)
{
 struct device *VAR_1 = &VAR_0->dev;

 if (!FUNC_5(&FUNC_0(VAR_0)->count))
  FUNC_1(VAR_1, 1);

 FUNC_3(&VAR_1->kobj);

 FUNC_6(VAR_0);

 FUNC_4(VAR_1, 0);

 FUNC_2(VAR_1);
}
