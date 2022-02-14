
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_12__ {scalar_t__ t_tableOid; int t_self; TYPE_1__* t_data; } ;
struct TYPE_11__ {int t_infomask; } ;
typedef int Snapshot ;
typedef TYPE_1__* HeapTupleHeader ;
typedef TYPE_2__* HeapTuple ;
typedef int Buffer ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*,int ,int,int ) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static bool
FUNC_14(HeapTuple VAR_9, Snapshot VAR_10, Buffer VAR_11)
{
 HeapTupleHeader VAR_12 = VAR_9->t_data;

 FUNC_0(FUNC_8(&VAR_9->t_self));
 FUNC_0(VAR_9->t_tableOid != VAR_7);

 if (!FUNC_6(VAR_12))
 {
  if (FUNC_7(VAR_12))
   return 0;


  if (VAR_12->t_infomask & VAR_1)
  {
   TransactionId VAR_13 = FUNC_5(VAR_12);

   if (FUNC_11(VAR_13))
    return 0;
   if (!FUNC_12(VAR_13))
   {
    if (FUNC_10(VAR_13))
    {
     FUNC_9(VAR_12, VAR_11, VAR_6,
        VAR_8);
     return 0;
    }
    FUNC_9(VAR_12, VAR_11, VAR_5,
       VAR_8);
   }
  }

  else if (VAR_12->t_infomask & VAR_0)
  {
   TransactionId VAR_14 = FUNC_5(VAR_12);

   if (!FUNC_11(VAR_14))
   {
    if (FUNC_12(VAR_14))
     return 0;
    if (FUNC_10(VAR_14))
     FUNC_9(VAR_12, VAR_11, VAR_5,
        VAR_8);
    else
    {
     FUNC_9(VAR_12, VAR_11, VAR_6,
        VAR_8);
     return 0;
    }
   }
  }
  else if (FUNC_11(FUNC_4(VAR_12)))
  {
   if (VAR_12->t_infomask & VAR_3)
    return 1;

   if (FUNC_1(VAR_12->t_infomask))
    return 1;

   if (VAR_12->t_infomask & VAR_4)
   {
    TransactionId VAR_15;

    VAR_15 = FUNC_2(VAR_12);


    FUNC_0(FUNC_13(VAR_15));


    if (!FUNC_11(VAR_15))
     return 1;
    else
     return 0;
   }

   if (!FUNC_11(FUNC_3(VAR_12)))
   {

    FUNC_9(VAR_12, VAR_11, VAR_3,
       VAR_8);
    return 1;
   }

   return 0;
  }
  else if (FUNC_12(FUNC_4(VAR_12)))
   return 0;
  else if (FUNC_10(FUNC_4(VAR_12)))
   FUNC_9(VAR_12, VAR_11, VAR_5,
      FUNC_4(VAR_12));
  else
  {

   FUNC_9(VAR_12, VAR_11, VAR_6,
      VAR_8);
   return 0;
  }
 }



 if (VAR_12->t_infomask & VAR_3)
  return 1;

 if (VAR_12->t_infomask & VAR_2)
 {
  if (FUNC_1(VAR_12->t_infomask))
   return 1;
  return 0;
 }

 if (VAR_12->t_infomask & VAR_4)
 {
  TransactionId VAR_16;

  if (FUNC_1(VAR_12->t_infomask))
   return 1;

  VAR_16 = FUNC_2(VAR_12);


  FUNC_0(FUNC_13(VAR_16));

  if (FUNC_11(VAR_16))
   return 0;
  if (FUNC_12(VAR_16))
   return 1;
  if (FUNC_10(VAR_16))
   return 0;

  return 1;
 }

 if (FUNC_11(FUNC_3(VAR_12)))
 {
  if (FUNC_1(VAR_12->t_infomask))
   return 1;
  return 0;
 }

 if (FUNC_12(FUNC_3(VAR_12)))
  return 1;

 if (!FUNC_10(FUNC_3(VAR_12)))
 {

  FUNC_9(VAR_12, VAR_11, VAR_3,
     VAR_8);
  return 1;
 }



 if (FUNC_1(VAR_12->t_infomask))
 {
  FUNC_9(VAR_12, VAR_11, VAR_3,
     VAR_8);
  return 1;
 }

 FUNC_9(VAR_12, VAR_11, VAR_2,
    FUNC_3(VAR_12));
 return 0;
}
