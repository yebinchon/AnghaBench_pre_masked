
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_20__ {int* relsubs_done; int ** relsubs_rowmark; int ** relsubs_slot; } ;
struct TYPE_19__ {TYPE_7__* es_epq_active; } ;
struct TYPE_18__ {int scanrelid; } ;
struct TYPE_16__ {scalar_t__ plan; TYPE_6__* state; } ;
struct TYPE_17__ {int * ss_ScanTupleSlot; TYPE_1__ ps; } ;
typedef TYPE_2__ ScanState ;
typedef TYPE_3__ Scan ;
typedef int Index ;
typedef int (* ExecScanRecheckMtd ) (TYPE_2__*,int *) ;
typedef int * (* ExecScanAccessMtd ) (TYPE_2__*) ;
typedef TYPE_6__ EState ;
typedef TYPE_7__ EPQState ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_7__*,int,int *) ;
 int * FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (TYPE_2__*,int *) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int * FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static inline TupleTableSlot *
FUNC_9(ScanState *VAR_0,
     ExecScanAccessMtd VAR_1,
     ExecScanRecheckMtd VAR_2)
{
 EState *VAR_3 = VAR_0->ps.state;

 FUNC_1();

 if (VAR_3->es_epq_active != ((void*)0))
 {
  EPQState *VAR_4 = VAR_3->es_epq_active;






  Index VAR_5 = ((Scan *) VAR_0->ps.plan)->scanrelid;

  if (VAR_5 == 0)
  {







   TupleTableSlot *VAR_6 = VAR_0->ss_ScanTupleSlot;

   if (!(*VAR_2) (VAR_0, VAR_6))
    FUNC_3(VAR_6);
   return VAR_6;
  }
  else if (VAR_4->relsubs_done[VAR_5 - 1])
  {





   TupleTableSlot *VAR_7 = VAR_0->ss_ScanTupleSlot;


   return FUNC_3(VAR_7);
  }
  else if (VAR_4->relsubs_slot[VAR_5 - 1] != ((void*)0))
  {




   TupleTableSlot *VAR_8 = VAR_4->relsubs_slot[VAR_5 - 1];

   FUNC_0(VAR_4->relsubs_rowmark[VAR_5 - 1] == ((void*)0));


   VAR_4->relsubs_done[VAR_5 - 1] = 1;


   if (FUNC_4(VAR_8))
    return ((void*)0);


   if (!(*VAR_2) (VAR_0, VAR_8))
    return FUNC_3(VAR_8);

   return VAR_8;
  }
  else if (VAR_4->relsubs_rowmark[VAR_5 - 1] != ((void*)0))
  {




   TupleTableSlot *VAR_9 = VAR_0->ss_ScanTupleSlot;


   VAR_4->relsubs_done[VAR_5 - 1] = 1;

   if (!FUNC_2(VAR_4, VAR_5, VAR_9))
    return ((void*)0);


   if (FUNC_4(VAR_9))
    return ((void*)0);


   if (!(*VAR_2) (VAR_0, VAR_9))
    return FUNC_3(VAR_9);

   return VAR_9;
  }
 }




 return (*VAR_1) (VAR_0);
}
