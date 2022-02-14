
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* pthread_mutexattr_t ;
struct TYPE_3__ {int robustness; } ;


 int VAR_0 ;



int
FUNC_0 (pthread_mutexattr_t * VAR_1, int VAR_2)
{
  int VAR_3 = VAR_0;

  if ((VAR_1 != ((void*)0) && *VAR_1 != ((void*)0)))
    {
      switch (VAR_2)
        {
          case 128:
          case 129:
     (*VAR_1)->robustness = VAR_2;
            VAR_3 = 0;
            break;
        }
    }

  return (VAR_3);
}
