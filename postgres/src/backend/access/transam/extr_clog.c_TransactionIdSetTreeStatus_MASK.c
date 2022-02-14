
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ XidStatus ;
typedef int XLogRecPtr ;
typedef int TransactionId ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int,int *,scalar_t__,int ,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int *,scalar_t__,int ) ;

void
FUNC_4(TransactionId VAR_3, int VAR_4,
         TransactionId *VAR_5, XidStatus VAR_6, XLogRecPtr VAR_7)
{
 int VAR_8 = FUNC_2(VAR_3);
 int VAR_9;

 FUNC_0(VAR_6 == VAR_1 ||
     VAR_6 == VAR_0);





 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++)
 {
  if (FUNC_2(VAR_5[VAR_9]) != VAR_8)
   break;
 }




 if (VAR_9 == VAR_4)
 {



  FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
           VAR_8, 1);
 }
 else
 {
  int VAR_10 = VAR_9;
  if (VAR_6 == VAR_1)
   FUNC_3(VAR_4 - VAR_10,
        VAR_5 + VAR_10,
        VAR_2, VAR_7);





  VAR_8 = FUNC_2(VAR_3);
  FUNC_1(VAR_3, VAR_10, VAR_5, VAR_6,
           VAR_7, VAR_8, 0);





  FUNC_3(VAR_4 - VAR_10,
       VAR_5 + VAR_10,
       VAR_6, VAR_7);
 }
}
