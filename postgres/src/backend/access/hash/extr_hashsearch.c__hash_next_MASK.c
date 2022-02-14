
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ itemIndex; scalar_t__ lastItem; scalar_t__ firstItem; TYPE_2__* items; int prevPage; int nextPage; } ;
struct TYPE_11__ {scalar_t__ numKilled; scalar_t__ hashso_bucket_buf; scalar_t__ hashso_split_bucket_buf; TYPE_8__ currPos; } ;
struct TYPE_10__ {int heapTid; } ;
struct TYPE_9__ {int xs_heaptid; int xs_snapshot; int opaque; int indexRelation; } ;
typedef int ScanDirection ;
typedef int Relation ;
typedef TYPE_1__* IndexScanDesc ;
typedef TYPE_2__ HashScanPosItem ;
typedef TYPE_3__* HashScanOpaque ;
typedef scalar_t__ Buffer ;
typedef int BlockNumber ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_8__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int ,TYPE_3__*) ;
 scalar_t__ FUNC_7 (int ,int ,int ,int) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,scalar_t__*,int ) ;

bool
FUNC_10(IndexScanDesc VAR_3, ScanDirection VAR_4)
{
 Relation VAR_5 = VAR_3->indexRelation;
 HashScanOpaque VAR_6 = (HashScanOpaque) VAR_3->opaque;
 HashScanPosItem *VAR_7;
 BlockNumber VAR_8;
 Buffer VAR_9;
 bool VAR_10 = 0;







 if (FUNC_3(VAR_4))
 {
  if (++VAR_6->currPos.itemIndex > VAR_6->currPos.lastItem)
  {
   if (VAR_6->numKilled > 0)
    FUNC_8(VAR_3);

   VAR_8 = VAR_6->currPos.nextPage;
   if (FUNC_0(VAR_8))
   {
    VAR_9 = FUNC_7(VAR_5, VAR_8, VAR_0, VAR_2);
    FUNC_4(VAR_3->xs_snapshot, VAR_5, FUNC_1(VAR_9));
    if (!FUNC_9(VAR_3, &VAR_9, VAR_4))
     VAR_10 = 1;
   }
   else
    VAR_10 = 1;
  }
 }
 else
 {
  if (--VAR_6->currPos.itemIndex < VAR_6->currPos.firstItem)
  {
   if (VAR_6->numKilled > 0)
    FUNC_8(VAR_3);

   VAR_8 = VAR_6->currPos.prevPage;
   if (FUNC_0(VAR_8))
   {
    VAR_9 = FUNC_7(VAR_5, VAR_8, VAR_0,
           VAR_1 | VAR_2);
    FUNC_4(VAR_3->xs_snapshot, VAR_5, FUNC_1(VAR_9));






    if (VAR_9 == VAR_6->hashso_bucket_buf ||
     VAR_9 == VAR_6->hashso_split_bucket_buf)
     FUNC_5(VAR_5, VAR_9);

    if (!FUNC_9(VAR_3, &VAR_9, VAR_4))
     VAR_10 = 1;
   }
   else
    VAR_10 = 1;
  }
 }

 if (VAR_10)
 {
  FUNC_6(VAR_5, VAR_6);
  FUNC_2(VAR_6->currPos);
  return 0;
 }


 VAR_7 = &VAR_6->currPos.items[VAR_6->currPos.itemIndex];
 VAR_3->xs_heaptid = VAR_7->heapTid;

 return 1;
}
