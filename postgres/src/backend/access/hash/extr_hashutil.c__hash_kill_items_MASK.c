
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ buf; int firstItem; int lastItem; TYPE_3__* items; int currPage; } ;
struct TYPE_13__ {int hasho_flag; } ;
struct TYPE_12__ {int numKilled; int* killedItems; scalar_t__ hashso_bucket_buf; TYPE_7__ currPos; } ;
struct TYPE_11__ {int heapTid; int indexOffset; } ;
struct TYPE_10__ {int indexRelation; int opaque; } ;
struct TYPE_9__ {int t_tid; } ;
typedef int Relation ;
typedef int Page ;
typedef int OffsetNumber ;
typedef int ItemId ;
typedef TYPE_1__* IndexTuple ;
typedef TYPE_2__* IndexScanDesc ;
typedef TYPE_3__ HashScanPosItem ;
typedef TYPE_4__* HashScanOpaque ;
typedef TYPE_5__* HashPageOpaque ;
typedef scalar_t__ Buffer ;
typedef int BlockNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_7__) ;
 int FUNC_3 (TYPE_7__) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (scalar_t__,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ,int ,int ,int ) ;
 int FUNC_14 (int ,scalar_t__) ;

void
FUNC_15(IndexScanDesc VAR_5)
{
 HashScanOpaque VAR_6 = (HashScanOpaque) VAR_5->opaque;
 Relation VAR_7 = VAR_5->indexRelation;
 BlockNumber VAR_8;
 Buffer VAR_9;
 Page VAR_10;
 HashPageOpaque VAR_11;
 OffsetNumber VAR_12,
    VAR_13;
 int VAR_14 = VAR_6->numKilled;
 int VAR_15;
 bool VAR_16 = 0;
 bool VAR_17 = 0;

 FUNC_0(VAR_6->numKilled > 0);
 FUNC_0(VAR_6->killedItems != ((void*)0));
 FUNC_0(FUNC_3(VAR_6->currPos));





 VAR_6->numKilled = 0;

 VAR_8 = VAR_6->currPos.currPage;
 if (FUNC_2(VAR_6->currPos))
 {




  VAR_17 = 1;
  VAR_9 = VAR_6->currPos.buf;
  FUNC_6(VAR_9, VAR_0);
 }
 else
  VAR_9 = FUNC_13(VAR_7, VAR_8, VAR_2, VAR_3);

 VAR_10 = FUNC_1(VAR_9);
 VAR_11 = (HashPageOpaque) FUNC_12(VAR_10);
 VAR_13 = FUNC_11(VAR_10);

 for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++)
 {
  int VAR_18 = VAR_6->killedItems[VAR_15];
  HashScanPosItem *VAR_19 = &VAR_6->currPos.items[VAR_18];

  VAR_12 = VAR_19->indexOffset;

  FUNC_0(VAR_18 >= VAR_6->currPos.firstItem &&
      VAR_18 <= VAR_6->currPos.lastItem);

  while (VAR_12 <= VAR_13)
  {
   ItemId VAR_20 = FUNC_10(VAR_10, VAR_12);
   IndexTuple VAR_21 = (IndexTuple) FUNC_9(VAR_10, VAR_20);

   if (FUNC_5(&VAR_21->t_tid, &VAR_19->heapTid))
   {

    FUNC_4(VAR_20);
    VAR_16 = 1;
    break;
   }
   VAR_12 = FUNC_8(VAR_12);
  }
 }






 if (VAR_16)
 {
  VAR_11->hasho_flag |= VAR_4;
  FUNC_7(VAR_9, 1);
 }

 if (VAR_6->hashso_bucket_buf == VAR_6->currPos.buf ||
  VAR_17)
  FUNC_6(VAR_6->currPos.buf, VAR_1);
 else
  FUNC_14(VAR_7, VAR_9);
}
