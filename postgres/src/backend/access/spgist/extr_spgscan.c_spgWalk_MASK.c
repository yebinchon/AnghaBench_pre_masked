
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int (* storeRes_func ) (TYPE_1__*,int *,int ,int ,int ,int ,int ) ;
struct TYPE_21__ {int pointer; } ;
struct TYPE_20__ {scalar_t__ tupstate; } ;
struct TYPE_19__ {int heapPtr; int distances; int recheckDistances; int recheck; int isNull; int value; scalar_t__ isLeaf; } ;
struct TYPE_18__ {scalar_t__ numberOfNonNullOrderBys; int tempCxt; } ;
typedef TYPE_2__ SpGistSearchItem ;
typedef TYPE_1__* SpGistScanOpaque ;
typedef TYPE_4__* SpGistInnerTuple ;
typedef TYPE_5__* SpGistDeadTuple ;
typedef int Snapshot ;
typedef int Relation ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef scalar_t__ Buffer ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,scalar_t__) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ,scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_15 (int ,int ,int ) ;
 int FUNC_16 (scalar_t__) ;
 int FUNC_17 (int ,char*,scalar_t__) ;
 int FUNC_18 (TYPE_1__*,TYPE_2__*) ;
 TYPE_2__* FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (TYPE_1__*,TYPE_2__*,TYPE_4__*,int) ;
 scalar_t__ FUNC_21 (TYPE_1__*,TYPE_2__*,int ,scalar_t__,int,int,int*,int (*) (TYPE_1__*,int *,int ,int ,int ,int ,int )) ;

__attribute__((used)) static void
FUNC_22(Relation VAR_9, SpGistScanOpaque VAR_10, bool VAR_11,
  storeRes_func VAR_12, Snapshot VAR_13)
{
 Buffer VAR_14 = VAR_3;
 bool VAR_15 = 0;

 while (VAR_11 || !VAR_15)
 {
  SpGistSearchItem *VAR_16 = FUNC_19(VAR_10);

  if (VAR_16 == ((void*)0))
   break;

redirect:

  FUNC_3();

  if (VAR_16->isLeaf)
  {

   FUNC_0(VAR_10->numberOfNonNullOrderBys > 0);
   VAR_12(VAR_10, &VAR_16->heapPtr, VAR_16->value, VAR_16->isNull,
      VAR_16->recheck, VAR_16->recheckDistances, VAR_16->distances);
   VAR_15 = 1;
  }
  else
  {
   BlockNumber VAR_17 = FUNC_4(&VAR_16->heapPtr);
   OffsetNumber VAR_18 = FUNC_5(&VAR_16->heapPtr);
   Page VAR_19;
   bool VAR_20;

   if (VAR_14 == VAR_3)
   {
    VAR_14 = FUNC_11(VAR_9, VAR_17);
    FUNC_6(VAR_14, VAR_0);
   }
   else if (VAR_17 != FUNC_1(VAR_14))
   {
    FUNC_16(VAR_14);
    VAR_14 = FUNC_11(VAR_9, VAR_17);
    FUNC_6(VAR_14, VAR_0);
   }



   VAR_19 = FUNC_2(VAR_14);
   FUNC_15(VAR_13, VAR_9, VAR_19);

   VAR_20 = FUNC_14(VAR_19) ? 1 : 0;

   if (FUNC_13(VAR_19))
   {

    OffsetNumber VAR_21 = FUNC_10(VAR_19);

    if (FUNC_12(VAR_17))
    {

     for (VAR_18 = VAR_2; VAR_18 <= VAR_21; VAR_18++)
      (void) FUNC_21(VAR_10, VAR_16, VAR_19, VAR_18,
            VAR_20, 1,
            &VAR_15, VAR_12);
    }
    else
    {

     while (VAR_18 != VAR_4)
     {
      FUNC_0(VAR_18 >= VAR_2 && VAR_18 <= VAR_21);
      VAR_18 = FUNC_21(VAR_10, VAR_16, VAR_19, VAR_18,
              VAR_20, 0,
              &VAR_15, VAR_12);
      if (VAR_18 == VAR_8)
       goto redirect;
     }
    }
   }
   else
   {
    SpGistInnerTuple VAR_22 = (SpGistInnerTuple)
    FUNC_8(VAR_19, FUNC_9(VAR_19, VAR_18));

    if (VAR_22->tupstate != VAR_5)
    {
     if (VAR_22->tupstate == VAR_7)
     {

      VAR_16->heapPtr = ((SpGistDeadTuple) VAR_22)->pointer;
      FUNC_0(FUNC_4(&VAR_16->heapPtr) !=
          VAR_6);
      goto redirect;
     }
     FUNC_17(VAR_1, "unexpected SPGiST tuple state: %d",
       VAR_22->tupstate);
    }

    FUNC_20(VAR_10, VAR_16, VAR_22, VAR_20);
   }
  }


  FUNC_18(VAR_10, VAR_16);

  FUNC_7(VAR_10->tempCxt);
 }

 if (VAR_14 != VAR_3)
  FUNC_16(VAR_14);
}
