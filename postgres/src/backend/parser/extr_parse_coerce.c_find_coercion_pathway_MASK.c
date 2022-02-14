
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int castcontext; int castmethod; scalar_t__ castfunc; } ;
typedef scalar_t__ Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_cast ;
typedef scalar_t__ CoercionPathType ;
typedef scalar_t__ CoercionContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;



 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;



 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,char*,int) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;

CoercionPathType
FUNC_10(Oid VAR_14, Oid VAR_15,
       CoercionContext VAR_16,
       Oid *VAR_17)
{
 CoercionPathType VAR_18 = VAR_7;
 HeapTuple VAR_19;

 *VAR_17 = VAR_11;


 if (FUNC_3(VAR_15))
  VAR_15 = FUNC_8(VAR_15);
 if (FUNC_3(VAR_14))
  VAR_14 = FUNC_8(VAR_14);


 if (VAR_15 == VAR_14)
  return VAR_8;


 VAR_19 = FUNC_5(VAR_0,
       FUNC_2(VAR_15),
       FUNC_2(VAR_14));

 if (FUNC_1(VAR_19))
 {
  Form_pg_cast VAR_20 = (Form_pg_cast) FUNC_0(VAR_19);
  CoercionContext VAR_21;


  switch (VAR_20->castcontext)
  {
   case 131:
    VAR_21 = VAR_3;
    break;
   case 133:
    VAR_21 = VAR_1;
    break;
   case 132:
    VAR_21 = VAR_2;
    break;
   default:
    FUNC_7(VAR_9, "unrecognized castcontext: %d",
      (int) VAR_20->castcontext);
    VAR_21 = 0;
    break;
  }


  if (VAR_16 >= VAR_21)
  {
   switch (VAR_20->castmethod)
   {
    case 129:
     VAR_18 = VAR_6;
     *VAR_17 = VAR_20->castfunc;
     break;
    case 128:
     VAR_18 = VAR_5;
     break;
    case 130:
     VAR_18 = VAR_8;
     break;
    default:
     FUNC_7(VAR_9, "unrecognized castmethod: %d",
       (int) VAR_20->castmethod);
     break;
   }
  }

  FUNC_4(VAR_19);
 }
 else
 {
  if (VAR_14 != VAR_12 && VAR_14 != VAR_10)
  {
   Oid VAR_22;
   Oid VAR_23;

   if ((VAR_22 = FUNC_9(VAR_14)) != VAR_11 &&
    (VAR_23 = FUNC_9(VAR_15)) != VAR_11)
   {
    CoercionPathType VAR_24;
    Oid VAR_25;

    VAR_24 = FUNC_10(VAR_22,
              VAR_23,
              VAR_16,
              &VAR_25);
    if (VAR_24 != VAR_7)
    {
     VAR_18 = VAR_4;
    }
   }
  }
  if (VAR_18 == VAR_7)
  {
   if (VAR_16 >= VAR_1 &&
    FUNC_6(VAR_14) == VAR_13)
    VAR_18 = VAR_5;
   else if (VAR_16 >= VAR_2 &&
      FUNC_6(VAR_15) == VAR_13)
    VAR_18 = VAR_5;
  }
 }

 return VAR_18;
}
