
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_27__ {TYPE_4__* bt_columns; } ;
struct TYPE_26__ {TYPE_1__* bd_tupdesc; } ;
struct TYPE_25__ {void* ii_AmCache; int * ii_Context; } ;
struct TYPE_24__ {int * rd_indcollation; } ;
struct TYPE_23__ {int natts; } ;
typedef int Size ;
typedef TYPE_2__* Relation ;
typedef int Page ;
typedef int OffsetNumber ;
typedef int * MemoryContext ;
typedef int ItemPointer ;
typedef int ItemId ;
typedef int IndexUniqueCheck ;
typedef TYPE_3__ IndexInfo ;
typedef int FmgrInfo ;
typedef int Datum ;
typedef int Buffer ;
typedef TYPE_4__ BrinValues ;
typedef int BrinTuple ;
typedef int BrinRevmap ;
typedef TYPE_5__ BrinMemTuple ;
typedef TYPE_4__ BrinDesc ;
typedef int BlockNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 () ;
 int * VAR_5 ;
 int FUNC_6 (int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_7 (int *,int ,int ,int ,int ,int) ;
 int VAR_8 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int VAR_9 ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (TYPE_4__*) ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (TYPE_2__*) ;
 int FUNC_19 (int ) ;
 int * FUNC_20 (int *,int,int *,int *,int *,int ,int *) ;
 int * FUNC_21 (TYPE_2__*,int*,int *) ;
 int FUNC_22 (int *) ;
 TYPE_4__* FUNC_23 (TYPE_2__*) ;
 int FUNC_24 (int ,int ,int ) ;
 int * FUNC_25 (int *,int ,int *,int *) ;
 TYPE_5__* FUNC_26 (TYPE_4__*,int *,int *) ;
 int FUNC_27 (TYPE_2__*,int,int *,int,int ,int ,int *,int ,int *,int ,int) ;
 int * FUNC_28 (TYPE_4__*,int,TYPE_5__*,int *) ;
 int FUNC_29 (int ,int ) ;
 int FUNC_30 (int ) ;
 int FUNC_31 (char*,int ,int) ;
 int * FUNC_32 (TYPE_2__*,int,int ) ;

bool
FUNC_33(Relation VAR_10, Datum *VAR_11, bool *VAR_12,
     ItemPointer VAR_13, Relation VAR_14,
     IndexUniqueCheck VAR_15,
     IndexInfo *VAR_16)
{
 BlockNumber VAR_17;
 BlockNumber VAR_18;
 BlockNumber VAR_19;
 BrinDesc *VAR_20 = (BrinDesc *) VAR_16->ii_AmCache;
 BrinRevmap *VAR_21;
 Buffer VAR_22 = VAR_8;
 MemoryContext VAR_23 = ((void*)0);
 MemoryContext VAR_24 = VAR_5;
 bool VAR_25 = FUNC_2(VAR_10);

 VAR_21 = FUNC_21(VAR_10, &VAR_17, ((void*)0));





 VAR_18 = FUNC_9(VAR_13);
 VAR_19 = (VAR_18 / VAR_17) * VAR_17;

 for (;;)
 {
  bool VAR_26 = 0;
  OffsetNumber VAR_27;
  BrinTuple *VAR_28;
  BrinMemTuple *VAR_29;
  int VAR_30;

  FUNC_5();






  if (VAR_25 &&
   VAR_19 > 0 &&
   VAR_19 == VAR_18 &&
   FUNC_10(VAR_13) == VAR_7)
  {
   BlockNumber VAR_31 = VAR_19 - 1;
   BrinTuple *VAR_32;

   VAR_32 =
    FUNC_20(VAR_21, VAR_31, &VAR_22, &VAR_27,
           ((void*)0), VAR_3, ((void*)0));
   if (!VAR_32)
   {
    bool VAR_33;

    VAR_33 = FUNC_1(VAR_1,
             FUNC_18(VAR_10),
             VAR_31);
    if (!VAR_33)
     FUNC_29(VAR_9,
       (FUNC_30(VAR_6),
        FUNC_31("request for BRIN range summarization for index \"%s\" page %u was not recorded",
         FUNC_17(VAR_10),
         VAR_31)));
   }
   else
    FUNC_11(VAR_22, VAR_4);
  }

  VAR_28 = FUNC_20(VAR_21, VAR_19, &VAR_22, &VAR_27,
           ((void*)0), VAR_3, ((void*)0));


  if (!VAR_28)
   break;


  if (VAR_20 == ((void*)0))
  {
   FUNC_14(VAR_16->ii_Context);
   VAR_20 = FUNC_23(VAR_10);
   VAR_16->ii_AmCache = (void *) VAR_20;
   FUNC_14(VAR_24);
  }

  if (VAR_23 == ((void*)0))
  {
   VAR_23 = FUNC_0(VAR_5,
             "brininsert cxt",
             VAR_0);
   FUNC_14(VAR_23);
  }

  VAR_29 = FUNC_26(VAR_20, VAR_28, ((void*)0));
  for (VAR_30 = 0; VAR_30 < VAR_20->bd_tupdesc->natts; VAR_30++)
  {
   Datum VAR_34;
   BrinValues *VAR_35;
   FmgrInfo *VAR_36;

   VAR_35 = &VAR_29->bt_columns[VAR_30];
   VAR_36 = FUNC_32(VAR_10, VAR_30 + 1,
           VAR_2);
   VAR_34 = FUNC_7(VAR_36,
            VAR_10->rd_indcollation[VAR_30],
            FUNC_16(VAR_20),
            FUNC_16(VAR_35),
            VAR_11[VAR_30],
            VAR_12[VAR_30]);

   VAR_26 |= FUNC_6(VAR_34);
  }

  if (!VAR_26)
  {




   FUNC_11(VAR_22, VAR_4);
  }
  else
  {
   Page VAR_37 = FUNC_3(VAR_22);
   ItemId VAR_38 = FUNC_15(VAR_37, VAR_27);
   Size VAR_39;
   BrinTuple *VAR_40;
   Size VAR_41;
   BrinTuple *VAR_42;
   bool VAR_43;





   VAR_39 = FUNC_8(VAR_38);
   VAR_40 = FUNC_25(VAR_28, VAR_39, ((void*)0), ((void*)0));







   VAR_42 = FUNC_28(VAR_20, VAR_19, VAR_29, &VAR_41);
   VAR_43 = FUNC_24(VAR_22, VAR_39, VAR_41);
   FUNC_11(VAR_22, VAR_4);
   if (!FUNC_27(VAR_10, VAR_17, VAR_21, VAR_19,
          VAR_22, VAR_27, VAR_40, VAR_39, VAR_42, VAR_41,
          VAR_43))
   {

    FUNC_13(VAR_23);
    continue;
   }
  }


  break;
 }

 FUNC_22(VAR_21);
 if (FUNC_4(VAR_22))
  FUNC_19(VAR_22);
 FUNC_14(VAR_24);
 if (VAR_23 != ((void*)0))
  FUNC_12(VAR_23);

 return 0;
}
