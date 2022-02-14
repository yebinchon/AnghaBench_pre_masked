
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_15__ {scalar_t__ t_tableOid; int t_self; TYPE_1__* t_data; } ;
struct TYPE_14__ {int t_infomask; int t_ctid; } ;
typedef int TM_Result ;
typedef TYPE_1__* HeapTupleHeader ;
typedef TYPE_2__* HeapTuple ;
typedef scalar_t__ CommandId ;
typedef int Buffer ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (TYPE_1__*) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int ,int) ;
 int FUNC_15 (TYPE_1__*,int ,int,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (int ) ;
 int FUNC_19 (int ) ;

TM_Result
FUNC_20(HeapTuple VAR_15, CommandId VAR_16,
       Buffer VAR_17)
{
 HeapTupleHeader VAR_18 = VAR_15->t_data;

 FUNC_0(FUNC_13(&VAR_15->t_self));
 FUNC_0(VAR_15->t_tableOid != VAR_7);

 if (!FUNC_10(VAR_18))
 {
  if (FUNC_11(VAR_18))
   return VAR_11;


  if (VAR_18->t_infomask & VAR_1)
  {
   TransactionId VAR_19 = FUNC_8(VAR_18);

   if (FUNC_17(VAR_19))
    return VAR_11;
   if (!FUNC_18(VAR_19))
   {
    if (FUNC_16(VAR_19))
    {
     FUNC_15(VAR_18, VAR_17, VAR_6,
        VAR_8);
     return VAR_11;
    }
    FUNC_15(VAR_18, VAR_17, VAR_5,
       VAR_8);
   }
  }

  else if (VAR_18->t_infomask & VAR_0)
  {
   TransactionId VAR_20 = FUNC_8(VAR_18);

   if (!FUNC_17(VAR_20))
   {
    if (FUNC_18(VAR_20))
     return VAR_11;
    if (FUNC_16(VAR_20))
     FUNC_15(VAR_18, VAR_17, VAR_5,
        VAR_8);
    else
    {
     FUNC_15(VAR_18, VAR_17, VAR_6,
        VAR_8);
     return VAR_11;
    }
   }
  }
  else if (FUNC_17(FUNC_7(VAR_18)))
  {
   if (FUNC_5(VAR_18) >= VAR_16)
    return VAR_11;

   if (VAR_18->t_infomask & VAR_3)
    return VAR_12;

   if (FUNC_2(VAR_18->t_infomask))
   {
    TransactionId VAR_21;

    VAR_21 = FUNC_6(VAR_18);
    if (VAR_18->t_infomask & VAR_4)
    {
     if (FUNC_14(VAR_21, 1))
      return VAR_9;
     else
      return VAR_12;
    }






    if (!FUNC_18(VAR_21))
     return VAR_12;
    return VAR_9;
   }

   if (VAR_18->t_infomask & VAR_4)
   {
    TransactionId VAR_22;

    VAR_22 = FUNC_3(VAR_18);


    FUNC_0(FUNC_19(VAR_22));


    if (!FUNC_17(VAR_22))
    {
     if (FUNC_14(FUNC_6(VAR_18),
            0))
      return VAR_9;
     return VAR_12;
    }
    else
    {
     if (FUNC_4(VAR_18) >= VAR_16)
      return VAR_13;
     else
      return VAR_11;
    }
   }

   if (!FUNC_17(FUNC_6(VAR_18)))
   {

    FUNC_15(VAR_18, VAR_17, VAR_3,
       VAR_8);
    return VAR_12;
   }

   if (FUNC_4(VAR_18) >= VAR_16)
    return VAR_13;
   else
    return VAR_11;
  }
  else if (FUNC_18(FUNC_7(VAR_18)))
   return VAR_11;
  else if (FUNC_16(FUNC_7(VAR_18)))
   FUNC_15(VAR_18, VAR_17, VAR_5,
      FUNC_7(VAR_18));
  else
  {

   FUNC_15(VAR_18, VAR_17, VAR_6,
      VAR_8);
   return VAR_11;
  }
 }



 if (VAR_18->t_infomask & VAR_3)
  return VAR_12;

 if (VAR_18->t_infomask & VAR_2)
 {
  if (FUNC_2(VAR_18->t_infomask))
   return VAR_12;
  if (!FUNC_12(&VAR_15->t_self, &VAR_18->t_ctid) ||
   FUNC_9(VAR_18))
   return VAR_14;
  else
   return VAR_10;
 }

 if (VAR_18->t_infomask & VAR_4)
 {
  TransactionId VAR_23;

  if (FUNC_1(VAR_18->t_infomask))
   return VAR_12;

  if (FUNC_2(VAR_18->t_infomask))
  {
   if (FUNC_14(FUNC_6(VAR_18), 1))
    return VAR_9;

   FUNC_15(VAR_18, VAR_17, VAR_3, VAR_8);
   return VAR_12;
  }

  VAR_23 = FUNC_3(VAR_18);
  if (!FUNC_19(VAR_23))
  {
   if (FUNC_14(FUNC_6(VAR_18), 0))
    return VAR_9;
  }


  FUNC_0(FUNC_19(VAR_23));

  if (FUNC_17(VAR_23))
  {
   if (FUNC_4(VAR_18) >= VAR_16)
    return VAR_13;
   else
    return VAR_11;
  }

  if (FUNC_14(FUNC_6(VAR_18), 0))
   return VAR_9;

  if (FUNC_16(VAR_23))
  {
   if (!FUNC_12(&VAR_15->t_self, &VAR_18->t_ctid) ||
    FUNC_9(VAR_18))
    return VAR_14;
   else
    return VAR_10;
  }






  if (!FUNC_14(FUNC_6(VAR_18), 0))
  {




   FUNC_15(VAR_18, VAR_17, VAR_3,
      VAR_8);
   return VAR_12;
  }
  else
  {

   return VAR_9;
  }
 }

 if (FUNC_17(FUNC_6(VAR_18)))
 {
  if (FUNC_2(VAR_18->t_infomask))
   return VAR_9;
  if (FUNC_4(VAR_18) >= VAR_16)
   return VAR_13;
  else
   return VAR_11;
 }

 if (FUNC_18(FUNC_6(VAR_18)))
  return VAR_9;

 if (!FUNC_16(FUNC_6(VAR_18)))
 {

  FUNC_15(VAR_18, VAR_17, VAR_3,
     VAR_8);
  return VAR_12;
 }



 if (FUNC_2(VAR_18->t_infomask))
 {
  FUNC_15(VAR_18, VAR_17, VAR_3,
     VAR_8);
  return VAR_12;
 }

 FUNC_15(VAR_18, VAR_17, VAR_2,
    FUNC_6(VAR_18));
 if (!FUNC_12(&VAR_15->t_self, &VAR_18->t_ctid) ||
  FUNC_9(VAR_18))
  return VAR_14;
 else
  return VAR_10;
}
