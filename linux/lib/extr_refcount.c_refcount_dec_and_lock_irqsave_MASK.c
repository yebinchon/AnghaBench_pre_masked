
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int spinlock_t ;
typedef int refcount_t ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

bool FUNC_4(refcount_t *VAR_0, spinlock_t *VAR_1,
       unsigned long *VAR_2)
{
 if (FUNC_1(VAR_0))
  return 0;

 FUNC_2(VAR_1, *VAR_2);
 if (!FUNC_0(VAR_0)) {
  FUNC_3(VAR_1, *VAR_2);
  return 0;
 }

 return 1;
}
