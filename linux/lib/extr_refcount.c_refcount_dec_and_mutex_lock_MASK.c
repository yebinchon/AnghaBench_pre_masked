
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mutex {int dummy; } ;
typedef int refcount_t ;


 int FUNC_0 (struct mutex*) ;
 int FUNC_1 (struct mutex*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

bool FUNC_4(refcount_t *VAR_0, struct mutex *VAR_1)
{
 if (FUNC_3(VAR_0))
  return 0;

 FUNC_0(VAR_1);
 if (!FUNC_2(VAR_0)) {
  FUNC_1(VAR_1);
  return 0;
 }

 return 1;
}
