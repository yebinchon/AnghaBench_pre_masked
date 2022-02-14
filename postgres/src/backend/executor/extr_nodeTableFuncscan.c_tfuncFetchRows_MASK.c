
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_19__ {TYPE_2__* ss_ScanTupleSlot; } ;
struct TYPE_20__ {int ordinal; int perTableCxt; int * opaque; int docexpr; TYPE_3__ ss; int tupstore; TYPE_5__* routine; } ;
typedef TYPE_4__ TableFuncScanState ;
struct TYPE_21__ {int (* DestroyOpaque ) (TYPE_4__*) ;int (* InitOpaque ) (TYPE_4__*,int ) ;} ;
typedef TYPE_5__ TableFuncRoutine ;
struct TYPE_22__ {int ecxt_per_query_memory; } ;
struct TYPE_18__ {TYPE_1__* tts_tupleDescriptor; } ;
struct TYPE_17__ {int natts; } ;
typedef int MemoryContext ;
typedef TYPE_6__ ExprContext ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_6__*,int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_4__*,int ) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_4__*,TYPE_6__*,int ) ;
 int FUNC_12 (TYPE_4__*,TYPE_6__*) ;
 int FUNC_13 (int,int,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_14(TableFuncScanState *VAR_1, ExprContext *VAR_2)
{
 const TableFuncRoutine *VAR_3 = VAR_1->routine;
 MemoryContext VAR_4;
 Datum VAR_5;
 bool VAR_6;

 FUNC_0(VAR_1->opaque == ((void*)0));


 VAR_4 = FUNC_3(VAR_2->ecxt_per_query_memory);
 VAR_1->tupstore = FUNC_13(0, 0, VAR_0);
 FUNC_3(VAR_1->perTableCxt);

 FUNC_7();
 {
  VAR_3->InitOpaque(VAR_1,
       VAR_1->ss.ss_ScanTupleSlot->tts_tupleDescriptor->natts);





  VAR_5 = FUNC_1(VAR_1->docexpr, VAR_2, &VAR_6);

  if (!VAR_6)
  {

   FUNC_11(VAR_1, VAR_2, VAR_5);


   VAR_1->ordinal = 1;


   FUNC_12(VAR_1, VAR_2);
  }
 }
 FUNC_4();
 {
  if (VAR_1->opaque != ((void*)0))
   VAR_3->DestroyOpaque(VAR_1);
  FUNC_6();
 }
 FUNC_5();



 if (VAR_1->opaque != ((void*)0))
 {
  VAR_3->DestroyOpaque(VAR_1);
  VAR_1->opaque = ((void*)0);
 }

 FUNC_3(VAR_4);
 FUNC_2(VAR_1->perTableCxt);

 return;
}
