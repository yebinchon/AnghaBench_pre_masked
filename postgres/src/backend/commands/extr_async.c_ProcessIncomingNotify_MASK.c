
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 () ;
 scalar_t__ VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static void
FUNC_6(void)
{

 VAR_4 = 0;


 if (VAR_3 == VAR_1)
  return;

 if (VAR_2)
  FUNC_3(VAR_0, "ProcessIncomingNotify");

 FUNC_5("notify interrupt", 0);





 FUNC_1();

 FUNC_2();

 FUNC_0();




 FUNC_4();

 FUNC_5("idle", 0);

 if (VAR_2)
  FUNC_3(VAR_0, "ProcessIncomingNotify: done");
}
