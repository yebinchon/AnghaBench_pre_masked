
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_13__ {TYPE_1__* t_data; int t_self; int t_tableOid; int t_len; } ;
struct TYPE_12__ {int t_ctid; } ;
typedef int Snapshot ;
typedef int Relation ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef int * ItemPointer ;
typedef int ItemId ;
typedef TYPE_1__* HeapTupleHeader ;
typedef TYPE_2__* HeapTuple ;
typedef int Buffer ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ,TYPE_2__*,int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (TYPE_2__*,int ,int ) ;
 int VAR_1 ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *) ;
 int FUNC_16 (int *,scalar_t__,scalar_t__) ;
 int FUNC_17 (int *,scalar_t__) ;
 scalar_t__ FUNC_18 (int ,int ) ;
 int FUNC_19 (int ,scalar_t__) ;
 scalar_t__ FUNC_20 (int ) ;
 int FUNC_21 (int ,TYPE_2__*,int ) ;
 int VAR_2 ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ,int ) ;
 int FUNC_24 (int ) ;

bool
FUNC_25(ItemPointer VAR_3, Relation VAR_4, Buffer VAR_5,
        Snapshot VAR_6, HeapTuple VAR_7,
        bool *VAR_8, bool VAR_9)
{
 Page VAR_10 = (Page) FUNC_2(VAR_5);
 TransactionId VAR_11 = VAR_1;
 BlockNumber VAR_12;
 OffsetNumber VAR_13;
 bool VAR_14;
 bool VAR_15;
 bool VAR_16;


 if (VAR_8)
  *VAR_8 = VAR_9;

 VAR_12 = FUNC_14(VAR_3);
 VAR_13 = FUNC_15(VAR_3);
 VAR_14 = VAR_9;
 VAR_16 = !VAR_9;

 FUNC_0(FUNC_24(VAR_2));
 FUNC_0(FUNC_1(VAR_5) == VAR_12);


 for (;;)
 {
  ItemId VAR_17;


  if (VAR_13 < VAR_0 || VAR_13 > FUNC_20(VAR_10))
   break;

  VAR_17 = FUNC_19(VAR_10, VAR_13);


  if (!FUNC_12(VAR_17))
  {

   if (FUNC_13(VAR_17) && VAR_14)
   {

    VAR_13 = FUNC_11(VAR_17);
    VAR_14 = 0;
    continue;
   }

   break;
  }







  VAR_7->t_data = (HeapTupleHeader) FUNC_18(VAR_10, VAR_17);
  VAR_7->t_len = FUNC_10(VAR_17);
  VAR_7->t_tableOid = FUNC_22(VAR_4);
  FUNC_16(&VAR_7->t_self, VAR_12, VAR_13);




  if (VAR_14 && FUNC_6(VAR_7))
   break;





  if (FUNC_24(VAR_11) &&
   !FUNC_23(VAR_11,
         FUNC_5(VAR_7->t_data)))
   break;
  if (!VAR_16)
  {

   VAR_15 = FUNC_9(VAR_7, VAR_6, VAR_5);
   FUNC_3(VAR_15, VAR_4, VAR_7,
           VAR_5, VAR_6);

   if (VAR_15)
   {
    FUNC_17(VAR_3, VAR_13);
    FUNC_21(VAR_4, VAR_7, VAR_6);
    if (VAR_8)
     *VAR_8 = 0;
    return 1;
   }
  }
  VAR_16 = 0;
  if (VAR_8 && *VAR_8 &&
   !FUNC_8(VAR_7, VAR_2))
   *VAR_8 = 0;





  if (FUNC_7(VAR_7))
  {
   FUNC_0(FUNC_14(&VAR_7->t_data->t_ctid) ==
       VAR_12);
   VAR_13 = FUNC_15(&VAR_7->t_data->t_ctid);
   VAR_14 = 0;
   VAR_11 = FUNC_4(VAR_7->t_data);
  }
  else
   break;
 }

 return 0;
}
