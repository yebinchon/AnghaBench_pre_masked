
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RLang ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char const*,int *) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (char*) ;
 int * FUNC_5 (char*,char*) ;
 int FUNC_6 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_7(RLang *VAR_0, const char *VAR_1, int VAR_2) {
 bool VAR_3 = !FUNC_6 (VAR_1, "-s", 2);
 FILE *VAR_4 = FUNC_5 (".tmp.vala", "w");
 if (VAR_4) {
  if (VAR_3) {
   VAR_1 += 2;
  }
  FUNC_2 ("using Radare;\n\npublic static void entry(RCore core) {\n", VAR_4);
  FUNC_2 (VAR_1, VAR_4);
  FUNC_2 (";\n}\n", VAR_4);
  FUNC_1 (VAR_4);
  FUNC_3 (VAR_0, ".tmp.vala", VAR_3);
  FUNC_4 (".tmp.vala");
  return 1;
 }
 FUNC_0 ("Cannot open .tmp.vala\n");
 return 0;
}
