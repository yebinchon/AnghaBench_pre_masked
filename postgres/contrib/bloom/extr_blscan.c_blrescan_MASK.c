
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * sign; } ;
struct TYPE_4__ {int numberOfKeys; int keyData; int opaque; } ;
typedef int ScanKeyData ;
typedef scalar_t__ ScanKey ;
typedef TYPE_1__* IndexScanDesc ;
typedef TYPE_2__* BloomScanOpaque ;


 int FUNC_0 (int ,scalar_t__,int) ;
 int FUNC_1 (int *) ;

void
FUNC_2(IndexScanDesc VAR_0, ScanKey VAR_1, int VAR_2,
   ScanKey VAR_3, int VAR_4)
{
 BloomScanOpaque VAR_5 = (BloomScanOpaque) VAR_0->opaque;

 if (VAR_5->sign)
  FUNC_1(VAR_5->sign);
 VAR_5->sign = ((void*)0);

 if (VAR_1 && VAR_0->numberOfKeys > 0)
 {
  FUNC_0(VAR_0->keyData, VAR_1,
    VAR_0->numberOfKeys * sizeof(ScanKeyData));
 }
}
