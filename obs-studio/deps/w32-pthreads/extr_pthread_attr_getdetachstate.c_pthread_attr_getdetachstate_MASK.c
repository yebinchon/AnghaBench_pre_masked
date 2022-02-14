
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* pthread_attr_t ;
struct TYPE_4__ {int detachstate; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__* const*) ;

int
FUNC_1 (const pthread_attr_t * VAR_1, int *VAR_2)
{
  if (FUNC_0 (VAR_1) != 0 || VAR_2 == ((void*)0))
    {
      return VAR_0;
    }

  *VAR_2 = (*VAR_1)->detachstate;
  return 0;
}
