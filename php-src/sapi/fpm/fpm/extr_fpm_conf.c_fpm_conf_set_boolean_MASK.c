
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;


 char* FUNC_0 (int *) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static char *FUNC_2(zval *VAR_0, void **VAR_1, intptr_t VAR_2)
{
 char *VAR_3 = FUNC_0(VAR_0);
 long VAR_4 = !FUNC_1(VAR_3, "1");
 long VAR_5 = !FUNC_1(VAR_3, "");

 if (!VAR_4 && !VAR_5) {
  return "invalid boolean value";
 }

 * (int *) ((char *) *VAR_1 + VAR_2) = VAR_4 ? 1 : 0;
 return ((void*)0);
}
