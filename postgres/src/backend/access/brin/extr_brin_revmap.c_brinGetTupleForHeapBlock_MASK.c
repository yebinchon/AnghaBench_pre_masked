
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ rm_pagesPerRange; void* rm_currBuf; int rm_irel; } ;
struct TYPE_8__ {scalar_t__ bt_blkno; } ;
struct TYPE_7__ {int * rm_tids; } ;
typedef int Snapshot ;
typedef int Size ;
typedef TYPE_1__ RevmapContents ;
typedef int Relation ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef int ItemPointerData ;
typedef int ItemId ;
typedef void* Buffer ;
typedef TYPE_2__ BrinTuple ;
typedef TYPE_3__ BrinRevmap ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (void*) ;
 int FUNC_5 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int *,int *) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (void*,int) ;
 scalar_t__ FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,scalar_t__) ;
 scalar_t__ FUNC_18 (int ) ;
 void* FUNC_19 (int ,scalar_t__) ;
 int FUNC_20 (void*) ;
 int FUNC_21 (int ,int ,int ) ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (char*) ;
 scalar_t__ FUNC_25 (TYPE_3__*,scalar_t__) ;

BrinTuple *
FUNC_26(BrinRevmap *VAR_7, BlockNumber VAR_8,
       Buffer *VAR_9, OffsetNumber *VAR_10, Size *VAR_11, int VAR_12,
       Snapshot VAR_13)
{
 Relation VAR_14 = VAR_7->rm_irel;
 BlockNumber VAR_15;
 RevmapContents *VAR_16;
 ItemPointerData *VAR_17;
 BlockNumber VAR_18;
 Page VAR_19;
 ItemId VAR_20;
 BrinTuple *VAR_21;
 ItemPointerData VAR_22;


 VAR_8 = (VAR_8 / VAR_7->rm_pagesPerRange) * VAR_7->rm_pagesPerRange;






 VAR_15 = FUNC_25(VAR_7, VAR_8);
 if (VAR_15 == VAR_4)
 {
  *VAR_10 = VAR_6;
  return ((void*)0);
 }

 FUNC_13(&VAR_22);
 for (;;)
 {
  FUNC_5();

  if (VAR_7->rm_currBuf == VAR_5 ||
   FUNC_2(VAR_7->rm_currBuf) != VAR_15)
  {
   if (VAR_7->rm_currBuf != VAR_5)
    FUNC_20(VAR_7->rm_currBuf);

   FUNC_0(VAR_15 != VAR_4);
   VAR_7->rm_currBuf = FUNC_19(VAR_7->rm_irel, VAR_15);
  }

  FUNC_14(VAR_7->rm_currBuf, VAR_0);

  VAR_16 = (RevmapContents *)
   FUNC_15(FUNC_3(VAR_7->rm_currBuf));
  VAR_17 = VAR_16->rm_tids;
  VAR_17 += FUNC_6(VAR_7->rm_pagesPerRange, VAR_8);

  if (!FUNC_12(VAR_17))
  {
   FUNC_14(VAR_7->rm_currBuf, VAR_1);
   return ((void*)0);
  }







  if (FUNC_12(&VAR_22) && FUNC_9(&VAR_22, VAR_17))
   FUNC_22(VAR_3,
     (FUNC_23(VAR_2),
      FUNC_24("corrupted BRIN index: inconsistent range map")));
  VAR_22 = *VAR_17;

  VAR_18 = FUNC_10(VAR_17);
  *VAR_10 = FUNC_11(VAR_17);

  FUNC_14(VAR_7->rm_currBuf, VAR_1);


  if (!FUNC_4(*VAR_9) || FUNC_2(*VAR_9) != VAR_18)
  {
   if (FUNC_4(*VAR_9))
    FUNC_20(*VAR_9);
   *VAR_9 = FUNC_19(VAR_14, VAR_18);
  }
  FUNC_14(*VAR_9, VAR_12);
  VAR_19 = FUNC_3(*VAR_9);
  FUNC_21(VAR_13, VAR_14, VAR_19);


  if (FUNC_1(VAR_19))
  {
   if (*VAR_10 > FUNC_18(VAR_19))
    FUNC_22(VAR_3,
      (FUNC_23(VAR_2),
       FUNC_24("corrupted BRIN index: inconsistent range map")));
   VAR_20 = FUNC_17(VAR_19, *VAR_10);
   if (FUNC_8(VAR_20))
   {
    VAR_21 = (BrinTuple *) FUNC_16(VAR_19, VAR_20);

    if (VAR_21->bt_blkno == VAR_8)
    {
     if (VAR_11)
      *VAR_11 = FUNC_7(VAR_20);

     return VAR_21;
    }
   }
  }




  FUNC_14(*VAR_9, VAR_1);
 }

 return ((void*)0);
}
