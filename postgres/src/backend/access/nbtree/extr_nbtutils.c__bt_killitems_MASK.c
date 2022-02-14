
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ lsn; int firstItem; int lastItem; int buf; TYPE_3__* items; int currPage; } ;
struct TYPE_14__ {int btpo_flags; } ;
struct TYPE_13__ {int numKilled; int* killedItems; TYPE_8__ currPos; } ;
struct TYPE_12__ {scalar_t__ indexOffset; int heapTid; } ;
struct TYPE_11__ {int indexRelation; int opaque; } ;
struct TYPE_10__ {int t_tid; } ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef int ItemId ;
typedef TYPE_1__* IndexTuple ;
typedef TYPE_2__* IndexScanDesc ;
typedef int Buffer ;
typedef TYPE_3__ BTScanPosItem ;
typedef TYPE_4__* BTScanOpaque ;
typedef TYPE_5__* BTPageOpaque ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_8__) ;
 int FUNC_2 (TYPE_8__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (TYPE_5__*) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,scalar_t__) ;
 scalar_t__ FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int ,int ,int ) ;
 int FUNC_17 (int ,int ) ;

void
FUNC_18(IndexScanDesc VAR_3)
{
 BTScanOpaque VAR_4 = (BTScanOpaque) VAR_3->opaque;
 Page VAR_5;
 BTPageOpaque VAR_6;
 OffsetNumber VAR_7;
 OffsetNumber VAR_8;
 int VAR_9;
 int VAR_10 = VAR_4->numKilled;
 bool VAR_11 = 0;

 FUNC_0(FUNC_2(VAR_4->currPos));





 VAR_4->numKilled = 0;

 if (FUNC_1(VAR_4->currPos))
 {






  FUNC_8(VAR_4->currPos.buf, VAR_1);

  VAR_5 = FUNC_4(VAR_4->currPos.buf);
 }
 else
 {
  Buffer VAR_12;


  VAR_12 = FUNC_16(VAR_3->indexRelation, VAR_4->currPos.currPage, VAR_1);


  if (!FUNC_5(VAR_12))
   return;

  VAR_5 = FUNC_4(VAR_12);
  if (FUNC_3(VAR_12) == VAR_4->currPos.lsn)
   VAR_4->currPos.buf = VAR_12;
  else
  {

   FUNC_17(VAR_3->indexRelation, VAR_12);
   return;
  }
 }

 VAR_6 = (BTPageOpaque) FUNC_15(VAR_5);
 VAR_7 = FUNC_11(VAR_6);
 VAR_8 = FUNC_14(VAR_5);

 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++)
 {
  int VAR_13 = VAR_4->killedItems[VAR_9];
  BTScanPosItem *VAR_14 = &VAR_4->currPos.items[VAR_13];
  OffsetNumber VAR_15 = VAR_14->indexOffset;

  FUNC_0(VAR_13 >= VAR_4->currPos.firstItem &&
      VAR_13 <= VAR_4->currPos.lastItem);
  if (VAR_15 < VAR_7)
   continue;
  while (VAR_15 <= VAR_8)
  {
   ItemId VAR_16 = FUNC_13(VAR_5, VAR_15);
   IndexTuple VAR_17 = (IndexTuple) FUNC_12(VAR_5, VAR_16);

   if (FUNC_7(&VAR_17->t_tid, &VAR_14->heapTid))
   {

    FUNC_6(VAR_16);
    VAR_11 = 1;
    break;
   }
   VAR_15 = FUNC_10(VAR_15);
  }
 }







 if (VAR_11)
 {
  VAR_6->btpo_flags |= VAR_0;
  FUNC_9(VAR_4->currPos.buf, 1);
 }

 FUNC_8(VAR_4->currPos.buf, VAR_2);
}
