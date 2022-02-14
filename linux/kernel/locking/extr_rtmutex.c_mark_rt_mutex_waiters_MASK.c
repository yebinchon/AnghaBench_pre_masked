
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt_mutex {int owner; } ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (unsigned long*,unsigned long,unsigned long) ;

__attribute__((used)) static inline void FUNC_1(struct rt_mutex *VAR_1)
{
 unsigned long VAR_2, *VAR_3 = (unsigned long *) &VAR_1->owner;

 do {
  VAR_2 = *VAR_3;
 } while (FUNC_0(VAR_3, VAR_2,
     VAR_2 | VAR_0) != VAR_2);
}
