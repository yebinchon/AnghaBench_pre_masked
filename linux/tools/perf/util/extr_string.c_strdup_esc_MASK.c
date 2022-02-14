
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int) ;
 char* FUNC_1 (char*,char) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (char*) ;

char *FUNC_4(const char *VAR_0)
{
 char *VAR_1, *VAR_2, *VAR_3, *VAR_4 = FUNC_2(VAR_0);

 if (!VAR_4)
  return ((void*)0);

 VAR_2 = FUNC_1(VAR_4, '\\');
 if (!VAR_2)
  return VAR_4;

 VAR_1 = VAR_2 + 1;
 do {
  if (*VAR_1 == '\0') {
   *VAR_2 = '\0';
   break;
  }
  VAR_3 = FUNC_1(VAR_1 + 1, '\\');
  if (VAR_3) {
   FUNC_0(VAR_2, VAR_1, VAR_3 - VAR_1);
   VAR_2 += VAR_3 - VAR_1;
   VAR_1 = VAR_3 + 1;
  } else
   FUNC_0(VAR_2, VAR_1, FUNC_3(VAR_1) + 1);
 } while (VAR_3);

 return VAR_4;
}
