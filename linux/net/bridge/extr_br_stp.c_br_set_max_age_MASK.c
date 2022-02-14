
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge {unsigned long bridge_max_age; unsigned long max_age; int lock; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct net_bridge*) ;
 unsigned long FUNC_1 (unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct net_bridge *VAR_3, unsigned long VAR_4)
{
 unsigned long VAR_5 = FUNC_1(VAR_4);

 if (VAR_5 < VAR_1 || VAR_5 > VAR_0)
  return -VAR_2;

 FUNC_2(&VAR_3->lock);
 VAR_3->bridge_max_age = VAR_5;
 if (FUNC_0(VAR_3))
  VAR_3->max_age = VAR_3->bridge_max_age;
 FUNC_3(&VAR_3->lock);
 return 0;

}
