
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Size ;
typedef int Relation ;
typedef int Page ;
typedef int Buffer ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,scalar_t__) ;
 scalar_t__ FUNC_13 (int ,scalar_t__,int ,int ) ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int ,scalar_t__) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (char*,int ,int ,int ) ;

__attribute__((used)) static Buffer
FUNC_25(Relation VAR_10, Buffer VAR_11, Size VAR_12,
      bool *VAR_13)
{
 BlockNumber VAR_14;
 BlockNumber VAR_15;
 Page VAR_16;
 Size VAR_17;


 FUNC_0(VAR_12 <= VAR_2);

 if (FUNC_5(VAR_11))
  VAR_14 = FUNC_3(VAR_11);
 else
  VAR_14 = VAR_7;


 VAR_15 = FUNC_15(VAR_10);
 if (VAR_15 == VAR_7)
  VAR_15 = FUNC_8(VAR_10, VAR_12);







 for (;;)
 {
  Buffer VAR_18;
  bool VAR_19 = 0;

  FUNC_6();

  *VAR_13 = 0;

  if (VAR_15 == VAR_7)
  {





   if (!FUNC_11(VAR_10))
   {
    FUNC_10(VAR_10, VAR_6);
    VAR_19 = 1;
   }
   VAR_18 = FUNC_12(VAR_10, VAR_9);
   VAR_15 = FUNC_3(VAR_18);
   *VAR_13 = 1;

   FUNC_2((VAR_3, "brin_getinsertbuffer: extending to page %u",
        FUNC_3(VAR_18)));
  }
  else if (VAR_15 == VAR_14)
  {




   VAR_18 = VAR_11;
  }
  else
  {
   VAR_18 = FUNC_12(VAR_10, VAR_15);
  }







  if (FUNC_5(VAR_11) && VAR_14 < VAR_15)
  {
   FUNC_9(VAR_11, VAR_0);
   if (!FUNC_1(FUNC_4(VAR_11)))
   {
    FUNC_9(VAR_11, VAR_1);
    if (*VAR_13)
     FUNC_21(VAR_10, VAR_18);

    if (VAR_19)
     FUNC_18(VAR_10, VAR_6);

    FUNC_17(VAR_18);

    if (*VAR_13)
    {
     FUNC_7(VAR_10, VAR_15, VAR_15 + 1);

     *VAR_13 = 0;
    }

    return VAR_8;
   }
  }

  FUNC_9(VAR_18, VAR_0);

  if (VAR_19)
   FUNC_18(VAR_10, VAR_6);

  VAR_16 = FUNC_4(VAR_18);







  VAR_17 = *VAR_13 ?
   VAR_2 : FUNC_20(VAR_16);
  if (VAR_17 >= VAR_12)
  {
   FUNC_16(VAR_10, VAR_15);







   if (FUNC_5(VAR_11) && VAR_14 > VAR_15)
   {
    FUNC_9(VAR_11, VAR_0);
    FUNC_0(FUNC_1(FUNC_4(VAR_11)));
   }

   return VAR_18;
  }
  if (*VAR_13)
  {
   FUNC_21(VAR_10, VAR_18);


   FUNC_22(VAR_5,
     (FUNC_23(VAR_4),
      FUNC_24("index row size %zu exceeds maximum %zu for index \"%s\"",
       VAR_12, VAR_17, FUNC_14(VAR_10))));
   return VAR_8;
  }

  if (VAR_15 != VAR_14)
   FUNC_19(VAR_18);
  if (FUNC_5(VAR_11) && VAR_14 <= VAR_15)
   FUNC_9(VAR_11, VAR_1);





  VAR_15 = FUNC_13(VAR_10, VAR_15, VAR_17, VAR_12);
 }
}
