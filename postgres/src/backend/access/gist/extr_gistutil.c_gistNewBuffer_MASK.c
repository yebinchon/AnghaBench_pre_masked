
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Relation ;
typedef int Page ;
typedef int Buffer ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,scalar_t__) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 scalar_t__ FUNC_12 () ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int ,scalar_t__,int ) ;
 int FUNC_15 (int ,int ) ;

Buffer
FUNC_16(Relation VAR_5)
{
 Buffer VAR_6;
 bool VAR_7;


 for (;;)
 {
  BlockNumber VAR_8 = FUNC_2(VAR_5);

  if (VAR_8 == VAR_3)
   break;

  VAR_6 = FUNC_8(VAR_5, VAR_8);





  if (FUNC_1(VAR_6))
  {
   Page VAR_9 = FUNC_0(VAR_6);




   if (FUNC_6(VAR_9))
    return VAR_6;

   FUNC_15(VAR_5, VAR_6);





   if (FUNC_13(VAR_9))
   {






    if (FUNC_12() && FUNC_9(VAR_5))
     FUNC_14(VAR_5, VAR_8, FUNC_3(VAR_9));

    return VAR_6;
   }

   FUNC_4(VAR_6, VAR_2);
  }


  FUNC_10(VAR_6);
 }


 VAR_7 = !FUNC_7(VAR_5);

 if (VAR_7)
  FUNC_5(VAR_5, VAR_0);

 VAR_6 = FUNC_8(VAR_5, VAR_4);
 FUNC_4(VAR_6, VAR_1);

 if (VAR_7)
  FUNC_11(VAR_5, VAR_0);

 return VAR_6;
}
