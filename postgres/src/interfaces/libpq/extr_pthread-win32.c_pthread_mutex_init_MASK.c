
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * pthread_mutex_t ;
typedef int CRITICAL_SECTION ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;

int
FUNC_2(pthread_mutex_t *VAR_0, void *VAR_1)
{
 *VAR_0 = (CRITICAL_SECTION *) FUNC_1(sizeof(CRITICAL_SECTION));
 if (!*VAR_0)
  return 1;
 FUNC_0(*VAR_0);
 return 0;
}
