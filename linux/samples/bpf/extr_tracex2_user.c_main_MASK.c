
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {int member_0; int member_1; } ;
typedef int filename ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 scalar_t__ FUNC_0 (int ,long*,long*) ;
 int FUNC_1 (int ,long*,long*) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (char*) ;
 int * VAR_6 ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,...) ;
 scalar_t__ FUNC_7 (int ,struct rlimit*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (char*,int,char*,char*) ;

int FUNC_11(int VAR_7, char **VAR_8)
{
 struct rlimit VAR_9 = {1024*1024, VAR_1};
 char VAR_10[256];
 long VAR_11, VAR_12, VAR_13;
 FILE *VAR_14;
 int VAR_15;

 FUNC_10(VAR_10, sizeof(VAR_10), "%s_kern.o", VAR_8[0]);

 if (FUNC_7(VAR_0, &VAR_9)) {
  FUNC_3("setrlimit(RLIMIT_MEMLOCK)");
  return 1;
 }

 FUNC_8(VAR_2, VAR_5);
 FUNC_8(VAR_3, VAR_5);


 VAR_14 = FUNC_4("ping -4 -c5 localhost", "r");
 (void) VAR_14;


 VAR_14 = FUNC_4("dd if=/dev/zero of=/dev/null count=5000000", "r");
 (void) VAR_14;

 if (FUNC_2(VAR_10)) {
  FUNC_6("%s", VAR_4);
  return 1;
 }

 for (VAR_15 = 0; VAR_15 < 5; VAR_15++) {
  VAR_11 = 0;
  while (FUNC_0(VAR_6[0], &VAR_11, &VAR_12) == 0) {
   FUNC_1(VAR_6[0], &VAR_12, &VAR_13);
   FUNC_6("location 0x%lx count %ld\n", VAR_12, VAR_13);
   VAR_11 = VAR_12;
  }
  if (VAR_11)
   FUNC_6("\n");
  FUNC_9(1);
 }
 FUNC_5(VAR_6[1]);

 return 0;
}
