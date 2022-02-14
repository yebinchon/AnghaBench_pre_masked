
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int uint32 ;
typedef int TransactionId ;
struct TYPE_20__ {scalar_t__ buf; int bounds_valid; scalar_t__ low; scalar_t__ stricthigh; TYPE_3__* itup_key; TYPE_2__* itup; } ;
struct TYPE_19__ {int btpo_next; int btpo_flags; } ;
struct TYPE_18__ {int * scantid; int anynullkeys; } ;
struct TYPE_17__ {int t_tid; } ;
struct TYPE_16__ {int speculativeToken; int xmax; int xmin; } ;
typedef TYPE_1__ SnapshotData ;
typedef int Relation ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef int ItemPointerData ;
typedef int ItemId ;
typedef scalar_t__ IndexUniqueCheck ;
typedef TYPE_2__* IndexTuple ;
typedef int Datum ;
typedef scalar_t__ Buffer ;
typedef int BlockNumber ;
typedef TYPE_3__* BTScanInsert ;
typedef TYPE_4__* BTPageOpaque ;
typedef TYPE_5__* BTInsertState ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 char* FUNC_2 (int ,int *,int*) ;
 int FUNC_3 (int ,int *,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (TYPE_1__) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 int FUNC_8 (scalar_t__,int) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (TYPE_4__*) ;
 scalar_t__ VAR_8 ;
 int FUNC_11 (TYPE_4__*) ;
 scalar_t__ FUNC_12 (TYPE_4__*) ;
 scalar_t__ FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,scalar_t__) ;
 scalar_t__ FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 TYPE_1__* VAR_9 ;
 scalar_t__ FUNC_19 (int ) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_20 (int ,TYPE_5__*) ;
 scalar_t__ FUNC_21 (int ,TYPE_3__*,int ,scalar_t__) ;
 scalar_t__ FUNC_22 (int ,scalar_t__,int ,int ) ;
 int FUNC_23 (int ,scalar_t__) ;
 int FUNC_24 (int ,char*,int ) ;
 int FUNC_25 (int ,int ) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (char*,char*) ;
 int FUNC_28 (char*) ;
 int FUNC_29 (char*,int ) ;
 int FUNC_30 (int ,int ) ;
 int FUNC_31 (TYPE_2__*,int ,int *,int*) ;
 scalar_t__ FUNC_32 (int ,int *,TYPE_1__*,int*) ;

__attribute__((used)) static TransactionId
FUNC_33(Relation VAR_12, BTInsertState VAR_13, Relation VAR_14,
     IndexUniqueCheck VAR_15, bool *VAR_16,
     uint32 *VAR_17)
{
 IndexTuple VAR_18 = VAR_13->itup;
 BTScanInsert VAR_19 = VAR_13->itup_key;
 SnapshotData VAR_20;
 OffsetNumber VAR_21;
 OffsetNumber VAR_22;
 Page VAR_23;
 BTPageOpaque VAR_24;
 Buffer VAR_25 = VAR_6;
 bool VAR_26 = 0;


 *VAR_16 = 1;

 FUNC_4(VAR_20);

 VAR_23 = FUNC_1(VAR_13->buf);
 VAR_24 = (BTPageOpaque) FUNC_16(VAR_23);
 VAR_22 = FUNC_15(VAR_23);







 FUNC_0(!VAR_13->bounds_valid);
 VAR_21 = FUNC_20(VAR_12, VAR_13);




 FUNC_0(!VAR_13->bounds_valid || VAR_13->low == VAR_21);
 FUNC_0(!VAR_19->anynullkeys);
 FUNC_0(VAR_19->scantid == ((void*)0));
 for (;;)
 {
  ItemId VAR_27;
  IndexTuple VAR_28;
  BlockNumber VAR_29;





  if (VAR_21 <= VAR_22)
  {
   if (VAR_25 == VAR_6 && VAR_21 == VAR_13->stricthigh)
   {
    FUNC_0(VAR_13->bounds_valid);
    FUNC_0(VAR_13->low >= FUNC_10(VAR_24));
    FUNC_0(VAR_13->low <= VAR_13->stricthigh);
    FUNC_0(FUNC_21(VAR_12, VAR_19, VAR_23, VAR_21) < 0);
    break;
   }

   VAR_27 = FUNC_14(VAR_23, VAR_21);
   if (!FUNC_5(VAR_27))
   {
    ItemPointerData VAR_30;
    bool VAR_31;

    if (FUNC_21(VAR_12, VAR_19, VAR_23, VAR_21) != 0)
     break;


    VAR_28 = (IndexTuple) FUNC_13(VAR_23, VAR_27);
    VAR_30 = VAR_28->t_tid;






    if (VAR_15 == VAR_10 &&
     FUNC_7(&VAR_30, &VAR_18->t_tid) == 0)
    {
     VAR_26 = 1;
    }







    else if (FUNC_32(VAR_14, &VAR_30,
                &VAR_20,
                &VAR_31))
    {
     TransactionId VAR_32;
     if (VAR_15 == VAR_11)
     {
      if (VAR_25 != VAR_6)
       FUNC_23(VAR_12, VAR_25);
      *VAR_16 = 0;
      return VAR_7;
     }





     VAR_32 = (FUNC_19(VAR_20.xmin)) ?
      VAR_20.xmin : VAR_20.xmax;

     if (FUNC_19(VAR_32))
     {
      if (VAR_25 != VAR_6)
       FUNC_23(VAR_12, VAR_25);

      *VAR_17 = VAR_20.speculativeToken;

      VAR_13->bounds_valid = 0;
      return VAR_32;
     }
     VAR_30 = VAR_18->t_tid;
     if (FUNC_32(VAR_14, &VAR_30,
               VAR_9, ((void*)0)))
     {

     }
     else
     {




      break;
     }
     FUNC_3(VAR_12, ((void*)0), VAR_13->buf);
     if (VAR_25 != VAR_6)
      FUNC_23(VAR_12, VAR_25);
     FUNC_23(VAR_12, VAR_13->buf);
     VAR_13->buf = VAR_6;
     VAR_13->bounds_valid = 0;

     {
      Datum VAR_33[VAR_5];
      bool VAR_34[VAR_5];
      char *VAR_35;

      FUNC_31(VAR_18, FUNC_17(VAR_12),
             VAR_33, VAR_34);

      VAR_35 = FUNC_2(VAR_12, VAR_33,
                 VAR_34);

      FUNC_25(VAR_4,
        (FUNC_26(VAR_3),
         FUNC_29("duplicate key value violates unique constraint \"%s\"",
          FUNC_18(VAR_12)),
         VAR_35 ? FUNC_27("Key %s already exists.",
               VAR_35) : 0,
         FUNC_30(VAR_14,
             FUNC_18(VAR_12))));
     }
    }
    else if (VAR_31)
    {





     FUNC_6(VAR_27);
     VAR_24->btpo_flags |= VAR_0;





     if (VAR_25 != VAR_6)
      FUNC_8(VAR_25, 1);
     else
      FUNC_8(VAR_13->buf, 1);
    }
   }
  }




  if (VAR_21 < VAR_22)
   VAR_21 = FUNC_9(VAR_21);
  else
  {
   int VAR_36;


   if (FUNC_12(VAR_24))
    break;
   VAR_36 = FUNC_21(VAR_12, VAR_19, VAR_23, VAR_8);
   FUNC_0(VAR_36 <= 0);
   if (VAR_36 != 0)
    break;

   for (;;)
   {
    VAR_29 = VAR_24->btpo_next;
    VAR_25 = FUNC_22(VAR_12, VAR_25, VAR_29, VAR_1);
    VAR_23 = FUNC_1(VAR_25);
    VAR_24 = (BTPageOpaque) FUNC_16(VAR_23);
    if (!FUNC_11(VAR_24))
     break;
    if (FUNC_12(VAR_24))
     FUNC_24(VAR_4, "fell off the end of index \"%s\"",
       FUNC_18(VAR_12));
   }
   VAR_22 = FUNC_15(VAR_23);
   VAR_21 = FUNC_10(VAR_24);

  }
 }






 if (VAR_15 == VAR_10 && !VAR_26)
  FUNC_25(VAR_4,
    (FUNC_26(VAR_2),
     FUNC_29("failed to re-find tuple within index \"%s\"",
      FUNC_18(VAR_12)),
     FUNC_28("This may be because of a non-immutable index expression."),
     FUNC_30(VAR_14,
         FUNC_18(VAR_12))));

 if (VAR_25 != VAR_6)
  FUNC_23(VAR_12, VAR_25);

 return VAR_7;
}
