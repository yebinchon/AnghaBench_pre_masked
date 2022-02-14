
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mode; int * lock; } ;
typedef scalar_t__ LWLockMode ;
typedef int LWLock ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;

bool
FUNC_0(LWLock *VAR_2, LWLockMode VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
 {
  if (VAR_0[VAR_4].lock == VAR_2 && VAR_0[VAR_4].mode == VAR_3)
   return 1;
 }
 return 0;
}
