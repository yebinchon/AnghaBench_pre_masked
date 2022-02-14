
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t pgprocno; int recoveryConflictPending; int lxid; } ;
struct TYPE_5__ {int delayChkpt; int overflowed; scalar_t__ nxids; int vacuumFlags; void* xmin; void* xid; } ;
typedef TYPE_1__ PGXACT ;
typedef TYPE_2__ PGPROC ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

void
FUNC_0(PGPROC *VAR_4)
{
 PGXACT *VAR_5 = &VAR_3[VAR_4->pgprocno];







 VAR_5->xid = VAR_1;
 VAR_4->lxid = VAR_0;
 VAR_5->xmin = VAR_1;
 VAR_4->recoveryConflictPending = 0;


 VAR_5->vacuumFlags &= ~VAR_2;
 VAR_5->delayChkpt = 0;


 VAR_5->nxids = 0;
 VAR_5->overflowed = 0;
}
