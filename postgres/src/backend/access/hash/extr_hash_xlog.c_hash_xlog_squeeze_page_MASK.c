
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int ntups; void* prevblkno; void* nextblkno; scalar_t__ is_prev_bucket_same_wrt; scalar_t__ is_prim_bucket_same_wrt; } ;
typedef TYPE_1__ xl_hash_squeeze_page ;
typedef int uint32 ;
typedef size_t uint16 ;
typedef scalar_t__ XLogRedoAction ;
typedef int XLogRecPtr ;
struct TYPE_13__ {int EndRecPtr; } ;
typedef TYPE_2__ XLogReaderState ;
struct TYPE_15__ {int hashm_firstfree; } ;
struct TYPE_14__ {int hasho_bucket; void* hasho_prevblkno; void* hasho_nextblkno; int hasho_page_id; int hasho_flag; } ;
typedef int Size ;
typedef scalar_t__ Page ;
typedef scalar_t__ OffsetNumber ;
typedef int Item ;
typedef scalar_t__ IndexTuple ;
typedef TYPE_3__* HashPageOpaque ;
typedef TYPE_4__* HashMetaPage ;
typedef int Buffer ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_5 (scalar_t__) ;
 TYPE_4__* FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 void* VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (scalar_t__,int ,int,scalar_t__,int,int) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__,int ) ;
 int VAR_7 ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (TYPE_2__*,int,int *) ;
 scalar_t__ FUNC_15 (TYPE_2__*,int,int ,int,int *) ;
 char* FUNC_16 (TYPE_2__*,int,int*) ;
 scalar_t__ FUNC_17 (TYPE_2__*) ;
 scalar_t__ FUNC_18 (TYPE_2__*,int) ;
 int FUNC_19 (scalar_t__,int ) ;
 int FUNC_20 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_21(XLogReaderState *VAR_8)
{
 XLogRecPtr VAR_9 = VAR_8->EndRecPtr;
 xl_hash_squeeze_page *VAR_10 = (xl_hash_squeeze_page *) FUNC_17(VAR_8);
 Buffer VAR_11 = VAR_4;
 Buffer VAR_12;
 Buffer VAR_13;
 Buffer VAR_14 = VAR_4;
 Buffer VAR_15;
 XLogRedoAction VAR_16;
 if (VAR_10->is_prim_bucket_same_wrt)
  VAR_16 = FUNC_15(VAR_8, 1, VAR_7, 1, &VAR_12);
 else
 {




  (void) FUNC_15(VAR_8, 0, VAR_7, 1, &VAR_11);

  VAR_16 = FUNC_14(VAR_8, 1, &VAR_12);
 }


 if (VAR_16 == VAR_0)
 {
  Page VAR_17;
  char *VAR_18;
  char *VAR_19;
  Size VAR_20;
  uint16 VAR_21 = 0;

  VAR_19 = VAR_18 = FUNC_16(VAR_8, 1, &VAR_20);

  VAR_17 = (Page) FUNC_1(VAR_12);

  if (VAR_10->ntups > 0)
  {
   OffsetNumber *VAR_22 = (OffsetNumber *) VAR_19;

   VAR_19 += sizeof(OffsetNumber) * VAR_10->ntups;

   while (VAR_19 - VAR_18 < VAR_20)
   {
    IndexTuple VAR_23 = (IndexTuple) VAR_19;
    Size VAR_24;
    OffsetNumber VAR_25;

    VAR_24 = FUNC_7(VAR_23);
    VAR_24 = FUNC_8(VAR_24);

    VAR_19 += VAR_24;

    VAR_25 = FUNC_10(VAR_17, (Item) VAR_23, VAR_24, VAR_22[VAR_21], 0, 0);
    if (VAR_25 == VAR_5)
     FUNC_20(VAR_1, "hash_xlog_squeeze_page: failed to add item to hash index page, size %d bytes",
       (int) VAR_24);

    VAR_21++;
   }
  }




  FUNC_0(VAR_21 == VAR_10->ntups);





  if (VAR_10->is_prev_bucket_same_wrt)
  {
   HashPageOpaque VAR_26 = (HashPageOpaque) FUNC_11(VAR_17);

   VAR_26->hasho_nextblkno = VAR_10->nextblkno;
  }

  FUNC_12(VAR_17, VAR_9);
  FUNC_9(VAR_12);
 }


 if (FUNC_14(VAR_8, 2, &VAR_13) == VAR_0)
 {
  Page VAR_27;
  HashPageOpaque VAR_28;

  VAR_27 = FUNC_1(VAR_13);

  FUNC_19(VAR_27, FUNC_2(VAR_13));

  VAR_28 = (HashPageOpaque) FUNC_11(VAR_27);

  VAR_28->hasho_prevblkno = VAR_3;
  VAR_28->hasho_nextblkno = VAR_3;
  VAR_28->hasho_bucket = -1;
  VAR_28->hasho_flag = VAR_6;
  VAR_28->hasho_page_id = VAR_2;

  FUNC_12(VAR_27, VAR_9);
  FUNC_9(VAR_13);
 }
 if (FUNC_3(VAR_13))
  FUNC_13(VAR_13);


 if (!VAR_10->is_prev_bucket_same_wrt &&
  FUNC_14(VAR_8, 3, &VAR_14) == VAR_0)
 {
  Page VAR_29 = FUNC_1(VAR_14);
  HashPageOpaque VAR_30 = (HashPageOpaque) FUNC_11(VAR_29);

  VAR_30->hasho_nextblkno = VAR_10->nextblkno;

  FUNC_12(VAR_29, VAR_9);
  FUNC_9(VAR_14);
 }
 if (FUNC_3(VAR_14))
  FUNC_13(VAR_14);


 if (FUNC_18(VAR_8, 4))
 {
  Buffer VAR_31;

  if (FUNC_14(VAR_8, 4, &VAR_31) == VAR_0)
  {
   Page VAR_32 = FUNC_1(VAR_31);
   HashPageOpaque VAR_33 = (HashPageOpaque) FUNC_11(VAR_32);

   VAR_33->hasho_prevblkno = VAR_10->prevblkno;

   FUNC_12(VAR_32, VAR_9);
   FUNC_9(VAR_31);
  }
  if (FUNC_3(VAR_31))
   FUNC_13(VAR_31);
 }

 if (FUNC_3(VAR_12))
  FUNC_13(VAR_12);

 if (FUNC_3(VAR_11))
  FUNC_13(VAR_11);
 if (FUNC_14(VAR_8, 5, &VAR_15) == VAR_0)
 {
  Page VAR_34 = (Page) FUNC_1(VAR_15);
  uint32 *VAR_35 = ((void*)0);
  char *VAR_36;
  uint32 *VAR_37;
  Size VAR_38;

  VAR_35 = FUNC_5(VAR_34);

  VAR_36 = FUNC_16(VAR_8, 5, &VAR_38);
  VAR_37 = (uint32 *) VAR_36;

  FUNC_4(VAR_35, *VAR_37);

  FUNC_12(VAR_34, VAR_9);
  FUNC_9(VAR_15);
 }
 if (FUNC_3(VAR_15))
  FUNC_13(VAR_15);


 if (FUNC_18(VAR_8, 6))
 {
  Buffer VAR_39;

  if (FUNC_14(VAR_8, 6, &VAR_39) == VAR_0)
  {
   HashMetaPage VAR_40;
   Page VAR_41;
   char *VAR_42;
   uint32 *VAR_43;
   Size VAR_44;

   VAR_42 = FUNC_16(VAR_8, 6, &VAR_44);
   VAR_43 = (uint32 *) VAR_42;

   VAR_41 = FUNC_1(VAR_39);
   VAR_40 = FUNC_6(VAR_41);
   VAR_40->hashm_firstfree = *VAR_43;

   FUNC_12(VAR_41, VAR_9);
   FUNC_9(VAR_39);
  }
  if (FUNC_3(VAR_39))
   FUNC_13(VAR_39);
 }
}
