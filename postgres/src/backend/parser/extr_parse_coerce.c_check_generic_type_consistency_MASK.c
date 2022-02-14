
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Oid ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;

bool
FUNC_6(const Oid *VAR_7,
          const Oid *VAR_8,
          int VAR_9)
{
 int VAR_10;
 Oid VAR_11 = VAR_5;
 Oid VAR_12 = VAR_5;
 Oid VAR_13;
 Oid VAR_14 = VAR_5;
 Oid VAR_15;
 bool VAR_16 = 0;
 bool VAR_17 = 0;
 bool VAR_18 = 0;





 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
 {
  Oid VAR_19 = VAR_8[VAR_10];
  Oid VAR_20 = VAR_7[VAR_10];

  if (VAR_19 == VAR_1 ||
   VAR_19 == VAR_3 ||
   VAR_19 == VAR_2)
  {
   VAR_16 = 1;
   if (VAR_19 == VAR_3)
    VAR_17 = 1;
   else if (VAR_19 == VAR_2)
    VAR_18 = 1;
   if (VAR_20 == VAR_6)
    continue;
   if (FUNC_0(VAR_11) && VAR_20 != VAR_11)
    return 0;
   VAR_11 = VAR_20;
  }
  else if (VAR_19 == VAR_0)
  {
   if (VAR_20 == VAR_6)
    continue;
   VAR_20 = FUNC_1(VAR_20);
   if (FUNC_0(VAR_12) && VAR_20 != VAR_12)
    return 0;
   VAR_12 = VAR_20;
  }
  else if (VAR_19 == VAR_4)
  {
   if (VAR_20 == VAR_6)
    continue;
   VAR_20 = FUNC_1(VAR_20);
   if (FUNC_0(VAR_14) && VAR_20 != VAR_14)
    return 0;
   VAR_14 = VAR_20;
  }
 }


 if (FUNC_0(VAR_12))
 {
  if (VAR_12 == VAR_0)
  {

   if (VAR_16)
    return 0;
   return 1;
  }

  VAR_13 = FUNC_2(VAR_12);
  if (!FUNC_0(VAR_13))
   return 0;

  if (!FUNC_0(VAR_11))
  {



   VAR_11 = VAR_13;
  }
  else if (VAR_13 != VAR_11)
  {

   return 0;
  }
 }


 if (FUNC_0(VAR_14))
 {
  VAR_15 = FUNC_3(VAR_14);
  if (!FUNC_0(VAR_15))
   return 0;

  if (!FUNC_0(VAR_11))
  {



   VAR_11 = VAR_15;
  }
  else if (VAR_15 != VAR_11)
  {

   return 0;
  }
 }

 if (VAR_17)
 {

  if (FUNC_4(VAR_11))
   return 0;
 }

 if (VAR_18)
 {

  if (!FUNC_5(VAR_11))
   return 0;
 }


 return 1;
}
