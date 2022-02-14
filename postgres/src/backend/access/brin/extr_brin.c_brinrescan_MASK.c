
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numberOfKeys; int keyData; } ;
typedef int ScanKeyData ;
typedef scalar_t__ ScanKey ;
typedef TYPE_1__* IndexScanDesc ;


 int FUNC_0 (int ,scalar_t__,int) ;

void
FUNC_1(IndexScanDesc VAR_0, ScanKey VAR_1, int VAR_2,
     ScanKey VAR_3, int VAR_4)
{
 if (VAR_1 && VAR_0->numberOfKeys > 0)
  FUNC_0(VAR_0->keyData, VAR_1,
    VAR_0->numberOfKeys * sizeof(ScanKeyData));
}
