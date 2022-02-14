
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_14__ {scalar_t__ t_tableOid; int t_self; TYPE_1__* t_data; } ;
struct TYPE_13__ {int t_infomask; } ;
typedef TYPE_1__* HeapTupleHeader ;
typedef TYPE_2__* HeapTuple ;
typedef int HTSV_Result ;
typedef int Buffer ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int ,int) ;
 int FUNC_13 (TYPE_1__*,int ,int,int ) ;
 scalar_t__ FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,int ) ;

HTSV_Result
FUNC_19(HeapTuple VAR_14, TransactionId VAR_15,
       Buffer VAR_16)
{
 HeapTupleHeader VAR_17 = VAR_14->t_data;

 FUNC_0(FUNC_11(&VAR_14->t_self));
 FUNC_0(VAR_14->t_tableOid != VAR_12);







 if (!FUNC_9(VAR_17))
 {
  if (FUNC_10(VAR_17))
   return VAR_0;

  else if (VAR_17->t_infomask & VAR_6)
  {
   TransactionId VAR_18 = FUNC_7(VAR_17);

   if (FUNC_15(VAR_18))
    return VAR_1;
   if (FUNC_16(VAR_18))
    return VAR_1;
   if (FUNC_14(VAR_18))
   {
    FUNC_13(VAR_17, VAR_16, VAR_11,
       VAR_13);
    return VAR_0;
   }
   FUNC_13(VAR_17, VAR_16, VAR_10,
      VAR_13);
  }

  else if (VAR_17->t_infomask & VAR_5)
  {
   TransactionId VAR_19 = FUNC_7(VAR_17);

   if (FUNC_15(VAR_19))
    return VAR_2;
   if (FUNC_16(VAR_19))
    return VAR_2;
   if (FUNC_14(VAR_19))
    FUNC_13(VAR_17, VAR_16, VAR_10,
       VAR_13);
   else
   {
    FUNC_13(VAR_17, VAR_16, VAR_11,
       VAR_13);
    return VAR_0;
   }
  }
  else if (FUNC_15(FUNC_5(VAR_17)))
  {
   if (VAR_17->t_infomask & VAR_8)
    return VAR_2;

   if (FUNC_2(VAR_17->t_infomask) ||
    FUNC_8(VAR_17))
    return VAR_2;

   if (FUNC_15(FUNC_6(VAR_17)))
    return VAR_1;

   return VAR_2;
  }
  else if (FUNC_16(FUNC_5(VAR_17)))
  {
   return VAR_2;
  }
  else if (FUNC_14(FUNC_5(VAR_17)))
   FUNC_13(VAR_17, VAR_16, VAR_10,
      FUNC_5(VAR_17));
  else
  {



   FUNC_13(VAR_17, VAR_16, VAR_11,
      VAR_13);
   return VAR_0;
  }






 }





 if (VAR_17->t_infomask & VAR_8)
  return VAR_3;

 if (FUNC_2(VAR_17->t_infomask))
 {






  if (!(VAR_17->t_infomask & VAR_7))
  {
   if (VAR_17->t_infomask & VAR_9)
   {




    if (!FUNC_1(VAR_17->t_infomask) &&
     FUNC_12(FUNC_4(VAR_17),
           1))
     return VAR_3;
    FUNC_13(VAR_17, VAR_16, VAR_8, VAR_13);
   }
   else
   {
    if (FUNC_16(FUNC_4(VAR_17)))
     return VAR_3;
    FUNC_13(VAR_17, VAR_16, VAR_8,
       VAR_13);
   }
  }







  return VAR_3;
 }

 if (VAR_17->t_infomask & VAR_9)
 {
  TransactionId VAR_20 = FUNC_3(VAR_17);


  FUNC_0(!FUNC_2(VAR_17->t_infomask));


  FUNC_0(FUNC_17(VAR_20));

  if (FUNC_16(VAR_20))
   return VAR_1;
  else if (FUNC_14(VAR_20))
  {
   if (!FUNC_18(VAR_20, VAR_15))
    return VAR_4;

   return VAR_0;
  }
  else if (!FUNC_12(FUNC_4(VAR_17), 0))
  {




   FUNC_13(VAR_17, VAR_16, VAR_8, VAR_13);
  }

  return VAR_3;
 }

 if (!(VAR_17->t_infomask & VAR_7))
 {
  if (FUNC_16(FUNC_4(VAR_17)))
   return VAR_1;
  else if (FUNC_14(FUNC_4(VAR_17)))
   FUNC_13(VAR_17, VAR_16, VAR_7,
      FUNC_4(VAR_17));
  else
  {



   FUNC_13(VAR_17, VAR_16, VAR_8,
      VAR_13);
   return VAR_3;
  }






 }





 if (!FUNC_18(FUNC_4(VAR_17), VAR_15))
  return VAR_4;


 return VAR_0;
}
