
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_11__ {TYPE_3__* allPgXact; } ;
struct TYPE_10__ {size_t pgprocno; } ;
struct TYPE_9__ {int xmin; int xid; } ;
struct TYPE_8__ {TYPE_4__* proc; } ;
struct TYPE_7__ {int lastBackend; TYPE_2__* procState; } ;
typedef TYPE_1__ SISeg ;
typedef TYPE_2__ ProcState ;
typedef TYPE_3__ PGXACT ;
typedef TYPE_4__ PGPROC ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 TYPE_6__* VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;

void
FUNC_2(int VAR_5, TransactionId *VAR_6, TransactionId *VAR_7)
{
 SISeg *VAR_8 = VAR_4;

 *VAR_6 = VAR_0;
 *VAR_7 = VAR_0;


 FUNC_0(VAR_3, VAR_1);

 if (VAR_5 > 0 && VAR_5 <= VAR_8->lastBackend)
 {
  ProcState *VAR_9 = &VAR_8->procState[VAR_5 - 1];
  PGPROC *VAR_10 = VAR_9->proc;

  if (VAR_10 != ((void*)0))
  {
   PGXACT *VAR_11 = &VAR_2->allPgXact[VAR_10->pgprocno];

   *VAR_6 = VAR_11->xid;
   *VAR_7 = VAR_11->xmin;
  }
 }

 FUNC_1(VAR_3);
}
