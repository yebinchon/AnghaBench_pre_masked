
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
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,struct rlimit*) ;
 int FUNC_3 (char*,int,char*,char*) ;
 int FUNC_4 () ;

int FUNC_5(int VAR_3, char **VAR_4)
{
 struct rlimit VAR_5 = {VAR_1, VAR_1};
 char VAR_6[256];

 FUNC_3(VAR_6, sizeof(VAR_6), "%s_kern.o", VAR_4[0]);

 FUNC_2(VAR_0, &VAR_5);
 if (FUNC_0(VAR_6)) {
  FUNC_1("%s", VAR_2);
  return 1;
 }

 FUNC_4();
 return 0;
}
