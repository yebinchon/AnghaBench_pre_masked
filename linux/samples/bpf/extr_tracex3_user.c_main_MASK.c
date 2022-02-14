
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {int member_0; int member_1; } ;
typedef int filename ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 char** VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char*) ;
 int * VAR_5 ;
 char* VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 (int ,struct rlimit*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*,int,char*,char*) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 char** VAR_8 ;
 int VAR_9 ;

int FUNC_9(int VAR_10, char **VAR_11)
{
 struct rlimit VAR_12 = {1024*1024, VAR_1};
 char VAR_13[256];
 int VAR_14;

 FUNC_7(VAR_13, sizeof(VAR_13), "%s_kern.o", VAR_11[0]);

 if (FUNC_5(VAR_0, &VAR_12)) {
  FUNC_1("setrlimit(RLIMIT_MEMLOCK)");
  return 1;
 }

 if (FUNC_0(VAR_13)) {
  FUNC_4("%s", VAR_2);
  return 1;
 }

 for (VAR_14 = 1; VAR_14 < VAR_10; VAR_14++) {
  if (FUNC_8(VAR_11[VAR_14], "-a") == 0) {
   VAR_4 = 1;
  } else if (FUNC_8(VAR_11[VAR_14], "-t") == 0) {
   VAR_9 = 1;
  } else if (FUNC_8(VAR_11[VAR_14], "-h") == 0) {
   FUNC_4("Usage:\n"
          "  -a display wider latency range\n"
          "  -t text only\n");
   return 1;
  }
 }

 FUNC_4("  heatmap of IO latency\n");
 if (VAR_9)
  FUNC_4("  %s", VAR_8[VAR_7 - 1]);
 else
  FUNC_4("  %s %s", VAR_3[VAR_7 - 1], VAR_6);
 FUNC_4(" - many events with this latency\n");

 if (VAR_9)
  FUNC_4("  %s", VAR_8[0]);
 else
  FUNC_4("  %s %s", VAR_3[0], VAR_6);
 FUNC_4(" - few events\n");

 for (VAR_14 = 0; ; VAR_14++) {
  if (VAR_14 % 20 == 0)
   FUNC_2();
  FUNC_3(VAR_5[1]);
  FUNC_6(2);
 }

 return 0;
}
