
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ int32 ;
struct TYPE_20__ {int * supportCollation; int * comparePartialFn; int origTupdesc; } ;
struct TYPE_19__ {int attbyval; int attlen; } ;
struct TYPE_18__ {TYPE_8__* ginstate; int index; } ;
struct TYPE_17__ {int off; int buffer; } ;
struct TYPE_16__ {scalar_t__ queryCategory; int attnum; scalar_t__ searchMode; int predictNumberResult; int matchBitmap; int extra_data; int strategy; int queryKey; scalar_t__ isPartialMatch; } ;
typedef int Snapshot ;
typedef int Page ;
typedef int OffsetNumber ;
typedef int ItemPointer ;
typedef scalar_t__ IndexTuple ;
typedef TYPE_1__* GinScanEntry ;
typedef scalar_t__ GinNullCategory ;
typedef TYPE_2__ GinBtreeStack ;
typedef TYPE_3__ GinBtreeData ;
typedef TYPE_4__* Form_pg_attribute ;
typedef int Datum ;
typedef int BlockNumber ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int *,int ,int ,int ,int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int ,int ,int ) ;
 TYPE_4__* FUNC_14 (int ,int) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int ,int ) ;
 int FUNC_17 (int ,char*) ;
 scalar_t__ FUNC_18 (TYPE_8__*,int,int ,scalar_t__,int ,scalar_t__) ;
 int FUNC_19 (TYPE_8__*,int,scalar_t__,int*) ;
 int FUNC_20 (TYPE_8__*,scalar_t__) ;
 int FUNC_21 (TYPE_8__*,scalar_t__,scalar_t__*) ;
 int FUNC_22 (TYPE_3__*,TYPE_2__*,int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ,TYPE_1__*,int ,int ) ;
 int FUNC_25 (int ,int ,int,int) ;
 int FUNC_26 (long,int *) ;
 long VAR_6 ;

__attribute__((used)) static bool
FUNC_27(GinBtreeData *VAR_7, GinBtreeStack *VAR_8,
       GinScanEntry VAR_9, Snapshot VAR_10)
{
 OffsetNumber VAR_11;
 Form_pg_attribute VAR_12;


 VAR_9->matchBitmap = FUNC_26(VAR_6 * 1024L, ((void*)0));


 if (VAR_9->isPartialMatch &&
  VAR_9->queryCategory != VAR_1)
  return 1;


 VAR_11 = VAR_9->attnum;
 VAR_12 = FUNC_14(VAR_7->ginstate->origTupdesc, VAR_11 - 1);





 FUNC_12(VAR_7->index, VAR_8->buffer, VAR_10);

 for (;;)
 {
  Page VAR_13;
  IndexTuple VAR_14;
  Datum VAR_15;
  GinNullCategory VAR_16;




  if (FUNC_22(VAR_7, VAR_8, VAR_10) == 0)
   return 1;

  VAR_13 = FUNC_0(VAR_8->buffer);
  FUNC_13(VAR_10, VAR_7->index, VAR_13);
  VAR_14 = (IndexTuple) FUNC_9(VAR_13, FUNC_10(VAR_13, VAR_8->off));




  if (FUNC_20(VAR_7->ginstate, VAR_14) != VAR_11)
   return 1;


  VAR_15 = FUNC_21(VAR_7->ginstate, VAR_14, &VAR_16);




  if (VAR_9->isPartialMatch)
  {
   int32 VAR_17;





   if (VAR_16 != VAR_1)
    return 1;
   VAR_17 = FUNC_1(FUNC_3(&VAR_7->ginstate->comparePartialFn[VAR_11 - 1],
              VAR_7->ginstate->supportCollation[VAR_11 - 1],
              VAR_9->queryKey,
              VAR_15,
              FUNC_15(VAR_9->strategy),
              FUNC_11(VAR_9->extra_data)));

   if (VAR_17 > 0)
    return 1;
   else if (VAR_17 < 0)
   {
    VAR_8->off++;
    continue;
   }
  }
  else if (VAR_9->searchMode == VAR_3)
  {






   if (VAR_16 == VAR_2)
    return 1;
  }




  if (FUNC_6(VAR_14))
  {
   BlockNumber VAR_18 = FUNC_5(VAR_14);
   if (VAR_16 == VAR_1)
    VAR_15 = FUNC_16(VAR_15, VAR_12->attbyval, VAR_12->attlen);

   FUNC_8(VAR_8->buffer, VAR_5);






   FUNC_12(VAR_7->index, VAR_18, VAR_10);


   FUNC_24(VAR_7->index, VAR_9, VAR_18,
       VAR_10);





   FUNC_8(VAR_8->buffer, VAR_4);
   VAR_13 = FUNC_0(VAR_8->buffer);
   if (!FUNC_7(VAR_13))
   {





    return 0;
   }


   for (;;)
   {
    Datum VAR_19;
    GinNullCategory VAR_20;

    if (FUNC_22(VAR_7, VAR_8, VAR_10) == 0)
     FUNC_17(VAR_0, "lost saved point in index");

    VAR_13 = FUNC_0(VAR_8->buffer);
    VAR_14 = (IndexTuple) FUNC_9(VAR_13, FUNC_10(VAR_13, VAR_8->off));

    if (FUNC_20(VAR_7->ginstate, VAR_14) != VAR_11)
     FUNC_17(VAR_0, "lost saved point in index");
    VAR_19 = FUNC_21(VAR_7->ginstate, VAR_14,
           &VAR_20);

    if (FUNC_18(VAR_7->ginstate, VAR_11,
           VAR_19, VAR_20,
           VAR_15, VAR_16) == 0)
     break;

    VAR_8->off++;
   }

   if (VAR_16 == VAR_1 && !VAR_12->attbyval)
    FUNC_23(FUNC_2(VAR_15));
  }
  else
  {
   ItemPointer VAR_21;
   int VAR_22;

   VAR_21 = FUNC_19(VAR_7->ginstate, VAR_9->attnum, VAR_14, &VAR_22);
   FUNC_25(VAR_9->matchBitmap, VAR_21, VAR_22, 0);
   VAR_9->predictNumberResult += FUNC_4(VAR_14);
   FUNC_23(VAR_21);
  }




  VAR_8->off++;
 }
}
