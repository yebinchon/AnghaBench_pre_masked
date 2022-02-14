
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
 int FUNC_0 (char*) ;
 char* VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ FUNC_2 () ;
 int * VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int ,struct rlimit*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*,int,char*,char*) ;

int FUNC_9(int VAR_7, char **VAR_8)
{
 struct rlimit VAR_9 = {VAR_1, VAR_1};
 char VAR_10[256];
 int VAR_11 = 1;

 FUNC_8(VAR_10, sizeof(VAR_10), "%s_kern.o", VAR_8[0]);
 FUNC_5(VAR_0, &VAR_9);

 FUNC_6(VAR_2, VAR_5);
 FUNC_6(VAR_3, VAR_5);

 if (FUNC_2()) {
  FUNC_4("failed to process /proc/kallsyms\n");
  return 2;
 }

 if (FUNC_1(VAR_10)) {
  FUNC_4("%s", VAR_4);
  return 1;
 }

 if (VAR_7 > 1)
  VAR_11 = FUNC_0(VAR_8[1]);
 FUNC_7(VAR_11);
 FUNC_3(VAR_6[0]);

 return 0;
}
