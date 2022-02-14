
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_9__ {size_t pgprocno; int recoveryConflictPending; int lxid; } ;
struct TYPE_8__ {int delayChkpt; scalar_t__ nxids; int overflowed; int vacuumFlags; int xmin; int xid; } ;
typedef TYPE_1__ PGXACT ;
typedef TYPE_2__ PGPROC ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int VAR_4 ;
 int FUNC_5 (int ) ;
 TYPE_1__* VAR_5 ;

void
FUNC_6(PGPROC *VAR_6, TransactionId VAR_7)
{
 PGXACT *VAR_8 = &VAR_5[VAR_6->pgprocno];

 if (FUNC_5(VAR_7))
 {






  FUNC_0(FUNC_5(VAR_5[VAR_6->pgprocno].xid));






  if (FUNC_1(VAR_4, VAR_2))
  {
   FUNC_3(VAR_6, VAR_8, VAR_7);
   FUNC_2(VAR_4);
  }
  else
   FUNC_4(VAR_6, VAR_7);
 }
 else
 {





  FUNC_0(!FUNC_5(VAR_5[VAR_6->pgprocno].xid));

  VAR_6->lxid = VAR_0;
  VAR_8->xmin = VAR_1;

  VAR_8->vacuumFlags &= ~VAR_3;
  VAR_8->delayChkpt = 0;
  VAR_6->recoveryConflictPending = 0;

  FUNC_0(VAR_8->nxids == 0);
  FUNC_0(VAR_8->overflowed == 0);
 }
}
