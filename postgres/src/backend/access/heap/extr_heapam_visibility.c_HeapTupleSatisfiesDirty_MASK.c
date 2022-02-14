
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef void* TransactionId ;
struct TYPE_17__ {scalar_t__ t_tableOid; int t_self; TYPE_2__* t_data; } ;
struct TYPE_16__ {int t_infomask; } ;
struct TYPE_15__ {void* xmax; void* xmin; int speculativeToken; } ;
typedef TYPE_1__* Snapshot ;
typedef TYPE_2__* HeapTupleHeader ;
typedef TYPE_3__* HeapTuple ;
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
 void* FUNC_2 (TYPE_2__*) ;
 void* FUNC_3 (TYPE_2__*) ;
 void* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 void* FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;
 scalar_t__ VAR_7 ;
 void* VAR_8 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_2__*,int ,int,void*) ;
 scalar_t__ FUNC_12 (void*) ;
 scalar_t__ FUNC_13 (void*) ;
 scalar_t__ FUNC_14 (void*) ;
 int FUNC_15 (void*) ;

__attribute__((used)) static bool
FUNC_16(HeapTuple VAR_9, Snapshot VAR_10,
      Buffer VAR_11)
{
 HeapTupleHeader VAR_12 = VAR_9->t_data;

 FUNC_0(FUNC_10(&VAR_9->t_self));
 FUNC_0(VAR_9->t_tableOid != VAR_7);

 VAR_10->xmin = VAR_10->xmax = VAR_8;
 VAR_10->speculativeToken = 0;

 if (!FUNC_8(VAR_12))
 {
  if (FUNC_9(VAR_12))
   return 0;


  if (VAR_12->t_infomask & VAR_1)
  {
   TransactionId VAR_13 = FUNC_6(VAR_12);

   if (FUNC_13(VAR_13))
    return 0;
   if (!FUNC_14(VAR_13))
   {
    if (FUNC_12(VAR_13))
    {
     FUNC_11(VAR_12, VAR_11, VAR_6,
        VAR_8);
     return 0;
    }
    FUNC_11(VAR_12, VAR_11, VAR_5,
       VAR_8);
   }
  }

  else if (VAR_12->t_infomask & VAR_0)
  {
   TransactionId VAR_14 = FUNC_6(VAR_12);

   if (!FUNC_13(VAR_14))
   {
    if (FUNC_14(VAR_14))
     return 0;
    if (FUNC_12(VAR_14))
     FUNC_11(VAR_12, VAR_11, VAR_5,
        VAR_8);
    else
    {
     FUNC_11(VAR_12, VAR_11, VAR_6,
        VAR_8);
     return 0;
    }
   }
  }
  else if (FUNC_13(FUNC_4(VAR_12)))
  {
   if (VAR_12->t_infomask & VAR_3)
    return 1;

   if (FUNC_1(VAR_12->t_infomask))
    return 1;

   if (VAR_12->t_infomask & VAR_4)
   {
    TransactionId VAR_15;

    VAR_15 = FUNC_2(VAR_12);


    FUNC_0(FUNC_15(VAR_15));


    if (!FUNC_13(VAR_15))
     return 1;
    else
     return 0;
   }

   if (!FUNC_13(FUNC_3(VAR_12)))
   {

    FUNC_11(VAR_12, VAR_11, VAR_3,
       VAR_8);
    return 1;
   }

   return 0;
  }
  else if (FUNC_14(FUNC_4(VAR_12)))
  {






   if (FUNC_7(VAR_12))
   {
    VAR_10->speculativeToken =
     FUNC_5(VAR_12);

    FUNC_0(VAR_10->speculativeToken != 0);
   }

   VAR_10->xmin = FUNC_4(VAR_12);

   return 1;
  }
  else if (FUNC_12(FUNC_4(VAR_12)))
   FUNC_11(VAR_12, VAR_11, VAR_5,
      FUNC_4(VAR_12));
  else
  {

   FUNC_11(VAR_12, VAR_11, VAR_6,
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


  FUNC_0(FUNC_15(VAR_16));

  if (FUNC_13(VAR_16))
   return 0;
  if (FUNC_14(VAR_16))
  {
   VAR_10->xmax = VAR_16;
   return 1;
  }
  if (FUNC_12(VAR_16))
   return 0;

  return 1;
 }

 if (FUNC_13(FUNC_3(VAR_12)))
 {
  if (FUNC_1(VAR_12->t_infomask))
   return 1;
  return 0;
 }

 if (FUNC_14(FUNC_3(VAR_12)))
 {
  if (!FUNC_1(VAR_12->t_infomask))
   VAR_10->xmax = FUNC_3(VAR_12);
  return 1;
 }

 if (!FUNC_12(FUNC_3(VAR_12)))
 {

  FUNC_11(VAR_12, VAR_11, VAR_3,
     VAR_8);
  return 1;
 }



 if (FUNC_1(VAR_12->t_infomask))
 {
  FUNC_11(VAR_12, VAR_11, VAR_3,
     VAR_8);
  return 1;
 }

 FUNC_11(VAR_12, VAR_11, VAR_2,
    FUNC_3(VAR_12));
 return 0;
}
