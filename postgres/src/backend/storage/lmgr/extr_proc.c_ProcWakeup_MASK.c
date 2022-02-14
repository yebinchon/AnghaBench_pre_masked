
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int * next; int * prev; } ;
struct TYPE_9__ {int waitStatus; int procLatch; int * waitProcLock; TYPE_2__* waitLock; TYPE_4__ links; } ;
struct TYPE_7__ {int size; } ;
struct TYPE_8__ {TYPE_1__ waitProcs; } ;
typedef TYPE_3__ PGPROC ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;

PGPROC *
FUNC_3(PGPROC *VAR_1, int VAR_2)
{
 PGPROC *VAR_3;


 if (VAR_1->links.prev == ((void*)0) ||
  VAR_1->links.next == ((void*)0))
  return ((void*)0);
 FUNC_0(VAR_1->waitStatus == VAR_0);


 VAR_3 = (PGPROC *) VAR_1->links.next;


 FUNC_1(&(VAR_1->links));
 (VAR_1->waitLock->waitProcs.size)--;


 VAR_1->waitLock = ((void*)0);
 VAR_1->waitProcLock = ((void*)0);
 VAR_1->waitStatus = VAR_2;


 FUNC_2(&VAR_1->procLatch);

 return VAR_3;
}
