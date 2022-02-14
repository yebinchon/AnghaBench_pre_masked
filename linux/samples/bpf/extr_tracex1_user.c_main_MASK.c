
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int filename ;
typedef int FILE ;


 char* VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int,char*,char*) ;

int FUNC_5(int VAR_1, char **VAR_2)
{
 FILE *VAR_3;
 char VAR_4[256];

 FUNC_4(VAR_4, sizeof(VAR_4), "%s_kern.o", VAR_2[0]);

 if (FUNC_0(VAR_4)) {
  FUNC_2("%s", VAR_0);
  return 1;
 }

 VAR_3 = FUNC_1("taskset 1 ping -c5 localhost", "r");
 (void) VAR_3;

 FUNC_3();

 return 0;
}
