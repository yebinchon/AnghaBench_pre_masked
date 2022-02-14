
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16 ;
typedef scalar_t__ TransactionId ;
typedef int MultiXactStatus ;
typedef int MultiXactId ;
typedef int LockTupleMode ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,int*,int*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;




 scalar_t__ FUNC_7 (scalar_t__,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_8 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_9 (scalar_t__,int) ;
 int FUNC_10 (scalar_t__,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 int VAR_16 ;
 int FUNC_15 (int ,char*,...) ;
 int FUNC_16 (int,int) ;

__attribute__((used)) static void
FUNC_17(TransactionId VAR_17, uint16 VAR_18,
        uint16 VAR_19, TransactionId VAR_20,
        LockTupleMode VAR_21, bool VAR_22,
        TransactionId *VAR_23, uint16 *VAR_24,
        uint16 *VAR_25)
{
 TransactionId VAR_26;
 uint16 VAR_27,
    VAR_28;

 FUNC_0(FUNC_13(VAR_20));

l5:
 VAR_27 = 0;
 VAR_28 = 0;
 if (VAR_18 & VAR_4)
 {
  if (VAR_22)
  {
   VAR_26 = VAR_20;
   if (VAR_21 == 131)
    VAR_28 |= VAR_1;
  }
  else
  {
   VAR_27 |= VAR_7;
   switch (VAR_21)
   {
    case 130:
     VAR_26 = VAR_20;
     VAR_27 |= VAR_6;
     break;
    case 128:
     VAR_26 = VAR_20;
     VAR_27 |= VAR_8;
     break;
    case 129:
     VAR_26 = VAR_20;
     VAR_27 |= VAR_3;
     break;
    case 131:
     VAR_26 = VAR_20;
     VAR_27 |= VAR_3;
     VAR_28 |= VAR_1;
     break;
    default:
     VAR_26 = VAR_9;
     FUNC_15(VAR_0, "invalid lock mode");
   }
  }
 }
 else if (VAR_18 & VAR_5)
 {
  MultiXactStatus VAR_29;





  FUNC_0(!(VAR_18 & VAR_2));
  if (FUNC_2(VAR_18))
  {
   VAR_18 &= ~VAR_5;
   VAR_18 |= VAR_4;
   goto l5;
  }
  if (!FUNC_10(VAR_17, FUNC_5(VAR_18)))
  {
   if (FUNC_5(VAR_18) ||
    !FUNC_12(FUNC_9(VAR_17,
                VAR_18)))
   {




    VAR_18 &= ~VAR_5;
    VAR_18 |= VAR_4;
    goto l5;
   }
  }

  VAR_29 = FUNC_16(VAR_21, VAR_22);

  VAR_26 = FUNC_8((MultiXactId) VAR_17, VAR_20,
          VAR_29);
  FUNC_1(VAR_26, &VAR_27, &VAR_28);
 }
 else if (VAR_18 & VAR_2)
 {




  MultiXactStatus VAR_30;
  MultiXactStatus VAR_31;

  if (VAR_19 & VAR_1)
   VAR_30 = VAR_15;
  else
   VAR_30 = VAR_14;

  VAR_31 = FUNC_16(VAR_21, VAR_22);






  VAR_26 = FUNC_7(VAR_17, VAR_30, VAR_20, VAR_31);
  FUNC_1(VAR_26, &VAR_27, &VAR_28);
 }
 else if (FUNC_14(VAR_17))
 {





  MultiXactStatus VAR_32;
  MultiXactStatus VAR_33;
  LockTupleMode VAR_34;

  if (FUNC_5(VAR_18))
  {
   if (FUNC_4(VAR_18))
    VAR_33 = VAR_10;
   else if (FUNC_6(VAR_18))
    VAR_33 = VAR_12;
   else if (FUNC_3(VAR_18))
   {
    if (VAR_19 & VAR_1)
     VAR_33 = VAR_13;
    else
     VAR_33 = VAR_11;
   }
   else
   {






    FUNC_15(VAR_16, "LOCK_ONLY found for Xid in progress %u", VAR_17);
    VAR_18 |= VAR_4;
    VAR_18 &= ~VAR_7;
    goto l5;
   }
  }
  else
  {

   if (VAR_19 & VAR_1)
    VAR_33 = VAR_15;
   else
    VAR_33 = VAR_14;
  }

  VAR_34 = FUNC_11(VAR_33);






  if (VAR_17 == VAR_20)
  {
   FUNC_0(FUNC_5(VAR_18));


   if (VAR_21 < VAR_34)
    VAR_21 = VAR_34;


   VAR_18 |= VAR_4;
   goto l5;
  }


  VAR_32 = FUNC_16(VAR_21, VAR_22);
  VAR_26 = FUNC_7(VAR_17, VAR_33,
          VAR_20, VAR_32);
  FUNC_1(VAR_26, &VAR_27, &VAR_28);
 }
 else if (!FUNC_5(VAR_18) &&
    FUNC_12(VAR_17))
 {




  MultiXactStatus VAR_35;
  MultiXactStatus VAR_36;

  if (VAR_19 & VAR_1)
   VAR_35 = VAR_15;
  else
   VAR_35 = VAR_14;

  VAR_36 = FUNC_16(VAR_21, VAR_22);






  VAR_26 = FUNC_7(VAR_17, VAR_35, VAR_20, VAR_36);
  FUNC_1(VAR_26, &VAR_27, &VAR_28);
 }
 else
 {






  VAR_18 |= VAR_4;
  goto l5;
 }

 *VAR_24 = VAR_27;
 *VAR_25 = VAR_28;
 *VAR_23 = VAR_26;
}
