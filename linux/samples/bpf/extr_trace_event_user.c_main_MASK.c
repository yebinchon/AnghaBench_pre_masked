
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {int member_1; int member_0; } ;
typedef int filename ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,struct rlimit*) ;
 int FUNC_7 (int ,int (*) (int )) ;
 int FUNC_8 (char*,int,char*,char*) ;
 int FUNC_9 () ;

int FUNC_10(int VAR_5, char **VAR_6)
{
 struct rlimit VAR_7 = {VAR_1, VAR_1};
 char VAR_8[256];

 FUNC_8(VAR_8, sizeof(VAR_8), "%s_kern.o", VAR_6[0]);
 FUNC_6(VAR_0, &VAR_7);

 FUNC_7(VAR_2, FUNC_1);
 FUNC_7(VAR_3, FUNC_1);

 if (FUNC_3()) {
  FUNC_4("failed to process /proc/kallsyms\n");
  return 1;
 }

 if (FUNC_2(VAR_8)) {
  FUNC_4("%s", VAR_4);
  return 2;
 }

 if (FUNC_0() == 0) {
  FUNC_5();
  return 0;
 }
 FUNC_9();
 FUNC_1(0);
 return 0;
}
