
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_7__ {int t_ctid; } ;
typedef int Page ;
typedef int OffsetNumber ;
typedef int ItemId ;
typedef TYPE_1__* HeapTupleHeader ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int VAR_2 ;
 int FUNC_12 (int*,int ,int) ;
 int FUNC_13 (int) ;
 scalar_t__ FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,int ) ;
 scalar_t__ FUNC_18 (int ) ;

void
FUNC_19(Page VAR_3, OffsetNumber *VAR_4)
{
 OffsetNumber VAR_5,
    VAR_6;

 FUNC_12(VAR_4, 0, VAR_2 * sizeof(OffsetNumber));

 VAR_6 = FUNC_16(VAR_3);
 for (VAR_5 = VAR_0; VAR_5 <= VAR_6; VAR_5 = FUNC_13(VAR_5))
 {
  ItemId VAR_7 = FUNC_15(VAR_3, VAR_5);
  HeapTupleHeader VAR_8;
  OffsetNumber VAR_9;
  TransactionId VAR_10;


  if (!FUNC_10(VAR_7) || FUNC_7(VAR_7))
   continue;

  if (FUNC_8(VAR_7))
  {
   VAR_8 = (HeapTupleHeader) FUNC_14(VAR_3, VAR_7);






   if (FUNC_4(VAR_8))
    continue;





   VAR_4[VAR_5 - 1] = VAR_5;


   if (!FUNC_5(VAR_8))
    continue;


   VAR_9 = FUNC_11(&VAR_8->t_ctid);
   VAR_10 = FUNC_1(VAR_8);
  }
  else
  {

   FUNC_0(FUNC_9(VAR_7));

   VAR_9 = FUNC_6(VAR_7);
   VAR_10 = VAR_1;
  }
  for (;;)
  {
   VAR_7 = FUNC_15(VAR_3, VAR_9);


   if (!FUNC_8(VAR_7))
    break;

   VAR_8 = (HeapTupleHeader) FUNC_14(VAR_3, VAR_7);

   if (FUNC_18(VAR_10) &&
    !FUNC_17(VAR_10, FUNC_2(VAR_8)))
    break;


   VAR_4[VAR_9 - 1] = VAR_5;


   if (!FUNC_5(VAR_8))
    break;


   FUNC_0(!FUNC_3(VAR_8));

   VAR_9 = FUNC_11(&VAR_8->t_ctid);
   VAR_10 = FUNC_1(VAR_8);
  }
 }
}
