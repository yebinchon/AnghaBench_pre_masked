
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_17__ ;


typedef scalar_t__ int64 ;
typedef scalar_t__ int32 ;
typedef int int16 ;
typedef int TupleDesc ;
struct TYPE_30__ {int sortstate; } ;
struct TYPE_29__ {TYPE_17__* index; TYPE_1__* inskey; } ;
struct TYPE_28__ {int t_tid; } ;
struct TYPE_27__ {int sk_flags; scalar_t__ sk_attno; int sk_collation; } ;
struct TYPE_26__ {int ssup_nulls_first; scalar_t__ ssup_attno; int abbreviate; int ssup_collation; int ssup_cxt; } ;
struct TYPE_25__ {TYPE_3__* scankeys; } ;
struct TYPE_24__ {int rd_smgr; } ;
typedef int SortSupportData ;
typedef TYPE_2__* SortSupport ;
typedef TYPE_3__* ScanKey ;
typedef TYPE_4__* IndexTuple ;
typedef int Datum ;
typedef TYPE_5__ BTWriteState ;
typedef TYPE_6__ BTSpool ;
typedef int BTPageState ;


 scalar_t__ FUNC_0 (int ,int,int ,int,TYPE_2__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_17__*) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (TYPE_17__*,int ,TYPE_2__*) ;
 int FUNC_6 (TYPE_17__*) ;
 scalar_t__ FUNC_7 (TYPE_17__*) ;
 int FUNC_8 (TYPE_17__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (TYPE_5__*,int *,TYPE_4__*) ;
 int * FUNC_10 (TYPE_5__*,int ) ;
 int FUNC_11 (TYPE_5__*,int *) ;
 int FUNC_12 (TYPE_4__*,int,int ,int*) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (int ,scalar_t__) ;
 int FUNC_16 (int ,int ) ;
 TYPE_4__* FUNC_17 (int ,int) ;

__attribute__((used)) static void
FUNC_18(BTWriteState *VAR_7, BTSpool *VAR_8, BTSpool *VAR_9)
{
 BTPageState *VAR_10 = ((void*)0);
 bool VAR_11 = (VAR_9 != ((void*)0));
 IndexTuple VAR_12,
    VAR_13 = ((void*)0);
 bool VAR_14;
 TupleDesc VAR_15 = FUNC_6(VAR_7->index);
 int VAR_16,
    VAR_17 = FUNC_3(VAR_7->index);
 SortSupport VAR_18;
 int64 VAR_19 = 0;

 if (VAR_11)
 {






  VAR_12 = FUNC_17(VAR_8->sortstate, 1);
  VAR_13 = FUNC_17(VAR_9->sortstate, 1);


  VAR_18 = (SortSupport) FUNC_13(VAR_17 * sizeof(SortSupportData));

  for (VAR_16 = 0; VAR_16 < VAR_17; VAR_16++)
  {
   SortSupport VAR_20 = VAR_18 + VAR_16;
   ScanKey VAR_21 = VAR_7->inskey->scankeys + VAR_16;
   int16 VAR_22;

   VAR_20->ssup_cxt = VAR_2;
   VAR_20->ssup_collation = VAR_21->sk_collation;
   VAR_20->ssup_nulls_first =
    (VAR_21->sk_flags & VAR_6) != 0;
   VAR_20->ssup_attno = VAR_21->sk_attno;

   VAR_20->abbreviate = 0;

   FUNC_2(VAR_20->ssup_attno != 0);

   VAR_22 = (VAR_21->sk_flags & VAR_5) != 0 ?
    VAR_0 : VAR_1;

   FUNC_5(VAR_7->index, VAR_22, VAR_20);
  }

  for (;;)
  {
   VAR_14 = 1;
   if (VAR_13 == ((void*)0))
   {
    if (VAR_12 == ((void*)0))
     break;
   }
   else if (VAR_12 != ((void*)0))
   {
    int32 VAR_23 = 0;

    for (VAR_16 = 1; VAR_16 <= VAR_17; VAR_16++)
    {
     SortSupport VAR_24;
     Datum VAR_25,
        VAR_26;
     bool VAR_27,
        VAR_28;

     VAR_24 = VAR_18 + VAR_16 - 1;
     VAR_25 = FUNC_12(VAR_12, VAR_16, VAR_15, &VAR_27);
     VAR_26 = FUNC_12(VAR_13, VAR_16, VAR_15, &VAR_28);

     VAR_23 = FUNC_0(VAR_25, VAR_27,
              VAR_26, VAR_28,
              VAR_24);
     if (VAR_23 > 0)
     {
      VAR_14 = 0;
      break;
     }
     else if (VAR_23 < 0)
      break;
    }







    if (VAR_23 == 0)
    {
     VAR_23 = FUNC_4(&VAR_12->t_tid, &VAR_13->t_tid);
     FUNC_1(VAR_23 != 0);
     if (VAR_23 > 0)
      VAR_14 = 0;
    }
   }
   else
    VAR_14 = 0;


   if (VAR_10 == ((void*)0))
    VAR_10 = FUNC_10(VAR_7, 0);

   if (VAR_14)
   {
    FUNC_9(VAR_7, VAR_10, VAR_12);
    VAR_12 = FUNC_17(VAR_8->sortstate, 1);
   }
   else
   {
    FUNC_9(VAR_7, VAR_10, VAR_13);
    VAR_13 = FUNC_17(VAR_9->sortstate, 1);
   }


   FUNC_15(VAR_4,
           ++VAR_19);
  }
  FUNC_14(VAR_18);
 }
 else
 {

  while ((VAR_12 = FUNC_17(VAR_8->sortstate,
              1)) != ((void*)0))
  {

   if (VAR_10 == ((void*)0))
    VAR_10 = FUNC_10(VAR_7, 0);

   FUNC_9(VAR_7, VAR_10, VAR_12);


   FUNC_15(VAR_4,
           ++VAR_19);
  }
 }


 FUNC_11(VAR_7, VAR_10);
 if (FUNC_7(VAR_7->index))
 {
  FUNC_8(VAR_7->index);
  FUNC_16(VAR_7->index->rd_smgr, VAR_3);
 }
}
