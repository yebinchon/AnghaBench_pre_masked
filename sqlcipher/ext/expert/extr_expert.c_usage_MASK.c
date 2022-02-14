
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(char **VAR_1){
  FUNC_1(VAR_0, "\n");
  FUNC_1(VAR_0, "Usage %s ?OPTIONS? DATABASE\n", VAR_1[0]);
  FUNC_1(VAR_0, "\n");
  FUNC_1(VAR_0, "Options are:\n");
  FUNC_1(VAR_0, "  -sql SQL   (analyze SQL statements passed as argument)\n");
  FUNC_1(VAR_0, "  -file FILE (read SQL statements from file FILE)\n");
  FUNC_1(VAR_0, "  -verbose LEVEL (integer verbosity level. default 1)\n");
  FUNC_1(VAR_0, "  -sample PERCENT (percent of db to sample. default 100)\n");
  FUNC_0(-1);
}
