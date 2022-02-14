
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_mutex_t ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *) ;

void FUNC_2(void *VAR_0, int VAR_1)
{
 pthread_mutex_t *VAR_2 = (pthread_mutex_t *) VAR_0;

 if (FUNC_1(&VAR_2[VAR_1]) != 0)
  FUNC_0("pthread_mutex_lock()");
}
