
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {int * relsubs_done; int ** relsubs_rowmark; int ** relsubs_slot; } ;
struct TYPE_12__ {TYPE_6__* es_epq_active; } ;
struct TYPE_8__ {scalar_t__ plan; TYPE_5__* state; } ;
struct TYPE_9__ {TYPE_1__ ps; } ;
struct TYPE_11__ {int iss_ScanDesc; TYPE_2__ ss; } ;
struct TYPE_10__ {int scanrelid; } ;
typedef TYPE_3__ Scan ;
typedef TYPE_4__ IndexScanState ;
typedef int Index ;
typedef TYPE_5__ EState ;
typedef TYPE_6__ EPQState ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;

void
FUNC_3(IndexScanState *VAR_1)
{
 EState *VAR_2 = VAR_1->ss.ps.state;
 EPQState *VAR_3 = VAR_2->es_epq_active;

 if (VAR_3 != ((void*)0))
 {
  Index VAR_4 = ((Scan *) VAR_1->ss.ps.plan)->scanrelid;

  FUNC_0(VAR_4 > 0);
  if (VAR_3->relsubs_slot[VAR_4 - 1] != ((void*)0) ||
   VAR_3->relsubs_rowmark[VAR_4 - 1] != ((void*)0))
  {

   if (!VAR_3->relsubs_done[VAR_4 - 1])
    FUNC_1(VAR_0, "unexpected ExecIndexMarkPos call in EPQ recheck");
   return;
  }
 }

 FUNC_2(VAR_1->iss_ScanDesc);
}
