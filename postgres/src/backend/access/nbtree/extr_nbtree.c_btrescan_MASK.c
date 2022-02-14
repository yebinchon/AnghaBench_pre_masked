
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ numKilled; int markItemIndex; char* currTuples; char* markTuples; scalar_t__ numberOfKeys; int markPos; scalar_t__ arrayKeyCount; int currPos; } ;
struct TYPE_6__ {int numberOfKeys; int keyData; scalar_t__ xs_want_itup; int opaque; } ;
typedef int ScanKeyData ;
typedef int ScanKey ;
typedef TYPE_1__* IndexScanDesc ;
typedef TYPE_2__* BTScanOpaque ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,int ,int) ;
 scalar_t__ FUNC_6 (int) ;

void
FUNC_7(IndexScanDesc VAR_1, ScanKey VAR_2, int VAR_3,
   ScanKey VAR_4, int VAR_5)
{
 BTScanOpaque VAR_6 = (BTScanOpaque) VAR_1->opaque;


 if (FUNC_1(VAR_6->currPos))
 {

  if (VAR_6->numKilled > 0)
   FUNC_3(VAR_1);
  FUNC_2(VAR_6->currPos);
  FUNC_0(VAR_6->currPos);
 }

 VAR_6->markItemIndex = -1;
 VAR_6->arrayKeyCount = 0;
 FUNC_2(VAR_6->markPos);
 FUNC_0(VAR_6->markPos);
 if (VAR_1->xs_want_itup && VAR_6->currTuples == ((void*)0))
 {
  VAR_6->currTuples = (char *) FUNC_6(VAR_0 * 2);
  VAR_6->markTuples = VAR_6->currTuples + VAR_0;
 }





 if (VAR_2 && VAR_1->numberOfKeys > 0)
  FUNC_5(VAR_1->keyData,
    VAR_2,
    VAR_1->numberOfKeys * sizeof(ScanKeyData));
 VAR_6->numberOfKeys = 0;


 FUNC_4(VAR_1);
}
