
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ pid; int * waitLock; } ;
struct TYPE_9__ {scalar_t__ xid; } ;
struct TYPE_8__ {int numProcs; int* pgprocnos; } ;
typedef TYPE_1__ ProcArrayStruct ;
typedef TYPE_2__ PGXACT ;
typedef TYPE_3__ PGPROC ;


 scalar_t__ VAR_0 ;
 TYPE_3__* VAR_1 ;
 TYPE_2__* VAR_2 ;
 TYPE_3__* VAR_3 ;
 TYPE_1__* VAR_4 ;

bool
FUNC_0(int VAR_5)
{
 ProcArrayStruct *VAR_6 = VAR_4;
 int VAR_7 = 0;
 int VAR_8;


 if (VAR_5 == 0)
  return 1;






 for (VAR_8 = 0; VAR_8 < VAR_6->numProcs; VAR_8++)
 {
  int VAR_9 = VAR_6->pgprocnos[VAR_8];
  PGPROC *VAR_10 = &VAR_3[VAR_9];
  PGXACT *VAR_11 = &VAR_2[VAR_9];
  if (VAR_9 == -1)
   continue;
  if (VAR_10 == VAR_1)
   continue;
  if (VAR_11->xid == VAR_0)
   continue;
  if (VAR_10->pid == 0)
   continue;
  if (VAR_10->waitLock != ((void*)0))
   continue;
  VAR_7++;
  if (VAR_7 >= VAR_5)
   break;
 }

 return VAR_7 >= VAR_5;
}
