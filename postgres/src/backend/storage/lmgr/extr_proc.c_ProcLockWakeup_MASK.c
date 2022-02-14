
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ next; } ;
struct TYPE_16__ {int size; TYPE_1__ links; } ;
struct TYPE_19__ {TYPE_3__ waitProcs; } ;
struct TYPE_18__ {int* conflictTab; } ;
struct TYPE_15__ {scalar_t__ next; } ;
struct TYPE_17__ {size_t waitLockMode; TYPE_2__ links; int waitProcLock; } ;
typedef TYPE_3__ PROC_QUEUE ;
typedef TYPE_4__ PGPROC ;
typedef TYPE_5__* LockMethod ;
typedef size_t LOCKMODE ;
typedef int LOCKMASK ;
typedef TYPE_6__ LOCK ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_6__*,int ,size_t) ;
 int FUNC_2 (size_t) ;
 scalar_t__ FUNC_3 (TYPE_5__*,size_t,TYPE_6__*,int ) ;
 TYPE_4__* FUNC_4 (TYPE_4__*,scalar_t__) ;
 scalar_t__ VAR_0 ;

void
FUNC_5(LockMethod VAR_1, LOCK *VAR_2)
{
 PROC_QUEUE *VAR_3 = &(VAR_2->waitProcs);
 int VAR_4 = VAR_3->size;
 PGPROC *VAR_5;
 LOCKMASK VAR_6 = 0;

 FUNC_0(VAR_4 >= 0);

 if (VAR_4 == 0)
  return;

 VAR_5 = (PGPROC *) VAR_3->links.next;

 while (VAR_4-- > 0)
 {
  LOCKMODE VAR_7 = VAR_5->waitLockMode;





  if ((VAR_1->conflictTab[VAR_7] & VAR_6) == 0 &&
   FUNC_3(VAR_1,
          VAR_7,
          VAR_2,
          VAR_5->waitProcLock) == VAR_0)
  {

   FUNC_1(VAR_2, VAR_5->waitProcLock, VAR_7);
   VAR_5 = FUNC_4(VAR_5, VAR_0);






  }
  else
  {



   VAR_6 |= FUNC_2(VAR_7);
   VAR_5 = (PGPROC *) VAR_5->links.next;
  }
 }

 FUNC_0(VAR_3->size >= 0);
}
