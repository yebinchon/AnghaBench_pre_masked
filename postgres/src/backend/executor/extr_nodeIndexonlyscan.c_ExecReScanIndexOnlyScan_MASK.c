
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ioss_NumRuntimeKeys; int ioss_RuntimeKeysReady; int ss; int ioss_NumOrderByKeys; int ioss_OrderByKeys; int ioss_NumScanKeys; int ioss_ScanKeys; scalar_t__ ioss_ScanDesc; int ioss_RuntimeKeys; int * ioss_RuntimeContext; } ;
typedef TYPE_1__ IndexOnlyScanState ;
typedef int ExprContext ;


 int FUNC_0 (int *,int ,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__,int ,int ,int ,int ) ;

void
FUNC_4(IndexOnlyScanState *VAR_0)
{







 if (VAR_0->ioss_NumRuntimeKeys != 0)
 {
  ExprContext *VAR_1 = VAR_0->ioss_RuntimeContext;

  FUNC_2(VAR_1);
  FUNC_0(VAR_1,
         VAR_0->ioss_RuntimeKeys,
         VAR_0->ioss_NumRuntimeKeys);
 }
 VAR_0->ioss_RuntimeKeysReady = 1;


 if (VAR_0->ioss_ScanDesc)
  FUNC_3(VAR_0->ioss_ScanDesc,
      VAR_0->ioss_ScanKeys, VAR_0->ioss_NumScanKeys,
      VAR_0->ioss_OrderByKeys, VAR_0->ioss_NumOrderByKeys);

 FUNC_1(&VAR_0->ss);
}
