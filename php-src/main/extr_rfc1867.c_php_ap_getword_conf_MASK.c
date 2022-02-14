
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_encoding ;


 char* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char) ;
 scalar_t__ FUNC_2 (char*) ;
 char* FUNC_3 (char*,int,char) ;

__attribute__((used)) static char *FUNC_4(const zend_encoding *VAR_0, char *VAR_1)
{
 while (*VAR_1 && FUNC_1(*VAR_1)) {
  ++VAR_1;
 }

 if (!*VAR_1) {
  return FUNC_0("");
 }

 if (*VAR_1 == '"' || *VAR_1 == '\'') {
  char VAR_2 = *VAR_1;

  VAR_1++;
  return FUNC_3(VAR_1, (int)FUNC_2(VAR_1), VAR_2);
 } else {
  char *VAR_3 = VAR_1;

  while (*VAR_3 && !FUNC_1(*VAR_3)) {
   ++VAR_3;
  }
  return FUNC_3(VAR_1, VAR_3 - VAR_1, 0);
 }
}
