
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,void*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(void *VAR_0, const char *VAR_1) {
 FUNC_0 (VAR_1, VAR_0);
 char **VAR_2 = (char **)VAR_0;
 if (VAR_2 && *VAR_2) {
  int VAR_3 = FUNC_4(*VAR_2);
  char *VAR_4 = FUNC_2 (VAR_3 + 2);
  if (!VAR_4) {
   return;
  }
  FUNC_3 (VAR_4, *VAR_2);
  VAR_4[VAR_3] = '\n';
  VAR_4[VAR_3 + 1] = 0;
  FUNC_1 (*VAR_2);
  *VAR_2 = VAR_4;
 }
}
