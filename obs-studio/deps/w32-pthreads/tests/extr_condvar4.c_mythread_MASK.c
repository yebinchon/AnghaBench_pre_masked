
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int notbusy; int lock; int shared; } ;


 int FUNC_0 (int) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

void *
FUNC_4(void * VAR_1)
{
  FUNC_0(FUNC_2(&VAR_0.lock) == 0);
  VAR_0.shared++;
  FUNC_0(FUNC_3(&VAR_0.lock) == 0);

  FUNC_0(FUNC_1(&VAR_0.notbusy) == 0);

  return (void *) 0;
}
