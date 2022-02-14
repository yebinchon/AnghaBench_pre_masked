
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* pthread_attr_t ;
struct TYPE_4__ {int detachstate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__**) ;

int
FUNC_1 (pthread_attr_t * VAR_3, int VAR_4)
{
  if (FUNC_0 (VAR_3) != 0)
    {
      return VAR_0;
    }

  if (VAR_4 != VAR_2 &&
      VAR_4 != VAR_1)
    {
      return VAR_0;
    }

  (*VAR_3)->detachstate = VAR_4;
  return 0;
}
