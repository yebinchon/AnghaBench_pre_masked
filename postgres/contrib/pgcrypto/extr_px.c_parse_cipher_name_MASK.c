
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*,char) ;
 scalar_t__ FUNC_1 (char*,char*) ;

__attribute__((used)) static int
FUNC_2(char *VAR_2, char **VAR_3, char **VAR_4)
{
 char *VAR_5,
      *VAR_6,
      *VAR_7;

 *VAR_3 = VAR_2;
 *VAR_4 = ((void*)0);

 VAR_5 = FUNC_0(VAR_2, '/');
 if (VAR_5 != ((void*)0))
  *VAR_5++ = 0;
 while (VAR_5 != ((void*)0))
 {
  if ((VAR_7 = FUNC_0(VAR_5, '/')) != ((void*)0))
   *VAR_7++ = 0;

  if (!*VAR_5)
  {
   VAR_5 = VAR_7;
   continue;
  }
  VAR_6 = FUNC_0(VAR_5, ':');
  if (VAR_6 != ((void*)0))
  {
   *VAR_6++ = 0;
   if (FUNC_1(VAR_5, "pad") == 0)
    *VAR_4 = VAR_6;
   else
    return VAR_1;
  }
  else
   return VAR_0;

  VAR_5 = VAR_7;
 }
 return 0;
}
