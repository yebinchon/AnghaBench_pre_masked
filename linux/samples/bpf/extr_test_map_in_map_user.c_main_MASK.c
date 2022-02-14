
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {int member_1; int member_0; } ;
typedef int filename ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 char* VAR_2 ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,struct rlimit*) ;
 int FUNC_4 (char*,int,char*,char*) ;
 int FUNC_5 () ;

int FUNC_6(int VAR_3, char **VAR_4)
{
 struct rlimit VAR_5 = {VAR_1, VAR_1};
 char VAR_6[256];

 FUNC_0(!FUNC_3(VAR_0, &VAR_5));

 FUNC_4(VAR_6, sizeof(VAR_6), "%s_kern.o", VAR_4[0]);

 if (FUNC_1(VAR_6)) {
  FUNC_2("%s", VAR_2);
  return 1;
 }

 FUNC_5();

 return 0;
}
