
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xl_standby_lock ;
typedef int XLogRecPtr ;
typedef int RunningTransactions ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int * FUNC_2 (int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_6 () ;
 int VAR_2 ;
 int FUNC_7 (int *) ;
 scalar_t__ VAR_3 ;

XLogRecPtr
FUNC_8(void)
{
 XLogRecPtr VAR_4;
 RunningTransactions VAR_5;
 xl_standby_lock *VAR_6;
 int VAR_7;

 FUNC_0(FUNC_6());




 VAR_6 = FUNC_2(&VAR_7);
 if (VAR_7 > 0)
  FUNC_4(VAR_7, VAR_6);
 FUNC_7(VAR_6);





 VAR_5 = FUNC_1();
 if (VAR_3 < VAR_1)
  FUNC_3(VAR_0);

 VAR_4 = FUNC_5(VAR_5);


 if (VAR_3 >= VAR_1)
  FUNC_3(VAR_0);


 FUNC_3(VAR_2);

 return VAR_4;
}
