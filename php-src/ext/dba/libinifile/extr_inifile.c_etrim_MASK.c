
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,size_t) ;
 scalar_t__ FUNC_1 (char*,char) ;
 size_t FUNC_2 (char*) ;

__attribute__((used)) static char *FUNC_3(const char *VAR_0)
{
 char *VAR_1;
 size_t VAR_2;

 if (!VAR_0) {
  return ((void*)0);
 }
 VAR_1 = (char*)VAR_0;
 while (*VAR_1 && FUNC_1(" \t\r\n", *VAR_1)) {
  VAR_1++;
 }
 VAR_2 = FUNC_2(VAR_1);
 while (VAR_2 && (FUNC_1(" \t\r\n", VAR_1[VAR_2-1]))) {
  VAR_2--;
 }
 return FUNC_0(VAR_1, VAR_2);
}
