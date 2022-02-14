
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt_mutex {int owner; } ;


 unsigned long FUNC_0 (unsigned long) ;
 unsigned long VAR_0 ;
 int FUNC_1 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_2 (struct rt_mutex*) ;

__attribute__((used)) static void FUNC_3(struct rt_mutex *VAR_1)
{
 unsigned long VAR_2, *VAR_3 = (unsigned long *) &VAR_1->owner;

 if (FUNC_2(VAR_1))
  return;
 VAR_2 = FUNC_0(*VAR_3);
 if (VAR_2 & VAR_0)
  FUNC_1(*VAR_3, VAR_2 & ~VAR_0);
}
