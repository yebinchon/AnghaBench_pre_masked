
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long,unsigned long) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 unsigned long FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int) ;
 int FUNC_12 () ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_13 (char*) ;

__attribute__((used)) static int FUNC_14(void *VAR_4)
{
 unsigned long VAR_5;

 FUNC_1("rcu_torture_stall task started");
 if (VAR_2 > 0) {
  FUNC_1("rcu_torture_stall begin holdoff");
  FUNC_11(VAR_2 * VAR_0);
  FUNC_1("rcu_torture_stall end holdoff");
 }
 if (!FUNC_2()) {
  VAR_5 = FUNC_3() + VAR_1;

  FUNC_9();
  if (VAR_3)
   FUNC_4();
  else
   FUNC_7();
  FUNC_6("rcu_torture_stall start on CPU %d.\n",
    FUNC_12());
  while (FUNC_0((unsigned long)FUNC_3(),
        VAR_5))
   continue;
  if (VAR_3)
   FUNC_5();
  else
   FUNC_8();
  FUNC_10();
  FUNC_6("rcu_torture_stall end.\n");
 }
 FUNC_13("rcu_torture_stall");
 while (!FUNC_2())
  FUNC_11(10 * VAR_0);
 return 0;
}
