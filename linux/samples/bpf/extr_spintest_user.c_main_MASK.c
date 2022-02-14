
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {int member_1; int member_0; } ;
struct ksym {char* name; } ;
typedef int filename ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 char* VAR_2 ;
 int FUNC_1 (int ,long*) ;
 scalar_t__ FUNC_2 (int ,long*,long*) ;
 int FUNC_3 (int ,long*,long*) ;
 struct ksym* FUNC_4 (long) ;
 scalar_t__ FUNC_5 (char*) ;
 scalar_t__ FUNC_6 () ;
 int * VAR_3 ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int ,struct rlimit*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (char*,int,char*,char*) ;

int FUNC_11(int VAR_4, char **VAR_5)
{
 struct rlimit VAR_6 = {VAR_1, VAR_1};
 long VAR_7, VAR_8, VAR_9;
 char VAR_10[256];
 struct ksym *VAR_11;
 int VAR_12;

 FUNC_10(VAR_10, sizeof(VAR_10), "%s_kern.o", VAR_5[0]);
 FUNC_8(VAR_0, &VAR_6);

 if (FUNC_6()) {
  FUNC_7("failed to process /proc/kallsyms\n");
  return 2;
 }

 if (FUNC_5(VAR_10)) {
  FUNC_7("%s", VAR_2);
  return 1;
 }

 for (VAR_12 = 0; VAR_12 < 5; VAR_12++) {
  VAR_7 = 0;
  FUNC_7("kprobing funcs:");
  while (FUNC_2(VAR_3[0], &VAR_7, &VAR_8) == 0) {
   FUNC_3(VAR_3[0], &VAR_8, &VAR_9);
   FUNC_0(VAR_8 == VAR_9);
   VAR_11 = FUNC_4(VAR_9);
   VAR_7 = VAR_8;
   if (!VAR_11) {
    FUNC_7("ksym not found. Is kallsyms loaded?\n");
    continue;
   }

   FUNC_7(" %s", VAR_11->name);
  }
  if (VAR_7)
   FUNC_7("\n");
  VAR_7 = 0;
  while (FUNC_2(VAR_3[0], &VAR_7, &VAR_8) == 0)
   FUNC_1(VAR_3[0], &VAR_8);
  FUNC_9(1);
 }

 return 0;
}
