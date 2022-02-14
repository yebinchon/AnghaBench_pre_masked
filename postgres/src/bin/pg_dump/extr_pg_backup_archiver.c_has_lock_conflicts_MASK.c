
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nLockDeps; int nDeps; scalar_t__* lockDeps; scalar_t__* dependencies; } ;
typedef TYPE_1__ TocEntry ;



__attribute__((used)) static bool
FUNC_0(TocEntry *VAR_0, TocEntry *VAR_1)
{
 int VAR_2,
    VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0->nLockDeps; VAR_2++)
 {
  for (VAR_3 = 0; VAR_3 < VAR_1->nDeps; VAR_3++)
  {
   if (VAR_0->lockDeps[VAR_2] == VAR_1->dependencies[VAR_3])
    return 1;
  }
 }
 return 0;
}
