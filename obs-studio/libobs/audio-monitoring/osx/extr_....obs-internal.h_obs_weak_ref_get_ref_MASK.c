
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_weak_ref {long refs; } ;


 scalar_t__ FUNC_0 (long*,long,long) ;

__attribute__((used)) static inline bool FUNC_1(struct obs_weak_ref *VAR_0)
{
 long VAR_1 = VAR_0->refs;
 while (VAR_1 > -1) {
  if (FUNC_0(&VAR_0->refs, VAR_1, VAR_1 + 1))
   return 1;

  VAR_1 = VAR_0->refs;
 }

 return 0;
}
