
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,int) ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (char*,char const*,int) ;
 char* FUNC_4 (char*,char) ;

__attribute__((used)) static int FUNC_5(const char *VAR_1)
{
 char VAR_2[VAR_0 + 1];
 char *VAR_3;

 FUNC_3(VAR_2, VAR_1, sizeof(VAR_2));
 VAR_2[sizeof(VAR_2) - 1] = 0;


 VAR_3 = FUNC_4(VAR_2, '/');
 if (!VAR_3)
  return 0;
 *(VAR_3 + 1) = 0;


 VAR_3 = VAR_2;
 while (*VAR_3 == '/')
  VAR_3++;

 while ((VAR_3 = FUNC_2(VAR_3, '/'))) {
  *VAR_3 = 0;


  if (!FUNC_0(VAR_2) && FUNC_1(VAR_2, 0755))
   return -1;

  *VAR_3 = '/';
  while (*VAR_3 == '/')
   VAR_3++;
 }

 return 0;
}
