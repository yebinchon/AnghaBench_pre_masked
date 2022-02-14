
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_mutexattr_t ;
typedef int pthread_mutex_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int const*) ;
 int FUNC_2 () ;

int FUNC_3(pthread_mutex_t *VAR_0,
   const pthread_mutexattr_t *VAR_1)
{
 int VAR_2;
 FUNC_2();

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2 == 0)





  FUNC_0(VAR_0);

 return VAR_2;
}
