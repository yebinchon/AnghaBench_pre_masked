
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int next; int count; int tids; } ;
typedef TYPE_1__ corrupt_items ;
typedef int TransactionId ;
struct TYPE_8__ {int t_self; scalar_t__ t_data; int t_tableOid; int t_len; } ;
typedef int Relation ;
typedef int Page ;
typedef int Oid ;
typedef scalar_t__ OffsetNumber ;
typedef int ItemPointerData ;
typedef int ItemId ;
typedef scalar_t__ HeapTupleHeader ;
typedef TYPE_2__ HeapTupleData ;
typedef int BufferAccessStrategy ;
typedef scalar_t__ Buffer ;
typedef scalar_t__ BlockNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,scalar_t__,scalar_t__) ;
 int FUNC_9 (scalar_t__,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int VAR_7 ;
 scalar_t__ FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,scalar_t__) ;
 scalar_t__ FUNC_13 (int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_14 (int ,int ,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (scalar_t__) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (scalar_t__) ;
 scalar_t__ FUNC_19 (int ,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_20 (int ,scalar_t__,scalar_t__*) ;
 int FUNC_21 (int ) ;
 scalar_t__ FUNC_22 (scalar_t__) ;
 int FUNC_23 (int) ;
 TYPE_1__* FUNC_24 (int) ;
 int FUNC_25 (TYPE_1__*,int *) ;
 int FUNC_26 (int ,int ) ;
 int FUNC_27 (int ,int ) ;
 int FUNC_28 (TYPE_2__*,int ,scalar_t__) ;

__attribute__((used)) static corrupt_items *
FUNC_29(Oid VAR_9, bool VAR_10, bool VAR_11)
{
 Relation VAR_12;
 BlockNumber VAR_13;
 corrupt_items *VAR_14;
 BlockNumber VAR_15;
 Buffer VAR_16 = VAR_4;
 BufferAccessStrategy VAR_17 = FUNC_2(VAR_1);
 TransactionId VAR_18 = VAR_5;

 if (VAR_10)
 {

  VAR_18 = FUNC_3(((void*)0), VAR_7);
 }

 VAR_12 = FUNC_27(VAR_9, VAR_0);


 FUNC_21(VAR_12);

 VAR_13 = FUNC_15(VAR_12);
 VAR_14 = FUNC_24(sizeof(corrupt_items));
 VAR_14->next = 0;
 VAR_14->count = 64;
 VAR_14->tids = FUNC_23(VAR_14->count * sizeof(ItemPointerData));


 for (VAR_15 = 0; VAR_15 < VAR_13; ++VAR_15)
 {
  bool VAR_19 = 0;
  bool VAR_20 = 0;
  Buffer VAR_21;
  Page VAR_22;
  OffsetNumber VAR_23,
     VAR_24;


  FUNC_1();


  if (VAR_11 && FUNC_19(VAR_12, VAR_15, &VAR_16))
   VAR_19 = 1;
  if (VAR_10 && FUNC_20(VAR_12, VAR_15, &VAR_16))
   VAR_20 = 1;
  if (!VAR_20 && !VAR_19)
   continue;


  VAR_21 = FUNC_14(VAR_12, VAR_6, VAR_15, VAR_8,
         VAR_17);
  FUNC_9(VAR_21, VAR_2);

  VAR_22 = FUNC_0(VAR_21);
  VAR_24 = FUNC_13(VAR_22);





  if (VAR_19 && !FUNC_19(VAR_12, VAR_15, &VAR_16))
   VAR_19 = 0;
  if (VAR_20 && !FUNC_20(VAR_12, VAR_15, &VAR_16))
   VAR_20 = 0;
  if (!VAR_20 && !VAR_19)
  {
   FUNC_18(VAR_21);
   continue;
  }


  for (VAR_23 = VAR_3;
    VAR_23 <= VAR_24;
    VAR_23 = FUNC_10(VAR_23))
  {
   HeapTupleData VAR_25;
   ItemId VAR_26;

   VAR_26 = FUNC_12(VAR_22, VAR_23);


   if (!FUNC_7(VAR_26) || FUNC_6(VAR_26))
    continue;


   if (FUNC_5(VAR_26))
   {
    FUNC_8(&(VAR_25.t_self), VAR_15, VAR_23);
    FUNC_25(VAR_14, &VAR_25.t_self);
    continue;
   }


   FUNC_8(&(VAR_25.t_self), VAR_15, VAR_23);
   VAR_25.t_data = (HeapTupleHeader) FUNC_11(VAR_22, VAR_26);
   VAR_25.t_len = FUNC_4(VAR_26);
   VAR_25.t_tableOid = VAR_9;





   if (VAR_20 &&
    !FUNC_28(&VAR_25, VAR_18, VAR_21))
   {
    TransactionId VAR_27;
    VAR_27 = FUNC_3(((void*)0), VAR_7);

    if (!FUNC_17(VAR_18, VAR_27))
     FUNC_25(VAR_14, &VAR_25.t_self);
    else
    {
     VAR_18 = VAR_27;
     if (!FUNC_28(&VAR_25, VAR_18, VAR_21))
      FUNC_25(VAR_14, &VAR_25.t_self);
    }
   }





   if (VAR_19)
   {
    if (FUNC_22(VAR_25.t_data))
     FUNC_25(VAR_14, &VAR_25.t_self);
   }
  }

  FUNC_18(VAR_21);
 }


 if (VAR_16 != VAR_4)
  FUNC_16(VAR_16);
 FUNC_26(VAR_12, VAR_0);







 VAR_14->count = VAR_14->next;
 VAR_14->next = 0;

 return VAR_14;
}
