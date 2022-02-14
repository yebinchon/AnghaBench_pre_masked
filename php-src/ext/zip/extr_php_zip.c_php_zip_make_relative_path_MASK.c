
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;

__attribute__((used)) static char * FUNC_1(char *VAR_0, size_t VAR_1)
{
 char *VAR_2 = VAR_0;
 size_t VAR_3;

 if (VAR_1 < 1 || VAR_0 == ((void*)0)) {
  return ((void*)0);
 }

 if (FUNC_0(VAR_0[0])) {
  return VAR_0 + 1;
 }

 VAR_3 = VAR_1;

 while (1) {
  while (VAR_3 > 0 && !FUNC_0(VAR_0[VAR_3])) {
   VAR_3--;
  }

  if (!VAR_3) {
   return VAR_0;
  }

  if (VAR_3 >= 2 && (VAR_0[VAR_3 -1] == '.' || VAR_0[VAR_3 -1] == ':')) {

   VAR_2 = VAR_0 + VAR_3 + 1;
   break;
  }
  VAR_3--;
 }

 return VAR_2;
}
