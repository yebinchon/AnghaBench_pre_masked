
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge {unsigned long bridge_ageing_time; unsigned long ageing_time; int gc_work; int lock; int dev; } ;
typedef int clock_t ;


 int FUNC_0 (int ,unsigned long) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;

int FUNC_5(struct net_bridge *VAR_1, clock_t VAR_2)
{
 unsigned long VAR_3 = FUNC_1(VAR_2);
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1->dev, VAR_3);
 if (VAR_4)
  return VAR_4;

 FUNC_3(&VAR_1->lock);
 VAR_1->bridge_ageing_time = VAR_3;
 VAR_1->ageing_time = VAR_3;
 FUNC_4(&VAR_1->lock);

 FUNC_2(VAR_0, &VAR_1->gc_work, 0);

 return 0;
}
