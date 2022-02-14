
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int pgprocno; } ;
struct TYPE_5__ {int numProcs; int maxProcs; int* pgprocnos; } ;
typedef TYPE_1__ ProcArrayStruct ;
typedef TYPE_2__ PGPROC ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int*,int*,int) ;
 TYPE_1__* VAR_4 ;

void
FUNC_6(PGPROC *VAR_5)
{
 ProcArrayStruct *VAR_6 = VAR_4;
 int VAR_7;

 FUNC_0(VAR_3, VAR_2);

 if (VAR_6->numProcs >= VAR_6->maxProcs)
 {





  FUNC_1(VAR_3);
  FUNC_2(VAR_1,
    (FUNC_3(VAR_0),
     FUNC_4("sorry, too many clients already")));
 }
 for (VAR_7 = 0; VAR_7 < VAR_6->numProcs; VAR_7++)
 {




  if ((VAR_6->pgprocnos[VAR_7] == -1) || (VAR_6->pgprocnos[VAR_7] > VAR_5->pgprocno))
   break;
 }

 FUNC_5(&VAR_6->pgprocnos[VAR_7 + 1], &VAR_6->pgprocnos[VAR_7],
   (VAR_6->numProcs - VAR_7) * sizeof(int));
 VAR_6->pgprocnos[VAR_7] = VAR_5->pgprocno;
 VAR_6->numProcs++;

 FUNC_1(VAR_3);
}
