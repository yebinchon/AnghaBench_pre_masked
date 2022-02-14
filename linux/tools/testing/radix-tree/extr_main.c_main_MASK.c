
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char**,char*) ;
 int FUNC_3 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int,char*,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (int) ;
 int FUNC_16 (unsigned int) ;
 unsigned int FUNC_17 (int ,int *,int ) ;
 int VAR_3 ;
 unsigned int FUNC_18 (int *) ;
 int FUNC_19 () ;

int FUNC_20(int VAR_4, char **VAR_5)
{
 bool VAR_6 = 0;
 int VAR_7;
 unsigned int VAR_8 = FUNC_18(((void*)0));

 while ((VAR_7 = FUNC_2(VAR_4, VAR_5, "ls:v")) != -1) {
  if (VAR_7 == 'l')
   VAR_6 = 1;
  else if (VAR_7 == 's')
   VAR_8 = FUNC_17(VAR_1, ((void*)0), 0);
  else if (VAR_7 == 'v')
   VAR_3++;
 }

 FUNC_4("random seed %u\n", VAR_8);
 FUNC_16(VAR_8);

 FUNC_4("running tests\n");

 FUNC_9();
 FUNC_7();

 FUNC_19();
 FUNC_11();
 FUNC_12();
 FUNC_13();
 FUNC_14();
 FUNC_3(0, 10 + 90 * VAR_6);
 FUNC_3(7, 10 + 90 * VAR_6);
 FUNC_15(VAR_6);


 FUNC_6(0);

 FUNC_0();

 FUNC_8();
 FUNC_5(2, "after rcu_barrier: %d allocated, preempt %d\n",
  VAR_0, VAR_2);
 FUNC_10();

 FUNC_4("tests completed\n");

 FUNC_1(0);
}
