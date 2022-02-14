
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {int member_1; int member_0; } ;
typedef int filename ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (char*) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,struct rlimit*) ;
 int FUNC_6 (char*,int,char*,char*) ;

int FUNC_7(int VAR_3, char **VAR_4)
{
 FILE *VAR_5;
 char VAR_6[256];
 struct rlimit VAR_7 = {VAR_1, VAR_1};

 FUNC_6(VAR_6, sizeof(VAR_6), "%s_kern.o", VAR_4[0]);
 FUNC_5(VAR_0, &VAR_7);

 if (FUNC_1(VAR_6)) {
  FUNC_3("%s", VAR_2);
  return 1;
 }

 FUNC_0();

 VAR_5 = FUNC_2("dd if=/dev/zero of=/dev/null count=5", "r");
 (void) VAR_5;

 FUNC_4();

 return 0;
}
