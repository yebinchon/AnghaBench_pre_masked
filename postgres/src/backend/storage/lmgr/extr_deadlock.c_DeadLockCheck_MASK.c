
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int nProcs; TYPE_2__** procs; TYPE_3__* lock; } ;
struct TYPE_12__ {int size; int links; } ;
struct TYPE_14__ {TYPE_1__ waitProcs; } ;
struct TYPE_13__ {int links; } ;
typedef TYPE_1__ PROC_QUEUE ;
typedef TYPE_2__ PGPROC ;
typedef TYPE_3__ LOCK ;
typedef int DeadLockState ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_2__*,int ,int*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,char*) ;
 int FUNC_5 (int ,TYPE_3__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 () ;
 int * VAR_5 ;
 int FUNC_9 (int ,char*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_4__* VAR_10 ;

DeadLockState
FUNC_10(PGPROC *VAR_11)
{
 int VAR_12,
    VAR_13;


 VAR_6 = 0;
 VAR_7 = 0;
 VAR_8 = 0;


 VAR_5 = ((void*)0);


 if (FUNC_1(VAR_11))
 {




  int VAR_14;

  FUNC_8();

  VAR_8 = 0;
  if (!FUNC_2(VAR_11, VAR_9, &VAR_14))
   FUNC_9(VAR_4, "deadlock seems to have disappeared");

  return VAR_1;
 }


 for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++)
 {
  LOCK *VAR_15 = VAR_10[VAR_12].lock;
  PGPROC **VAR_16 = VAR_10[VAR_12].procs;
  int VAR_17 = VAR_10[VAR_12].nProcs;
  PROC_QUEUE *VAR_18 = &(VAR_15->waitProcs);

  FUNC_0(VAR_17 == VAR_18->size);






  FUNC_6(VAR_18);
  for (VAR_13 = 0; VAR_13 < VAR_17; VAR_13++)
  {
   FUNC_7(&(VAR_18->links), &(VAR_16[VAR_13]->links));
   VAR_18->size++;
  }






  FUNC_5(FUNC_3(VAR_15), VAR_15);
 }


 if (VAR_8 > 0)
  return VAR_3;
 else if (VAR_5 != ((void*)0))
  return VAR_0;
 else
  return VAR_2;
}
