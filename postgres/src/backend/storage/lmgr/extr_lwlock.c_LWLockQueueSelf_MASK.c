
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int lwWaiting; int pgprocno; scalar_t__ lwWaitMode; } ;
struct TYPE_6__ {int nwaiters; int waiters; int state; } ;
typedef scalar_t__ LWLockMode ;
typedef TYPE_1__ LWLock ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,char*) ;
 int VAR_4 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,int ,int ) ;

__attribute__((used)) static void
FUNC_7(LWLock *VAR_5, LWLockMode VAR_6)
{





 if (VAR_2 == ((void*)0))
  FUNC_2(VAR_3, "cannot wait without a PGPROC structure");

 if (VAR_2->lwWaiting)
  FUNC_2(VAR_3, "queueing for lock while waiting on another one");

 FUNC_0(VAR_5);


 FUNC_4(&VAR_5->state, VAR_0);

 VAR_2->lwWaiting = 1;
 VAR_2->lwWaitMode = VAR_6;


 if (VAR_6 == VAR_1)
  FUNC_5(&VAR_5->waiters, VAR_2->pgprocno, VAR_4);
 else
  FUNC_6(&VAR_5->waiters, VAR_2->pgprocno, VAR_4);


 FUNC_1(VAR_5);





}
