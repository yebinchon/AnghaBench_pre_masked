
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t nEnd; size_t nStart; scalar_t__* notFullPage; } ;
typedef int Relation ;
typedef int Page ;
typedef size_t OffsetNumber ;
typedef int MemoryContext ;
typedef int ItemPointer ;
typedef int IndexUniqueCheck ;
typedef int IndexInfo ;
typedef int GenericXLogState ;
typedef int Datum ;
typedef int Buffer ;
typedef int BloomTuple ;
typedef int BloomState ;
typedef TYPE_1__ BloomMetaPageData ;
typedef scalar_t__ BlockNumber ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_2 (int *,int ,int *,int*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *,int ,int *) ;
 TYPE_1__* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ,int ) ;
 int * FUNC_13 (int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 (int ,scalar_t__) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ,char*) ;
 int FUNC_22 (int *,int ) ;

bool
FUNC_23(Relation VAR_9, Datum *VAR_10, bool *VAR_11,
   ItemPointer VAR_12, Relation VAR_13,
   IndexUniqueCheck VAR_14,
   IndexInfo *VAR_15)
{
 BloomState VAR_16;
 BloomTuple *VAR_17;
 MemoryContext VAR_18;
 MemoryContext VAR_19;
 BloomMetaPageData *VAR_20;
 Buffer VAR_21,
    VAR_22;
 Page VAR_23,
    VAR_24;
 BlockNumber VAR_25 = VAR_8;
 OffsetNumber VAR_26;
 GenericXLogState *VAR_27;

 VAR_19 = FUNC_0(VAR_5,
           "Bloom insert temporary context",
           VAR_0);

 VAR_18 = FUNC_16(VAR_19);

 FUNC_22(&VAR_16, VAR_9);
 VAR_17 = FUNC_2(&VAR_16, VAR_12, VAR_10, VAR_11);





 VAR_22 = FUNC_18(VAR_9, VAR_1);
 FUNC_14(VAR_22, VAR_3);
 VAR_20 = FUNC_6(FUNC_9(VAR_22));

 if (VAR_20->nEnd > VAR_20->nStart)
 {
  Page VAR_28;

  VAR_25 = VAR_20->notFullPage[VAR_20->nStart];
  FUNC_1(VAR_25 != VAR_8);


  FUNC_14(VAR_22, VAR_4);

  VAR_21 = FUNC_18(VAR_9, VAR_25);
  FUNC_14(VAR_21, VAR_2);

  VAR_27 = FUNC_13(VAR_9);
  VAR_28 = FUNC_12(VAR_27, VAR_21, 0);





  if (FUNC_17(VAR_28) || FUNC_7(VAR_28))
   FUNC_3(VAR_28, 0);

  if (FUNC_5(&VAR_16, VAR_28, VAR_17))
  {

   FUNC_11(VAR_27);
   FUNC_20(VAR_21);
   FUNC_19(VAR_22);
   FUNC_16(VAR_18);
   FUNC_15(VAR_19);
   return 0;
  }


  FUNC_10(VAR_27);
  FUNC_20(VAR_21);
 }
 else
 {

  FUNC_14(VAR_22, VAR_4);
 }





 FUNC_14(VAR_22, VAR_2);


 VAR_26 = VAR_20->nStart;


 if (VAR_26 < VAR_20->nEnd &&
  VAR_25 == VAR_20->notFullPage[VAR_26])
  VAR_26++;






 for (;;)
 {
  VAR_27 = FUNC_13(VAR_9);


  VAR_24 = FUNC_12(VAR_27, VAR_22, 0);
  VAR_20 = FUNC_6(VAR_24);

  if (VAR_26 >= VAR_20->nEnd)
   break;

  VAR_25 = VAR_20->notFullPage[VAR_26];
  FUNC_1(VAR_25 != VAR_8);

  VAR_21 = FUNC_18(VAR_9, VAR_25);
  FUNC_14(VAR_21, VAR_2);
  VAR_23 = FUNC_12(VAR_27, VAR_21, 0);


  if (FUNC_17(VAR_23) || FUNC_7(VAR_23))
   FUNC_3(VAR_23, 0);

  if (FUNC_5(&VAR_16, VAR_23, VAR_17))
  {

   VAR_20->nStart = VAR_26;
   FUNC_11(VAR_27);
   FUNC_20(VAR_21);
   FUNC_20(VAR_22);
   FUNC_16(VAR_18);
   FUNC_15(VAR_19);
   return 0;
  }


  FUNC_10(VAR_27);
  FUNC_20(VAR_21);
  VAR_26++;
 }





 VAR_21 = FUNC_4(VAR_9);

 VAR_23 = FUNC_12(VAR_27, VAR_21, VAR_7);
 FUNC_3(VAR_23, 0);

 if (!FUNC_5(&VAR_16, VAR_23, VAR_17))
 {

  FUNC_21(VAR_6, "could not add new bloom tuple to empty page");
 }


 VAR_20->nStart = 0;
 VAR_20->nEnd = 1;
 VAR_20->notFullPage[0] = FUNC_8(VAR_21);


 FUNC_11(VAR_27);

 FUNC_20(VAR_21);
 FUNC_20(VAR_22);

 FUNC_16(VAR_18);
 FUNC_15(VAR_19);

 return 0;
}
