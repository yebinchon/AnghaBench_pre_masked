
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct percpu_counter {int dummy; } ;
typedef scalar_t__ s64 ;
typedef int s32 ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct percpu_counter*) ;
 scalar_t__ FUNC_3 (struct percpu_counter*) ;

int FUNC_4(struct percpu_counter *VAR_0, s64 VAR_1, s32 VAR_2)
{
 s64 VAR_3;

 VAR_3 = FUNC_2(VAR_0);

 if (FUNC_0(VAR_3 - VAR_1) > (VAR_2 * FUNC_1())) {
  if (VAR_3 > VAR_1)
   return 1;
  else
   return -1;
 }

 VAR_3 = FUNC_3(VAR_0);
 if (VAR_3 > VAR_1)
  return 1;
 else if (VAR_3 < VAR_1)
  return -1;
 else
  return 0;
}
