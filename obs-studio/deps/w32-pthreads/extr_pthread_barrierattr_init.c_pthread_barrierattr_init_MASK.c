
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* pthread_barrierattr_t ;
struct TYPE_3__ {int pshared; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;

int
FUNC_1 (pthread_barrierattr_t * VAR_2)
{
  pthread_barrierattr_t VAR_3;
  int VAR_4 = 0;

  VAR_3 = (pthread_barrierattr_t) FUNC_0 (1, sizeof (*VAR_3));

  if (VAR_3 == ((void*)0))
    {
      VAR_4 = VAR_0;
    }
  else
    {
      VAR_3->pshared = VAR_1;
    }

  *VAR_2 = VAR_3;

  return (VAR_4);
}
