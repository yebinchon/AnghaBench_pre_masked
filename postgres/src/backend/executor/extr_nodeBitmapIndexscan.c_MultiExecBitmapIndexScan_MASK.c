
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ isshared; } ;
struct TYPE_8__ {scalar_t__ instrument; TYPE_1__* state; scalar_t__ plan; } ;
struct TYPE_9__ {TYPE_2__ ps; } ;
struct TYPE_10__ {int biss_RuntimeKeysReady; scalar_t__ biss_NumRuntimeKeys; scalar_t__ biss_NumArrayKeys; TYPE_3__ ss; int biss_NumScanKeys; int biss_ScanKeys; int biss_ScanDesc; int biss_ArrayKeys; int * biss_result; } ;
struct TYPE_7__ {int * es_query_dsa; } ;
typedef int TIDBitmap ;
typedef int PlanState ;
typedef int Node ;
typedef int IndexScanDesc ;
typedef TYPE_4__ BitmapIndexScanState ;
typedef TYPE_5__ BitmapIndexScan ;


 int FUNC_0 () ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,double) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int ,int ,int *,int ) ;
 int * FUNC_7 (long,int *) ;
 long VAR_0 ;

Node *
FUNC_8(BitmapIndexScanState *VAR_1)
{
 TIDBitmap *VAR_2;
 IndexScanDesc VAR_3;
 double VAR_4 = 0;
 bool VAR_5;


 if (VAR_1->ss.ps.instrument)
  FUNC_3(VAR_1->ss.ps.instrument);




 VAR_3 = VAR_1->biss_ScanDesc;







 if (!VAR_1->biss_RuntimeKeysReady &&
  (VAR_1->biss_NumRuntimeKeys != 0 || VAR_1->biss_NumArrayKeys != 0))
 {
  FUNC_2((PlanState *) VAR_1);
  VAR_5 = VAR_1->biss_RuntimeKeysReady;
 }
 else
  VAR_5 = 1;







 if (VAR_1->biss_result)
 {
  VAR_2 = VAR_1->biss_result;
  VAR_1->biss_result = ((void*)0);
 }
 else
 {

  VAR_2 = FUNC_7(VAR_0 * 1024L,
       ((BitmapIndexScan *) VAR_1->ss.ps.plan)->isshared ?
       VAR_1->ss.ps.state->es_query_dsa : ((void*)0));
 }




 while (VAR_5)
 {
  VAR_4 += (double) FUNC_5(VAR_3, VAR_2);

  FUNC_0();

  VAR_5 = FUNC_1(VAR_1->biss_ArrayKeys,
             VAR_1->biss_NumArrayKeys);
  if (VAR_5)
   FUNC_6(VAR_1->biss_ScanDesc,
       VAR_1->biss_ScanKeys, VAR_1->biss_NumScanKeys,
       ((void*)0), 0);
 }


 if (VAR_1->ss.ps.instrument)
  FUNC_4(VAR_1->ss.ps.instrument, VAR_4);

 return (Node *) VAR_2;
}
