
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ TransactionId ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;
 int FUNC_8 (int ,char*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_9 (int ) ;

void
FUNC_10(TransactionId VAR_4)
{
 FUNC_1(VAR_3 >= VAR_1);
 FUNC_1(FUNC_6(VAR_4));
 FUNC_1(FUNC_6(VAR_2));

 FUNC_8(FUNC_9(VAR_0), "record known xact %u latestObservedXid %u",
   VAR_4, VAR_2);






 if (FUNC_5(VAR_4, VAR_2))
 {
  TransactionId VAR_5;
  VAR_5 = VAR_2;
  while (FUNC_7(VAR_5, VAR_4))
  {
   FUNC_4(VAR_5);
   FUNC_2(VAR_5);
  }
  FUNC_1(VAR_5 == VAR_4);





  if (VAR_3 <= VAR_1)
  {
   VAR_2 = VAR_4;
   return;
  }




  VAR_5 = VAR_2;
  FUNC_4(VAR_5);
  FUNC_3(VAR_5, VAR_4, 0);




  VAR_2 = VAR_4;


  FUNC_0(VAR_2);
  VAR_5 = VAR_2;
  FUNC_4(VAR_5);
 }
}
