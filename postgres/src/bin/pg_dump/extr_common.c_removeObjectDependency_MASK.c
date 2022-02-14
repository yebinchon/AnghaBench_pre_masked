
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nDeps; scalar_t__* dependencies; } ;
typedef TYPE_1__ DumpableObject ;
typedef scalar_t__ DumpId ;



void
FUNC_0(DumpableObject *VAR_0, DumpId VAR_1)
{
 int VAR_2;
 int VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_0->nDeps; VAR_2++)
 {
  if (VAR_0->dependencies[VAR_2] != VAR_1)
   VAR_0->dependencies[VAR_3++] = VAR_0->dependencies[VAR_2];
 }
 VAR_0->nDeps = VAR_3;
}
