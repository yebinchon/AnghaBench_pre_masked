
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32 ;
typedef int hash_ctl ;
struct TYPE_8__ {int keysize; int entrysize; int hcxt; } ;
struct TYPE_7__ {scalar_t__ hasho_nextblkno; int hasho_bucket; } ;
struct TYPE_6__ {int t_tid; } ;
typedef int Relation ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef int ItemPointerData ;
typedef TYPE_1__* IndexTuple ;
typedef TYPE_2__* HashPageOpaque ;
typedef int HTAB ;
typedef TYPE_3__ HASHCTL ;
typedef scalar_t__ Buffer ;
typedef int Bucket ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (scalar_t__,int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,scalar_t__) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,scalar_t__) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 scalar_t__ FUNC_12 (int ,scalar_t__,int ,int) ;
 int FUNC_13 (int ,scalar_t__) ;
 int FUNC_14 (int ,scalar_t__,int ,int ,scalar_t__,scalar_t__,int *,int ,int ,int ) ;
 int * FUNC_15 (char*,int,TYPE_3__*,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,int *,int ,int*) ;
 int FUNC_18 (TYPE_3__*,int ,int) ;

void
FUNC_19(Relation VAR_11, Buffer VAR_12, Buffer VAR_13, Bucket VAR_14,
       uint32 VAR_15, uint32 VAR_16, uint32 VAR_17)
{
 HASHCTL VAR_18;
 HTAB *VAR_19;
 Buffer VAR_20 = VAR_8;
 Buffer VAR_21;
 Page VAR_22;
 BlockNumber VAR_23;
 BlockNumber VAR_24;
 HashPageOpaque VAR_25;
 Bucket VAR_26;
 bool VAR_27;


 FUNC_18(&VAR_18, 0, sizeof(VAR_18));
 VAR_18.keysize = sizeof(ItemPointerData);
 VAR_18.entrysize = sizeof(ItemPointerData);
 VAR_18.hcxt = VAR_1;

 VAR_19 =
  FUNC_15("bucket ctids",
     256,
     &VAR_18,
     VAR_5 | VAR_3 | VAR_4);

 VAR_24 = VAR_23 = FUNC_11(VAR_11, VAR_14);




 for (;;)
 {
  OffsetNumber VAR_28;
  OffsetNumber VAR_29;

  VAR_21 = FUNC_12(VAR_11, VAR_23, VAR_7,
       VAR_9 | VAR_10);


  if (VAR_23 == VAR_24)
   VAR_20 = VAR_21;

  VAR_22 = FUNC_2(VAR_21);
  VAR_25 = (HashPageOpaque) FUNC_9(VAR_22);


  VAR_29 = FUNC_8(VAR_22);
  for (VAR_28 = VAR_2;
    VAR_28 <= VAR_29;
    VAR_28 = FUNC_5(VAR_28))
  {
   IndexTuple VAR_30;


   VAR_30 = (IndexTuple) FUNC_6(VAR_22,
           FUNC_7(VAR_22, VAR_28));

   (void) FUNC_17(VAR_19, &VAR_30->t_tid, VAR_6, &VAR_27);

   FUNC_0(!VAR_27);
  }

  VAR_23 = VAR_25->hasho_nextblkno;





  if (VAR_21 == VAR_20)
   FUNC_4(VAR_21, VAR_0);
  else
   FUNC_13(VAR_11, VAR_21);


  if (!FUNC_1(VAR_23))
   break;
 }







 if (!FUNC_3(VAR_13))
 {
  FUNC_16(VAR_19);
  return;
 }
 if (!FUNC_3(VAR_20))
 {
  FUNC_4(VAR_13, VAR_0);
  FUNC_16(VAR_19);
  return;
 }

 VAR_22 = FUNC_2(VAR_20);
 VAR_25 = (HashPageOpaque) FUNC_9(VAR_22);
 VAR_26 = VAR_25->hasho_bucket;

 FUNC_14(VAR_11, VAR_12, VAR_14,
       VAR_26, VAR_13, VAR_20, VAR_19,
       VAR_15, VAR_16, VAR_17);

 FUNC_10(VAR_11, VAR_20);
 FUNC_16(VAR_19);
}
