
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,char const*,int) ;
 int FUNC_5 (char const*,int) ;
 scalar_t__ FUNC_6 (char const*,char const*) ;
 char* FUNC_7 (char const*,char*) ;

__attribute__((used)) static int FUNC_8(const char *VAR_0, const char * const VAR_1[])
{
 const char *VAR_2;
 while (*VAR_1) {
  VAR_2 = *VAR_1++;
  const char *VAR_3 = VAR_2 + FUNC_3(VAR_2) - 1;


  if (*VAR_2 == '*' && *VAR_3 == '*') {
   char *VAR_4 = FUNC_0(FUNC_5(VAR_2 + 1, FUNC_3(VAR_2) - 2));
   char *VAR_5 = FUNC_7(VAR_0, VAR_4);

   FUNC_1(VAR_4);
   if (VAR_5 != ((void*)0))
    return 1;
  }

  else if (*VAR_2 == '*') {
   if (FUNC_6(VAR_0, VAR_2 + 1) == 0)
    return 1;
  }

  else if (*VAR_3 == '*') {
   if (FUNC_4(VAR_0, VAR_2, FUNC_3(VAR_2) - 1) == 0)
    return 1;
  }

  else {
   if (FUNC_2(VAR_2, VAR_0) == 0)
    return 1;
  }
 }

 return 0;
}
