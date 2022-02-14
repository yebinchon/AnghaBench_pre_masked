
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * pthread_condattr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;

int
FUNC_1 (pthread_condattr_t * VAR_1)
{
  pthread_condattr_t VAR_2;
  int VAR_3 = 0;

  VAR_2 = (pthread_condattr_t) FUNC_0 (1, sizeof (*VAR_2));

  if (VAR_2 == ((void*)0))
    {
      VAR_3 = VAR_0;
    }

  *VAR_1 = VAR_2;

  return VAR_3;

}
