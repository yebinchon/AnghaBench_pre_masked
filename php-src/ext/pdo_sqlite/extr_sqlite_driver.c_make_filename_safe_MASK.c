
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*) ;
 char* FUNC_2 (char const*,int *) ;
 scalar_t__ FUNC_3 (char const*,char*,int) ;
 scalar_t__ FUNC_4 (char*) ;

__attribute__((used)) static char *FUNC_5(const char *VAR_0)
{
 if (*VAR_0 && FUNC_3(VAR_0, ":memory:", sizeof(":memory:"))) {
  char *VAR_1 = FUNC_2(VAR_0, ((void*)0));

  if (!VAR_1) {
   return ((void*)0);
  }

  if (FUNC_4(VAR_1)) {
   FUNC_0(VAR_1);
   return ((void*)0);
  }
  return VAR_1;
 }
 return FUNC_1(VAR_0);
}
