
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int text ;
typedef int int32 ;
typedef int Datum ;


 scalar_t__ FUNC_0 (int ) ;
 int * FUNC_1 (int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *) ;
 char* FUNC_8 (int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_9 (int *) ;
 int * FUNC_10 (char*) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int ,char*,int) ;
 scalar_t__ FUNC_16 (scalar_t__) ;
 int FUNC_17 (int *) ;
 int FUNC_18 () ;
 int FUNC_19 (char*) ;
 int FUNC_20 (char*,scalar_t__) ;

__attribute__((used)) static text *
FUNC_21(Datum VAR_3, int32 VAR_4, int32 VAR_5, bool VAR_6)
{
 int32 VAR_7 = FUNC_18();
 int32 VAR_8 = VAR_4;
 int32 VAR_9;
 int32 VAR_10;


 if (VAR_7 == 1)
 {
  VAR_9 = FUNC_2(VAR_8, 1);

  if (VAR_6)

   VAR_10 = -1;
  else
  {

   int VAR_11 = VAR_8 + VAR_5;





   if (VAR_11 < VAR_8)
    FUNC_12(VAR_1,
      (FUNC_13(VAR_0),
       FUNC_14("negative substring length not allowed")));






   if (VAR_11 < 1)
    return FUNC_10("");

   VAR_10 = VAR_11 - VAR_9;
  }






  return FUNC_1(VAR_3, VAR_9 - 1, VAR_10);
 }
 else if (VAR_7 > 1)
 {





  int32 VAR_12;
  int32 VAR_13;
  int32 VAR_14;
  text *VAR_15;
  int32 VAR_16;
  int32 VAR_17;
  char *VAR_18;
  char *VAR_19;
  text *VAR_20;





  VAR_9 = FUNC_2(VAR_8, 1);






  VAR_12 = 0;

  if (VAR_6)

   VAR_13 = VAR_10 = -1;
  else
  {
   int VAR_21 = VAR_8 + VAR_5;





   if (VAR_21 < VAR_8)
    FUNC_12(VAR_1,
      (FUNC_13(VAR_0),
       FUNC_14("negative substring length not allowed")));






   if (VAR_21 < 1)
    return FUNC_10("");





   VAR_10 = VAR_21 - VAR_9;





   VAR_13 = (VAR_9 + VAR_10) * VAR_7;
  }





  if (FUNC_5(FUNC_0(VAR_3)) ||
   FUNC_6(FUNC_0(VAR_3)))
   VAR_15 = FUNC_1(VAR_3, VAR_12, VAR_13);
  else
   VAR_15 = (text *) FUNC_0(VAR_3);


  if (FUNC_9(VAR_15) == 0)
  {
   if (VAR_15 != (text *) FUNC_0(VAR_3))
    FUNC_17(VAR_15);
   return FUNC_10("");
  }


  VAR_14 = FUNC_20(FUNC_8(VAR_15),
           FUNC_9(VAR_15));





  if (VAR_9 > VAR_14)
  {
   if (VAR_15 != (text *) FUNC_0(VAR_3))
    FUNC_17(VAR_15);
   return FUNC_10("");
  }





  if (VAR_10 > -1)
   VAR_16 = FUNC_3(VAR_9 + VAR_10, VAR_12 + 1 + VAR_14);
  else
   VAR_16 = VAR_12 + 1 + VAR_14;




  VAR_18 = FUNC_8(VAR_15);
  for (VAR_17 = 0; VAR_17 < VAR_9 - 1; VAR_17++)
   VAR_18 += FUNC_19(VAR_18);


  VAR_19 = VAR_18;





  for (VAR_17 = VAR_9; VAR_17 < VAR_16; VAR_17++)
   VAR_18 += FUNC_19(VAR_18);

  VAR_20 = (text *) FUNC_16(VAR_2 + (VAR_18 - VAR_19));
  FUNC_4(VAR_20, VAR_2 + (VAR_18 - VAR_19));
  FUNC_15(FUNC_7(VAR_20), VAR_19, (VAR_18 - VAR_19));

  if (VAR_15 != (text *) FUNC_0(VAR_3))
   FUNC_17(VAR_15);

  return VAR_20;
 }
 else
  FUNC_11(VAR_1, "invalid backend encoding: encoding max length < 1");


 return ((void*)0);
}
