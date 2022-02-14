
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Relation ;
typedef int Page ;
typedef int Buffer ;
typedef scalar_t__ BlockNumber ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;

Buffer
FUNC_11(Relation VAR_5)
{
 Buffer VAR_6;
 bool VAR_7;


 for (;;)
 {
  BlockNumber VAR_8 = FUNC_3(VAR_5);

  if (VAR_8 == VAR_3)
   break;

  VAR_6 = FUNC_8(VAR_5, VAR_8);





  if (FUNC_2(VAR_6))
  {
   Page VAR_9 = FUNC_1(VAR_6);

   if (FUNC_6(VAR_9))
    return VAR_6;

   if (FUNC_0(VAR_9))
    return VAR_6;

   FUNC_4(VAR_6, VAR_1);
  }


  FUNC_9(VAR_6);
 }


 VAR_7 = !FUNC_7(VAR_5);
 if (VAR_7)
  FUNC_5(VAR_5, VAR_2);

 VAR_6 = FUNC_8(VAR_5, VAR_4);
 FUNC_4(VAR_6, VAR_0);

 if (VAR_7)
  FUNC_10(VAR_5, VAR_2);

 return VAR_6;
}
