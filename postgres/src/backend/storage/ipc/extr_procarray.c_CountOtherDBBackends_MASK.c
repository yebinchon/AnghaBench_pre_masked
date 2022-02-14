
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ databaseId; int pid; } ;
struct TYPE_9__ {int vacuumFlags; } ;
struct TYPE_8__ {int numProcs; int* pgprocnos; } ;
typedef TYPE_1__ ProcArrayStruct ;
typedef TYPE_2__ PGXACT ;
typedef TYPE_3__ PGPROC ;
typedef scalar_t__ Oid ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 TYPE_3__* VAR_7 ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int) ;
 TYPE_1__* VAR_8 ;

bool
FUNC_5(Oid VAR_9, int *VAR_10, int *VAR_11)
{
 ProcArrayStruct *VAR_12 = VAR_8;


 int VAR_13[10];
 int VAR_14;


 for (VAR_14 = 0; VAR_14 < 50; VAR_14++)
 {
  int VAR_15 = 0;
  bool VAR_16 = 0;
  int VAR_17;

  FUNC_0();

  *VAR_10 = *VAR_11 = 0;

  FUNC_1(VAR_4, VAR_0);

  for (VAR_17 = 0; VAR_17 < VAR_12->numProcs; VAR_17++)
  {
   int VAR_18 = VAR_12->pgprocnos[VAR_17];
   PGPROC *VAR_19 = &VAR_7[VAR_18];
   PGXACT *VAR_20 = &VAR_6[VAR_18];

   if (VAR_19->databaseId != VAR_9)
    continue;
   if (VAR_19 == VAR_2)
    continue;

   VAR_16 = 1;

   if (VAR_19->pid == 0)
    (*VAR_11)++;
   else
   {
    (*VAR_10)++;
    if ((VAR_20->vacuumFlags & VAR_3) &&
     VAR_15 < 10)
     VAR_13[VAR_15++] = VAR_19->pid;
   }
  }

  FUNC_2(VAR_4);

  if (!VAR_16)
   return 0;







  for (VAR_17 = 0; VAR_17 < VAR_15; VAR_17++)
   (void) FUNC_3(VAR_13[VAR_17], VAR_5);


  FUNC_4(100 * 1000L);
 }

 return 1;
}
