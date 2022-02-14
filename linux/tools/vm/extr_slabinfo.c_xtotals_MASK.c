
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int,int,int) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(void)
{
 char *VAR_0, *VAR_1;

 FUNC_4();

 FUNC_1();
 FUNC_3();

 VAR_0 = "\nSlabs sorted by size\n";
 VAR_1 = "--------------------\n";
 FUNC_0(VAR_0, VAR_1, 0, 1, 0);

 VAR_0 = "\nSlabs sorted by loss\n";
 VAR_1 = "--------------------\n";
 FUNC_0(VAR_0, VAR_1, 1, 0, 0);

 VAR_0 = "\nSlabs sorted by number of partial slabs\n";
 VAR_1 = "---------------------------------------\n";
 FUNC_0(VAR_0, VAR_1, 0, 0, 1);

 FUNC_2("\n");
}
