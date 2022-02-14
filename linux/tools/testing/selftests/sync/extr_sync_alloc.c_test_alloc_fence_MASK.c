
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;

int FUNC_7(void)
{
 int VAR_0, VAR_1, VAR_2;

 VAR_0 = FUNC_4();
 VAR_2 = FUNC_6(VAR_0);
 FUNC_0(VAR_2, "Failure allocating timeline\n");

 VAR_1 = FUNC_1(VAR_0, "allocFence", 1);
 VAR_2 = FUNC_3(VAR_1);
 FUNC_0(VAR_2, "Failure allocating fence\n");

 FUNC_2(VAR_1);
 FUNC_5(VAR_0);
 return 0;
}
