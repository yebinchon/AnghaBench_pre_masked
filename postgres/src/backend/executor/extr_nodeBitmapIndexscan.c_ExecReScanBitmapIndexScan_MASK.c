
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int biss_RuntimeKeysReady; int biss_NumScanKeys; int biss_ScanKeys; int biss_ScanDesc; int biss_NumArrayKeys; int biss_ArrayKeys; int biss_NumRuntimeKeys; int biss_RuntimeKeys; int * biss_RuntimeContext; } ;
typedef int ExprContext ;
typedef TYPE_1__ BitmapIndexScanState ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ,int *,int ) ;

void
FUNC_4(BitmapIndexScanState *VAR_0)
{
 ExprContext *VAR_1 = VAR_0->biss_RuntimeContext;






 if (VAR_1)
  FUNC_2(VAR_1);
 if (VAR_0->biss_NumRuntimeKeys != 0)
  FUNC_1(VAR_1,
         VAR_0->biss_RuntimeKeys,
         VAR_0->biss_NumRuntimeKeys);
 if (VAR_0->biss_NumArrayKeys != 0)
  VAR_0->biss_RuntimeKeysReady =
   FUNC_0(VAR_1,
           VAR_0->biss_ArrayKeys,
           VAR_0->biss_NumArrayKeys);
 else
  VAR_0->biss_RuntimeKeysReady = 1;


 if (VAR_0->biss_RuntimeKeysReady)
  FUNC_3(VAR_0->biss_ScanDesc,
      VAR_0->biss_ScanKeys, VAR_0->biss_NumScanKeys,
      ((void*)0), 0);
}
