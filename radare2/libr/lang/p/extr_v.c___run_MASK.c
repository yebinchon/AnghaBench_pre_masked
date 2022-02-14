
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
 char* VAR_0 ;
 int FUNC_4 (char*) ;
 int * FUNC_5 (char*,char*) ;
 char* VAR_1 ;

__attribute__((used)) static int FUNC_6(RLang *VAR_2, const char *VAR_3, int VAR_4) {
 FILE *VAR_5 = FUNC_5 (".tmp.v", "w");
 if (VAR_5) {
  FUNC_2 (VAR_0, VAR_5);
  if (VAR_4 < 0) {
   FUNC_2 (VAR_3, VAR_5);
  } else {
   FUNC_2 (VAR_1, VAR_5);
   FUNC_2 (VAR_3, VAR_5);
   FUNC_2 ("}", VAR_5);
  }
  FUNC_1 (VAR_5);
  FUNC_3 (VAR_2, ".tmp.v");
  FUNC_4 (".tmp.v");
  return 1;
 }
 FUNC_0 ("Cannot open .tmp.v\n");
 return 0;
}
