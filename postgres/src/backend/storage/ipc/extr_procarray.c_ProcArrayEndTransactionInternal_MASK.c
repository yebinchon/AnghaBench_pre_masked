
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_8__ {int latestCompletedXid; } ;
struct TYPE_7__ {int recoveryConflictPending; int lxid; } ;
struct TYPE_6__ {int delayChkpt; int overflowed; scalar_t__ nxids; int vacuumFlags; void* xmin; void* xid; } ;
typedef TYPE_1__ PGXACT ;
typedef TYPE_2__ PGPROC ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static inline void
FUNC_1(PGPROC *VAR_4, PGXACT *VAR_5,
        TransactionId VAR_6)
{
 VAR_5->xid = VAR_1;
 VAR_4->lxid = VAR_0;
 VAR_5->xmin = VAR_1;

 VAR_5->vacuumFlags &= ~VAR_2;
 VAR_5->delayChkpt = 0;
 VAR_4->recoveryConflictPending = 0;


 VAR_5->nxids = 0;
 VAR_5->overflowed = 0;


 if (FUNC_0(VAR_3->latestCompletedXid,
         VAR_6))
  VAR_3->latestCompletedXid = VAR_6;
}
