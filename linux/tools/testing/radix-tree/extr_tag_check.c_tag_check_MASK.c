
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_0 ;
 int FUNC_4 (int,char*,int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;

void FUNC_9(void)
{
 FUNC_7();
 FUNC_2();
 FUNC_1();
 FUNC_5();
 FUNC_4(2, "after extend_checks: %d allocated\n", VAR_0);
 FUNC_0();
 FUNC_3();
 FUNC_5();
 FUNC_4(2, "after leak_check: %d allocated\n", VAR_0);
 FUNC_6();
 FUNC_5();
 FUNC_4(2, "after simple_checks: %d allocated\n", VAR_0);
 FUNC_8();
 FUNC_5();
 FUNC_4(2, "after thrash_tags: %d allocated\n", VAR_0);
}
