
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {int member_1; int member_0; } ;
typedef int filename ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 scalar_t__ FUNC_0 (char*) ;
 int * VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (int ,struct rlimit*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,int,char*,char*) ;

int FUNC_7(int VAR_4, char **VAR_5)
{
 struct rlimit VAR_6 = {VAR_1, VAR_1};
 char VAR_7[256];
 int VAR_8;

 FUNC_6(VAR_7, sizeof(VAR_7), "%s_kern.o", VAR_5[0]);

 if (FUNC_4(VAR_0, &VAR_6)) {
  FUNC_1("setrlimit(RLIMIT_MEMLOCK, RLIM_INFINITY)");
  return 1;
 }

 if (FUNC_0(VAR_7)) {
  FUNC_3("%s", VAR_2);
  return 1;
 }

 for (VAR_8 = 0; ; VAR_8++) {
  FUNC_2(VAR_3[1]);
  FUNC_5(1);
 }

 return 0;
}
