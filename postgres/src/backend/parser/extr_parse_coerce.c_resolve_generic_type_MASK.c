
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
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char*,...) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;

Oid
FUNC_10(Oid VAR_9,
      Oid VAR_10,
      Oid VAR_11)
{
 if (VAR_9 == VAR_0)
 {
  if (VAR_11 == VAR_0)
  {




   Oid VAR_12 = FUNC_6(VAR_10);
   Oid VAR_13 = FUNC_8(VAR_12);

   if (!FUNC_0(VAR_13))
    FUNC_2(VAR_7,
      (FUNC_3(VAR_5),
       FUNC_4("argument declared %s is not an array but type %s",
        "anyarray", FUNC_5(VAR_12))));
   return VAR_12;
  }
  else if (VAR_11 == VAR_1 ||
     VAR_11 == VAR_3 ||
     VAR_11 == VAR_2 ||
     VAR_11 == VAR_4)
  {

   Oid VAR_14 = FUNC_7(VAR_10);

   if (!FUNC_0(VAR_14))
    FUNC_2(VAR_7,
      (FUNC_3(VAR_6),
       FUNC_4("could not find array type for data type %s",
        FUNC_5(VAR_10))));
   return VAR_14;
  }
 }
 else if (VAR_9 == VAR_1 ||
    VAR_9 == VAR_3 ||
    VAR_9 == VAR_2 ||
    VAR_9 == VAR_4)
 {
  if (VAR_11 == VAR_0)
  {

   Oid VAR_15 = FUNC_6(VAR_10);
   Oid VAR_16 = FUNC_8(VAR_15);

   if (!FUNC_0(VAR_16))
    FUNC_2(VAR_7,
      (FUNC_3(VAR_5),
       FUNC_4("argument declared %s is not an array but type %s",
        "anyarray", FUNC_5(VAR_15))));
   return VAR_16;
  }
  else if (VAR_11 == VAR_4)
  {

   Oid VAR_17 = FUNC_6(VAR_10);
   Oid VAR_18 = FUNC_9(VAR_17);

   if (!FUNC_0(VAR_18))
    FUNC_2(VAR_7,
      (FUNC_3(VAR_5),
       FUNC_4("argument declared %s is not a range type but type %s",
        "anyrange", FUNC_5(VAR_17))));
   return VAR_18;
  }
  else if (VAR_11 == VAR_1 ||
     VAR_11 == VAR_3 ||
     VAR_11 == VAR_2)
  {

   return VAR_10;
  }
 }
 else
 {

  return VAR_9;
 }


 FUNC_1(VAR_7, "could not determine polymorphic type because context isn't polymorphic");
 return VAR_8;
}
