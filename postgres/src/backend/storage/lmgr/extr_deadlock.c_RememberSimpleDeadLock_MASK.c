
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int pid; int lockmode; int locktag; } ;
struct TYPE_11__ {int tag; } ;
struct TYPE_10__ {int pid; int waitLockMode; TYPE_1__* waitLock; } ;
struct TYPE_9__ {int tag; } ;
typedef TYPE_2__ PGPROC ;
typedef int LOCKMODE ;
typedef TYPE_3__ LOCK ;
typedef TYPE_4__ DEADLOCK_INFO ;


 TYPE_4__* VAR_0 ;
 int VAR_1 ;

void
FUNC_0(PGPROC *VAR_2,
        LOCKMODE VAR_3,
        LOCK *VAR_4,
        PGPROC *VAR_5)
{
 DEADLOCK_INFO *VAR_6 = &VAR_0[0];

 VAR_6->locktag = VAR_4->tag;
 VAR_6->lockmode = VAR_3;
 VAR_6->pid = VAR_2->pid;
 VAR_6++;
 VAR_6->locktag = VAR_5->waitLock->tag;
 VAR_6->lockmode = VAR_5->waitLockMode;
 VAR_6->pid = VAR_5->pid;
 VAR_1 = 2;
}
