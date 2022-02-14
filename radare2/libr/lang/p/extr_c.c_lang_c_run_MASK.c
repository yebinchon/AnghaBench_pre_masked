
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RLang ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char const*,int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (char*) ;
 int * FUNC_5 (char*,char*) ;

__attribute__((used)) static int FUNC_6(RLang *VAR_0, const char *VAR_1, int VAR_2) {
 FILE *VAR_3 = FUNC_5 (".tmp.c", "w");
 if (VAR_3) {
  FUNC_2 ("#include <r_core.h>\n\nvoid entry(RCore *core, int argc, const char **argv) {\n", VAR_3);
  FUNC_2 (VAR_1, VAR_3);
  FUNC_2 ("\n}\n", VAR_3);
  FUNC_1 (VAR_3);
  FUNC_3 (VAR_0, ".tmp.c");
  FUNC_4 (".tmp.c");
 } else FUNC_0 ("Cannot open .tmp.c\n");
 return 1;
}
