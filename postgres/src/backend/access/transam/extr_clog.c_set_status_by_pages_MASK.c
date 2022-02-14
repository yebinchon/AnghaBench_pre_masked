
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int XidStatus ;
typedef int XLogRecPtr ;
typedef int TransactionId ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int,int *,int ,int ,int,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(int VAR_1, TransactionId *VAR_2,
     XidStatus VAR_3, XLogRecPtr VAR_4)
{
 int VAR_5 = FUNC_2(VAR_2[0]);
 int VAR_6 = 0;
 int VAR_7 = 0;

 FUNC_0(VAR_1 > 0);

 while (VAR_7 < VAR_1)
 {
  int VAR_8 = 0;
  int VAR_9;

  do
  {
   VAR_9 = FUNC_2(VAR_2[VAR_7]);
   if (VAR_9 != VAR_5)
    break;
   VAR_8++;
   VAR_7++;
  } while (VAR_7 < VAR_1);

  FUNC_1(VAR_0,
           VAR_8, VAR_2 + VAR_6,
           VAR_3, VAR_4, VAR_5, 0);
  VAR_6 = VAR_7;
  VAR_5 = VAR_9;
 }
}
