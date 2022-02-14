
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;


 char* FUNC_0 (int *) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static char *FUNC_2(zval *VAR_0, void **VAR_1, intptr_t VAR_2)
{
 char *VAR_3 = FUNC_0(VAR_0);
 char *VAR_4;


 for (VAR_4 = VAR_3; *VAR_4; VAR_4++) {
  if (VAR_4 == VAR_3 && *VAR_4 == '-') continue;
  if (*VAR_4 < '0' || *VAR_4 > '9') {
   return "is not a valid number (greater or equal than zero)";
  }
 }
 * (int *) ((char *) *VAR_1 + VAR_2) = FUNC_1(VAR_3);
 return ((void*)0);
}
