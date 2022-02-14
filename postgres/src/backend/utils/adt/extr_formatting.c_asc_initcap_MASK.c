
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char FUNC_0 (unsigned char) ;
 char FUNC_1 (unsigned char) ;
 char* FUNC_2 (char const*,size_t) ;

char *
FUNC_3(const char *VAR_0, size_t VAR_1)
{
 char *VAR_2;
 char *VAR_3;
 int VAR_4 = 0;

 if (!VAR_0)
  return ((void*)0);

 VAR_2 = FUNC_2(VAR_0, VAR_1);

 for (VAR_3 = VAR_2; *VAR_3; VAR_3++)
 {
  char VAR_5;

  if (VAR_4)
   *VAR_3 = VAR_5 = FUNC_0((unsigned char) *VAR_3);
  else
   *VAR_3 = VAR_5 = FUNC_1((unsigned char) *VAR_3);

  VAR_4 = ((VAR_5 >= 'A' && VAR_5 <= 'Z') ||
     (VAR_5 >= 'a' && VAR_5 <= 'z') ||
     (VAR_5 >= '0' && VAR_5 <= '9'));
 }

 return VAR_2;
}
