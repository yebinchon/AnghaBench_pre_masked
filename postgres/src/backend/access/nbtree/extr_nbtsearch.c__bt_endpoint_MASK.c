
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {size_t itemIndex; TYPE_2__* items; int buf; } ;
struct TYPE_13__ {scalar_t__ currTuples; TYPE_9__ currPos; } ;
struct TYPE_12__ {scalar_t__ tupleOffset; int heapTid; } ;
struct TYPE_11__ {scalar_t__ xs_itup; scalar_t__ xs_want_itup; int xs_heaptid; int xs_snapshot; int opaque; int indexRelation; } ;
typedef scalar_t__ ScanDirection ;
typedef int Relation ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef scalar_t__ IndexTuple ;
typedef TYPE_1__* IndexScanDesc ;
typedef int Buffer ;
typedef TYPE_2__ BTScanPosItem ;
typedef TYPE_3__* BTScanOpaque ;
typedef scalar_t__ BTPageOpaque ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_9__) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ,int ) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 int FUNC_15 (TYPE_1__*,TYPE_9__*) ;
 int FUNC_16 (int ,int ,scalar_t__,int ) ;
 int FUNC_17 (TYPE_3__*,scalar_t__) ;
 int FUNC_18 (TYPE_1__*,scalar_t__,scalar_t__) ;
 int FUNC_19 (TYPE_1__*,scalar_t__) ;
 int FUNC_20 (int ,char*,int) ;

__attribute__((used)) static bool
FUNC_21(IndexScanDesc VAR_2, ScanDirection VAR_3)
{
 Relation VAR_4 = VAR_2->indexRelation;
 BTScanOpaque VAR_5 = (BTScanOpaque) VAR_2->opaque;
 Buffer VAR_6;
 Page VAR_7;
 BTPageOpaque VAR_8;
 OffsetNumber VAR_9;
 BTScanPosItem *VAR_10;






 VAR_6 = FUNC_16(VAR_4, 0, FUNC_13(VAR_3), VAR_2->xs_snapshot);

 if (!FUNC_4(VAR_6))
 {




  FUNC_12(VAR_4, VAR_2->xs_snapshot);
  FUNC_1(VAR_5->currPos);
  return 0;
 }

 FUNC_11(VAR_4, FUNC_2(VAR_6), VAR_2->xs_snapshot);
 VAR_7 = FUNC_3(VAR_6);
 VAR_8 = (BTPageOpaque) FUNC_10(VAR_7);
 FUNC_0(FUNC_7(VAR_8));

 if (FUNC_14(VAR_3))
 {



  VAR_9 = FUNC_6(VAR_8);
 }
 else if (FUNC_13(VAR_3))
 {
  FUNC_0(FUNC_8(VAR_8));

  VAR_9 = FUNC_9(VAR_7);
 }
 else
 {
  FUNC_20(VAR_1, "invalid scan direction: %d", (int) VAR_3);
  VAR_9 = 0;
 }


 VAR_5->currPos.buf = VAR_6;

 FUNC_17(VAR_5, VAR_3);




 if (!FUNC_18(VAR_2, VAR_3, VAR_9))
 {




  FUNC_5(VAR_5->currPos.buf, VAR_0);
  if (!FUNC_19(VAR_2, VAR_3))
   return 0;
 }
 else
 {

  FUNC_15(VAR_2, &VAR_5->currPos);
 }


 VAR_10 = &VAR_5->currPos.items[VAR_5->currPos.itemIndex];
 VAR_2->xs_heaptid = VAR_10->heapTid;
 if (VAR_2->xs_want_itup)
  VAR_2->xs_itup = (IndexTuple) (VAR_5->currTuples + VAR_10->tupleOffset);

 return 1;
}
