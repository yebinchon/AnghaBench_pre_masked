
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_28__ {scalar_t__ hasho_bucket; int hasho_nextblkno; } ;
struct TYPE_22__ {size_t itemIndex; TYPE_5__* items; void* buf; } ;
struct TYPE_27__ {int hashso_buc_populated; TYPE_1__ currPos; int hashso_buc_split; void* hashso_split_bucket_buf; void* hashso_bucket_buf; int hashso_sk_hash; } ;
struct TYPE_26__ {int heapTid; } ;
struct TYPE_25__ {int numberOfKeys; int xs_heaptid; int xs_snapshot; TYPE_2__* keyData; int opaque; TYPE_3__* indexRelation; } ;
struct TYPE_24__ {scalar_t__* rd_opcintype; } ;
struct TYPE_23__ {int sk_attno; scalar_t__ sk_strategy; int sk_flags; scalar_t__ sk_subtype; int sk_argument; } ;
typedef TYPE_2__* ScanKey ;
typedef int ScanDirection ;
typedef TYPE_3__* Relation ;
typedef int Page ;
typedef TYPE_4__* IndexScanDesc ;
typedef TYPE_5__ HashScanPosItem ;
typedef TYPE_6__* HashScanOpaque ;
typedef TYPE_7__* HashPageOpaque ;
typedef void* Buffer ;
typedef scalar_t__ Bucket ;
typedef int BlockNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_5 (TYPE_7__*) ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (void*,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (TYPE_3__*,int ,int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,TYPE_3__*,int ) ;
 int FUNC_11 (TYPE_3__*,int ) ;
 int FUNC_12 (TYPE_3__*,int ,scalar_t__) ;
 int FUNC_13 (TYPE_3__*,void*) ;
 int FUNC_14 (TYPE_3__*,scalar_t__) ;
 void* FUNC_15 (TYPE_3__*,int ,int ,int *) ;
 void* FUNC_16 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_17 (TYPE_4__*,void**,int *,TYPE_7__**) ;
 int FUNC_18 (TYPE_4__*,void**,int ) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (char*) ;
 int FUNC_22 (TYPE_3__*) ;

bool
FUNC_23(IndexScanDesc VAR_10, ScanDirection VAR_11)
{
 Relation VAR_12 = VAR_10->indexRelation;
 HashScanOpaque VAR_13 = (HashScanOpaque) VAR_10->opaque;
 ScanKey VAR_14;
 uint32 VAR_15;
 Bucket VAR_16;
 Buffer VAR_17;
 Page VAR_18;
 HashPageOpaque VAR_19;
 HashScanPosItem *VAR_20;

 FUNC_22(VAR_12);







 if (VAR_10->numberOfKeys < 1)
  FUNC_19(VAR_3,
    (FUNC_20(VAR_2),
     FUNC_21("hash indexes do not support whole-index scans")));


 VAR_14 = &VAR_10->keyData[0];


 FUNC_0(VAR_14->sk_attno == 1);

 FUNC_0(VAR_14->sk_strategy == VAR_5);





 if (VAR_14->sk_flags & VAR_9)
  return 0;
 if (VAR_14->sk_subtype == VAR_12->rd_opcintype[0] ||
  VAR_14->sk_subtype == VAR_7)
  VAR_15 = FUNC_11(VAR_12, VAR_14->sk_argument);
 else
  VAR_15 = FUNC_12(VAR_12, VAR_14->sk_argument,
             VAR_14->sk_subtype);

 VAR_13->hashso_sk_hash = VAR_15;

 VAR_17 = FUNC_15(VAR_12, VAR_15, VAR_4, ((void*)0));
 FUNC_8(VAR_12, FUNC_2(VAR_17), VAR_10->xs_snapshot);
 VAR_18 = FUNC_3(VAR_17);
 FUNC_10(VAR_10->xs_snapshot, VAR_12, VAR_18);
 VAR_19 = (HashPageOpaque) FUNC_7(VAR_18);
 VAR_16 = VAR_19->hasho_bucket;

 VAR_13->hashso_bucket_buf = VAR_17;
 if (FUNC_5(VAR_19))
 {
  BlockNumber VAR_21;
  Buffer VAR_22;

  VAR_21 = FUNC_14(VAR_12, VAR_16);





  FUNC_6(VAR_17, VAR_1);

  VAR_22 = FUNC_16(VAR_12, VAR_21, VAR_4, VAR_8);
  FUNC_10(VAR_10->xs_snapshot, VAR_12, FUNC_3(VAR_22));





  VAR_13->hashso_split_bucket_buf = VAR_22;
  FUNC_6(VAR_22, VAR_1);

  FUNC_6(VAR_17, VAR_0);
  VAR_18 = FUNC_3(VAR_17);
  VAR_19 = (HashPageOpaque) FUNC_7(VAR_18);
  FUNC_0(VAR_19->hasho_bucket == VAR_16);

  if (FUNC_5(VAR_19))
   VAR_13->hashso_buc_populated = 1;
  else
  {
   FUNC_13(VAR_12, VAR_13->hashso_split_bucket_buf);
   VAR_13->hashso_split_bucket_buf = VAR_6;
  }
 }


 if (FUNC_9(VAR_11))
 {




  while (FUNC_1(VAR_19->hasho_nextblkno) ||
      (VAR_13->hashso_buc_populated && !VAR_13->hashso_buc_split))
   FUNC_17(VAR_10, &VAR_17, &VAR_18, &VAR_19);
 }


 FUNC_0(FUNC_4(VAR_13->currPos.buf));
 VAR_13->currPos.buf = VAR_17;


 if (!FUNC_18(VAR_10, &VAR_17, VAR_11))
  return 0;


 VAR_20 = &VAR_13->currPos.items[VAR_13->currPos.itemIndex];
 VAR_10->xs_heaptid = VAR_20->heapTid;


 return 1;
}
