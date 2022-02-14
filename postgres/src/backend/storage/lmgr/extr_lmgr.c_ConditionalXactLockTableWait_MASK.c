
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TransactionId ;
typedef int LOCKTAG ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int *,int ,int,int) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int ,int ) ;
 int VAR_1 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (long) ;

bool
FUNC_10(TransactionId VAR_2)
{
 LOCKTAG VAR_3;
 bool VAR_4 = 1;

 for (;;)
 {
  FUNC_0(FUNC_8(VAR_2));
  FUNC_0(!FUNC_6(VAR_2, FUNC_1()));

  FUNC_4(VAR_3, VAR_2);

  if (FUNC_2(&VAR_3, VAR_1, 0, 1) == VAR_0)
   return 0;

  FUNC_3(&VAR_3, VAR_1, 0);

  if (!FUNC_7(VAR_2))
   break;


  if (!VAR_4)
   FUNC_9(1000L);
  VAR_4 = 0;
  VAR_2 = FUNC_5(VAR_2);
 }

 return 1;
}
