
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_11__ {TYPE_2__* allPgXact; TYPE_3__* allProcs; } ;
struct TYPE_10__ {size_t pgprocno; } ;
struct TYPE_7__ {int xids; } ;
struct TYPE_9__ {TYPE_1__ subxids; } ;
struct TYPE_8__ {int overflowed; int nxids; } ;
typedef TYPE_2__ PGXACT ;
typedef TYPE_3__ PGPROC ;
typedef TYPE_4__* GlobalTransaction ;


 int VAR_0 ;
 TYPE_5__* VAR_1 ;
 int FUNC_0 (int ,int *,int) ;

__attribute__((used)) static void
FUNC_1(GlobalTransaction VAR_2, int VAR_3,
      TransactionId *VAR_4)
{
 PGPROC *VAR_5 = &VAR_1->allProcs[VAR_2->pgprocno];
 PGXACT *VAR_6 = &VAR_1->allPgXact[VAR_2->pgprocno];


 if (VAR_3 > VAR_0)
 {
  VAR_6->overflowed = 1;
  VAR_3 = VAR_0;
 }
 if (VAR_3 > 0)
 {
  FUNC_0(VAR_5->subxids.xids, VAR_4,
      VAR_3 * sizeof(TransactionId));
  VAR_6->nxids = VAR_3;
 }
}
