
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
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,char*) ;
 int FUNC_4 (char*,...) ;
 char* FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;

Oid
FUNC_12(const Oid *VAR_10,
         Oid *VAR_11,
         int VAR_12,
         Oid VAR_13,
         bool VAR_14)
{
 int VAR_15;
 bool VAR_16 = 0;
 bool VAR_17 = 0;
 Oid VAR_18 = VAR_8;
 Oid VAR_19 = VAR_8;
 Oid VAR_20 = VAR_8;
 Oid VAR_21;
 Oid VAR_22;
 bool VAR_23 = (VAR_13 == VAR_1 ||
           VAR_13 == VAR_3 ||
           VAR_13 == VAR_2);
 bool VAR_24 = (VAR_13 == VAR_3);
 bool VAR_25 = (VAR_13 == VAR_2);





 for (VAR_15 = 0; VAR_15 < VAR_12; VAR_15++)
 {
  Oid VAR_26 = VAR_11[VAR_15];
  Oid VAR_27 = VAR_10[VAR_15];

  if (VAR_26 == VAR_1 ||
   VAR_26 == VAR_3 ||
   VAR_26 == VAR_2)
  {
   VAR_16 = VAR_23 = 1;
   if (VAR_26 == VAR_3)
    VAR_24 = 1;
   else if (VAR_26 == VAR_2)
    VAR_25 = 1;
   if (VAR_27 == VAR_9)
   {
    VAR_17 = 1;
    continue;
   }
   if (VAR_14 && VAR_26 == VAR_27)
    continue;
   if (FUNC_0(VAR_18) && VAR_27 != VAR_18)
    FUNC_1(VAR_7,
      (FUNC_2(VAR_5),
       FUNC_4("arguments declared \"anyelement\" are not all alike"),
       FUNC_3("%s versus %s",
           FUNC_5(VAR_18),
           FUNC_5(VAR_27))));
   VAR_18 = VAR_27;
  }
  else if (VAR_26 == VAR_0)
  {
   VAR_16 = 1;
   if (VAR_27 == VAR_9)
   {
    VAR_17 = 1;
    continue;
   }
   if (VAR_14 && VAR_26 == VAR_27)
    continue;
   VAR_27 = FUNC_6(VAR_27);
   if (FUNC_0(VAR_19) && VAR_27 != VAR_19)
    FUNC_1(VAR_7,
      (FUNC_2(VAR_5),
       FUNC_4("arguments declared \"anyarray\" are not all alike"),
       FUNC_3("%s versus %s",
           FUNC_5(VAR_19),
           FUNC_5(VAR_27))));
   VAR_19 = VAR_27;
  }
  else if (VAR_26 == VAR_4)
  {
   VAR_16 = 1;
   if (VAR_27 == VAR_9)
   {
    VAR_17 = 1;
    continue;
   }
   if (VAR_14 && VAR_26 == VAR_27)
    continue;
   VAR_27 = FUNC_6(VAR_27);
   if (FUNC_0(VAR_20) && VAR_27 != VAR_20)
    FUNC_1(VAR_7,
      (FUNC_2(VAR_5),
       FUNC_4("arguments declared \"anyrange\" are not all alike"),
       FUNC_3("%s versus %s",
           FUNC_5(VAR_20),
           FUNC_5(VAR_27))));
   VAR_20 = VAR_27;
  }
 }





 if (!VAR_16)
  return VAR_13;


 if (FUNC_0(VAR_19))
 {
  if (VAR_19 == VAR_0 && !VAR_23)
  {

   VAR_21 = VAR_1;
  }
  else
  {
   VAR_21 = FUNC_8(VAR_19);
   if (!FUNC_0(VAR_21))
    FUNC_1(VAR_7,
      (FUNC_2(VAR_5),
       FUNC_4("argument declared %s is not an array but type %s",
        "anyarray", FUNC_5(VAR_19))));
  }

  if (!FUNC_0(VAR_18))
  {



   VAR_18 = VAR_21;
  }
  else if (VAR_21 != VAR_18)
  {

   FUNC_1(VAR_7,
     (FUNC_2(VAR_5),
      FUNC_4("argument declared %s is not consistent with argument declared %s",
       "anyarray", "anyelement"),
      FUNC_3("%s versus %s",
          FUNC_5(VAR_19),
          FUNC_5(VAR_18))));
  }
 }


 if (FUNC_0(VAR_20))
 {
  if (VAR_20 == VAR_4 && !VAR_23)
  {

   VAR_22 = VAR_1;
  }
  else
  {
   VAR_22 = FUNC_9(VAR_20);
   if (!FUNC_0(VAR_22))
    FUNC_1(VAR_7,
      (FUNC_2(VAR_5),
       FUNC_4("argument declared %s is not a range type but type %s",
        "anyrange",
        FUNC_5(VAR_20))));
  }

  if (!FUNC_0(VAR_18))
  {



   VAR_18 = VAR_22;
  }
  else if (VAR_22 != VAR_18)
  {

   FUNC_1(VAR_7,
     (FUNC_2(VAR_5),
      FUNC_4("argument declared %s is not consistent with argument declared %s",
       "anyrange", "anyelement"),
      FUNC_3("%s versus %s",
          FUNC_5(VAR_20),
          FUNC_5(VAR_18))));
  }
 }

 if (!FUNC_0(VAR_18))
 {
  if (VAR_14)
  {
   VAR_18 = VAR_1;
   VAR_19 = VAR_0;
   VAR_20 = VAR_4;
  }
  else
  {

   FUNC_1(VAR_7,
     (FUNC_2(VAR_5),
      FUNC_4("could not determine polymorphic type because input has type %s",
       "unknown")));
  }
 }

 if (VAR_24 && VAR_18 != VAR_1)
 {

  if (FUNC_10(VAR_18))
   FUNC_1(VAR_7,
     (FUNC_2(VAR_5),
      FUNC_4("type matched to anynonarray is an array type: %s",
       FUNC_5(VAR_18))));
 }

 if (VAR_25 && VAR_18 != VAR_1)
 {

  if (!FUNC_11(VAR_18))
   FUNC_1(VAR_7,
     (FUNC_2(VAR_5),
      FUNC_4("type matched to anyenum is not an enum type: %s",
       FUNC_5(VAR_18))));
 }




 if (VAR_17)
 {
  for (VAR_15 = 0; VAR_15 < VAR_12; VAR_15++)
  {
   Oid VAR_28 = VAR_11[VAR_15];
   Oid VAR_29 = VAR_10[VAR_15];

   if (VAR_29 != VAR_9)
    continue;

   if (VAR_28 == VAR_1 ||
    VAR_28 == VAR_3 ||
    VAR_28 == VAR_2)
    VAR_11[VAR_15] = VAR_18;
   else if (VAR_28 == VAR_0)
   {
    if (!FUNC_0(VAR_19))
    {
     VAR_19 = FUNC_7(VAR_18);
     if (!FUNC_0(VAR_19))
      FUNC_1(VAR_7,
        (FUNC_2(VAR_6),
         FUNC_4("could not find array type for data type %s",
          FUNC_5(VAR_18))));
    }
    VAR_11[VAR_15] = VAR_19;
   }
   else if (VAR_28 == VAR_4)
   {
    if (!FUNC_0(VAR_20))
    {
     FUNC_1(VAR_7,
       (FUNC_2(VAR_6),
        FUNC_4("could not find range type for data type %s",
         FUNC_5(VAR_18))));
    }
    VAR_11[VAR_15] = VAR_20;
   }
  }
 }


 if (VAR_13 == VAR_0)
 {
  if (!FUNC_0(VAR_19))
  {
   VAR_19 = FUNC_7(VAR_18);
   if (!FUNC_0(VAR_19))
    FUNC_1(VAR_7,
      (FUNC_2(VAR_6),
       FUNC_4("could not find array type for data type %s",
        FUNC_5(VAR_18))));
  }
  return VAR_19;
 }


 if (VAR_13 == VAR_4)
 {
  if (!FUNC_0(VAR_20))
  {
   FUNC_1(VAR_7,
     (FUNC_2(VAR_6),
      FUNC_4("could not find range type for data type %s",
       FUNC_5(VAR_18))));
  }
  return VAR_20;
 }


 if (VAR_13 == VAR_1 ||
  VAR_13 == VAR_3 ||
  VAR_13 == VAR_2)
  return VAR_18;


 return VAR_13;
}
