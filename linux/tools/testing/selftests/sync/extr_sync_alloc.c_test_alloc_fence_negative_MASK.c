
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;

int FUNC_5(void)
{
 int VAR_0, VAR_1;

 VAR_1 = FUNC_3();
 FUNC_0(VAR_1 > 0, "Failure allocating timeline\n");

 VAR_0 = FUNC_1(-1, "fence", 1);
 FUNC_0(VAR_0 < 0, "Success allocating negative fence\n");

 FUNC_2(VAR_0);
 FUNC_4(VAR_1);
 return 0;
}
