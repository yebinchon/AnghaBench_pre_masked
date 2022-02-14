
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ iss_NumRuntimeKeys; int iss_RuntimeKeysReady; int iss_ReachedEnd; int ss; int iss_NumOrderByKeys; int iss_OrderByKeys; int iss_NumScanKeys; int iss_ScanKeys; scalar_t__ iss_ScanDesc; scalar_t__ iss_ReorderQueue; int iss_RuntimeKeys; int * iss_RuntimeContext; } ;
typedef TYPE_1__ IndexScanState ;
typedef int ExprContext ;


 int FUNC_0 (int *,int ,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__,int ,int ,int ,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_1__*) ;

void
FUNC_6(IndexScanState *VAR_0)
{







 if (VAR_0->iss_NumRuntimeKeys != 0)
 {
  ExprContext *VAR_1 = VAR_0->iss_RuntimeContext;

  FUNC_2(VAR_1);
  FUNC_0(VAR_1,
         VAR_0->iss_RuntimeKeys,
         VAR_0->iss_NumRuntimeKeys);
 }
 VAR_0->iss_RuntimeKeysReady = 1;


 if (VAR_0->iss_ReorderQueue)
 {
  while (!FUNC_4(VAR_0->iss_ReorderQueue))
   FUNC_5(VAR_0);
 }


 if (VAR_0->iss_ScanDesc)
  FUNC_3(VAR_0->iss_ScanDesc,
      VAR_0->iss_ScanKeys, VAR_0->iss_NumScanKeys,
      VAR_0->iss_OrderByKeys, VAR_0->iss_NumOrderByKeys);
 VAR_0->iss_ReachedEnd = 0;

 FUNC_1(&VAR_0->ss);
}
