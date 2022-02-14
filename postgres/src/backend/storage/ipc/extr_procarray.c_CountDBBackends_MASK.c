
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ pid; scalar_t__ databaseId; } ;
struct TYPE_5__ {int numProcs; int* pgprocnos; } ;
typedef TYPE_1__ ProcArrayStruct ;
typedef TYPE_2__ PGPROC ;
typedef scalar_t__ Oid ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 TYPE_1__* VAR_3 ;

int
FUNC_3(Oid VAR_4)
{
 ProcArrayStruct *VAR_5 = VAR_3;
 int VAR_6 = 0;
 int VAR_7;

 FUNC_0(VAR_1, VAR_0);

 for (VAR_7 = 0; VAR_7 < VAR_5->numProcs; VAR_7++)
 {
  int VAR_8 = VAR_5->pgprocnos[VAR_7];
  PGPROC *VAR_9 = &VAR_2[VAR_8];

  if (VAR_9->pid == 0)
   continue;
  if (!FUNC_2(VAR_4) ||
   VAR_9->databaseId == VAR_4)
   VAR_6++;
 }

 FUNC_1(VAR_1);

 return VAR_6;
}
