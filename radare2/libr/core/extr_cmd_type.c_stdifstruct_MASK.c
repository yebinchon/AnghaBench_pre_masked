
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 char* FUNC_2 (int ,char const*,int *) ;
 char* FUNC_3 (char*,char const*) ;
 int FUNC_4 (char const*,char*) ;

__attribute__((used)) static int FUNC_5(void *VAR_1, const char *VAR_2, const char *VAR_3) {
 FUNC_0 (VAR_0, 0);
 if (!FUNC_4 (VAR_3, "struct")) {
  return 1;
 }
 if (!FUNC_4 (VAR_3, "typedef")) {
  const char *VAR_4 = FUNC_3 ("typedef.%s", VAR_2);
  const char *VAR_5 = FUNC_2 (VAR_0, VAR_4, ((void*)0));
  if (VAR_5 && FUNC_1 (VAR_5, "struct ")) {
   return 1;
  }
 }
 return 0;
}
