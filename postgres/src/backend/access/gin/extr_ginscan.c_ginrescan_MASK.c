
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numberOfKeys; int keyData; int opaque; } ;
typedef int ScanKeyData ;
typedef scalar_t__ ScanKey ;
typedef TYPE_1__* IndexScanDesc ;
typedef int GinScanOpaque ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__,int) ;

void
FUNC_2(IndexScanDesc VAR_0, ScanKey VAR_1, int VAR_2,
    ScanKey VAR_3, int VAR_4)
{
 GinScanOpaque VAR_5 = (GinScanOpaque) VAR_0->opaque;

 FUNC_0(VAR_5);

 if (VAR_1 && VAR_0->numberOfKeys > 0)
 {
  FUNC_1(VAR_0->keyData, VAR_1,
    VAR_0->numberOfKeys * sizeof(ScanKeyData));
 }
}
