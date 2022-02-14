
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int pid; } ;
struct TYPE_6__ {int numProcs; size_t* pgprocnos; } ;
typedef TYPE_1__ ProcArrayStruct ;
typedef TYPE_2__ PGPROC ;


 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;

PGPROC *
FUNC_0(int VAR_2)
{
 PGPROC *VAR_3 = ((void*)0);
 ProcArrayStruct *VAR_4 = VAR_1;
 int VAR_5;

 if (VAR_2 == 0)
  return ((void*)0);

 for (VAR_5 = 0; VAR_5 < VAR_4->numProcs; VAR_5++)
 {
  PGPROC *VAR_6 = &VAR_0[VAR_4->pgprocnos[VAR_5]];

  if (VAR_6->pid == VAR_2)
  {
   VAR_3 = VAR_6;
   break;
  }
 }

 return VAR_3;
}
