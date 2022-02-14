
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nDeps; int allocDeps; int * dependencies; } ;
typedef TYPE_1__ DumpableObject ;
typedef int DumpId ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int) ;

void
FUNC_2(DumpableObject *VAR_0, DumpId VAR_1)
{
 if (VAR_0->nDeps >= VAR_0->allocDeps)
 {
  if (VAR_0->allocDeps <= 0)
  {
   VAR_0->allocDeps = 16;
   VAR_0->dependencies = (DumpId *)
    FUNC_0(VAR_0->allocDeps * sizeof(DumpId));
  }
  else
  {
   VAR_0->allocDeps *= 2;
   VAR_0->dependencies = (DumpId *)
    FUNC_1(VAR_0->dependencies,
         VAR_0->allocDeps * sizeof(DumpId));
  }
 }
 VAR_0->dependencies[VAR_0->nDeps++] = VAR_1;
}
