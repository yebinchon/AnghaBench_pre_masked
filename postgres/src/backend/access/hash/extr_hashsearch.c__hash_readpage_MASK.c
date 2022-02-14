
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ uint16 ;
struct TYPE_15__ {void* hasho_nextblkno; void* hasho_prevblkno; } ;
struct TYPE_12__ {scalar_t__ buf; scalar_t__ firstItem; scalar_t__ lastItem; void* nextPage; void* prevPage; scalar_t__ itemIndex; void* currPage; } ;
struct TYPE_14__ {scalar_t__ numKilled; scalar_t__ hashso_bucket_buf; scalar_t__ hashso_split_bucket_buf; TYPE_1__ currPos; int hashso_sk_hash; } ;
struct TYPE_13__ {int opaque; int indexRelation; } ;
typedef int ScanDirection ;
typedef int Relation ;
typedef int Page ;
typedef int OffsetNumber ;
typedef TYPE_2__* IndexScanDesc ;
typedef TYPE_3__* HashScanOpaque ;
typedef TYPE_4__* HashPageOpaque ;
typedef void* Buffer ;
typedef void* BlockNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 void* FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (scalar_t__,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,void*,int) ;
 int FUNC_10 (TYPE_2__*) ;
 scalar_t__ FUNC_11 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_12 (TYPE_2__*,void**,int *,TYPE_4__**) ;
 int FUNC_13 (TYPE_2__*,void**,int *,TYPE_4__**) ;
 int FUNC_14 (int ,scalar_t__) ;

__attribute__((used)) static bool
FUNC_15(IndexScanDesc VAR_6, Buffer *VAR_7, ScanDirection VAR_8)
{
 Relation VAR_9 = VAR_6->indexRelation;
 HashScanOpaque VAR_10 = (HashScanOpaque) VAR_6->opaque;
 Buffer VAR_11;
 Page VAR_12;
 HashPageOpaque VAR_13;
 OffsetNumber VAR_14;
 uint16 VAR_15;

 VAR_11 = *VAR_7;
 FUNC_0(FUNC_3(VAR_11));
 FUNC_9(VAR_9, VAR_11, VAR_3 | VAR_4);
 VAR_12 = FUNC_2(VAR_11);
 VAR_13 = (HashPageOpaque) FUNC_5(VAR_12);

 VAR_10->currPos.buf = VAR_11;
 VAR_10->currPos.currPage = FUNC_1(VAR_11);

 if (FUNC_6(VAR_8))
 {
  BlockNumber VAR_16 = VAR_1;

  for (;;)
  {

   VAR_14 = FUNC_7(VAR_12, VAR_10->hashso_sk_hash);

   VAR_15 = FUNC_11(VAR_6, VAR_12, VAR_14, VAR_8);

   if (VAR_15 != 0)
    break;






   if (VAR_10->numKilled > 0)
    FUNC_10(VAR_6);





   if (VAR_10->currPos.buf == VAR_10->hashso_bucket_buf ||
    VAR_10->currPos.buf == VAR_10->hashso_split_bucket_buf)
    VAR_16 = VAR_1;
   else
    VAR_16 = VAR_13->hasho_prevblkno;

   FUNC_12(VAR_6, &VAR_11, &VAR_12, &VAR_13);
   if (FUNC_3(VAR_11))
   {
    VAR_10->currPos.buf = VAR_11;
    VAR_10->currPos.currPage = FUNC_1(VAR_11);
   }
   else
   {
    VAR_10->currPos.prevPage = VAR_16;
    VAR_10->currPos.nextPage = VAR_1;
    VAR_10->currPos.buf = VAR_11;
    return 0;
   }
  }

  VAR_10->currPos.firstItem = 0;
  VAR_10->currPos.lastItem = VAR_15 - 1;
  VAR_10->currPos.itemIndex = 0;
 }
 else
 {
  BlockNumber VAR_17 = VAR_1;

  for (;;)
  {

   VAR_14 = FUNC_8(VAR_12, VAR_10->hashso_sk_hash);

   VAR_15 = FUNC_11(VAR_6, VAR_12, VAR_14, VAR_8);

   if (VAR_15 != VAR_5)
    break;






   if (VAR_10->numKilled > 0)
    FUNC_10(VAR_6);

   if (VAR_10->currPos.buf == VAR_10->hashso_bucket_buf ||
    VAR_10->currPos.buf == VAR_10->hashso_split_bucket_buf)
    VAR_17 = VAR_13->hasho_nextblkno;

   FUNC_13(VAR_6, &VAR_11, &VAR_12, &VAR_13);
   if (FUNC_3(VAR_11))
   {
    VAR_10->currPos.buf = VAR_11;
    VAR_10->currPos.currPage = FUNC_1(VAR_11);
   }
   else
   {
    VAR_10->currPos.prevPage = VAR_1;
    VAR_10->currPos.nextPage = VAR_17;
    VAR_10->currPos.buf = VAR_11;
    return 0;
   }
  }

  VAR_10->currPos.firstItem = VAR_15;
  VAR_10->currPos.lastItem = VAR_5 - 1;
  VAR_10->currPos.itemIndex = VAR_5 - 1;
 }

 if (VAR_10->currPos.buf == VAR_10->hashso_bucket_buf ||
  VAR_10->currPos.buf == VAR_10->hashso_split_bucket_buf)
 {
  VAR_10->currPos.prevPage = VAR_1;
  VAR_10->currPos.nextPage = VAR_13->hasho_nextblkno;
  FUNC_4(VAR_10->currPos.buf, VAR_0);
 }
 else
 {
  VAR_10->currPos.prevPage = VAR_13->hasho_prevblkno;
  VAR_10->currPos.nextPage = VAR_13->hasho_nextblkno;
  FUNC_14(VAR_9, VAR_10->currPos.buf);
  VAR_10->currPos.buf = VAR_2;
 }

 FUNC_0(VAR_10->currPos.firstItem <= VAR_10->currPos.lastItem);
 return 1;
}
