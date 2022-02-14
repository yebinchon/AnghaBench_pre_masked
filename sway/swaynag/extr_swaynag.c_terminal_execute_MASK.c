
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,char*,char*,char*,int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,char*) ;
 int FUNC_4 (int *,char*,char*,char*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char*,char*,char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ,char*,...) ;
 int FUNC_11 (int ,char*) ;

__attribute__((used)) static bool FUNC_12(char *VAR_5, char *VAR_6) {
 char VAR_7[] = "/tmp/swaynagXXXXXX";
 FILE *VAR_8= FUNC_3(FUNC_7(VAR_7), "w");
 if (!VAR_8) {
  FUNC_10(VAR_1, "Failed to create temp script");
  return 0;
 }
 FUNC_10(VAR_0, "Created temp script: %s", VAR_7);
 FUNC_4(VAR_8, "#!/bin/sh\nrm %s\n%s", VAR_7, VAR_6);
 FUNC_2(VAR_8);
 FUNC_0(VAR_7, VAR_2 | VAR_3 | VAR_4);
 char *VAR_9 = FUNC_6(sizeof(char) * (FUNC_9(VAR_5) + FUNC_9(" -e ") + FUNC_9(VAR_7) + 1));
 FUNC_8(VAR_9, "%s -e %s", VAR_5, VAR_7);
 FUNC_1("/bin/sh", "/bin/sh", "-c", VAR_9, ((void*)0));
 FUNC_11(VAR_1, "Failed to run command, execl() returned.");
 FUNC_5(VAR_9);
 return 0;
}
