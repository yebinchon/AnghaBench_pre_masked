
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (char const*,char) ;
 int FUNC_5 (char const*) ;

char *
FUNC_6(const char *VAR_0, const char *VAR_1,
    char VAR_2, char VAR_3, int VAR_4)
{
 const char *VAR_5;
 char *VAR_6;
 char *VAR_7;
 bool VAR_8 = 0;

 FUNC_0(VAR_0 != ((void*)0));
 FUNC_0(VAR_2 != '\0');

 VAR_5 = VAR_0;
 VAR_7 = VAR_6 = FUNC_3(2 * FUNC_5(VAR_5) + 3);

 *VAR_7++ = VAR_2;

 while (*VAR_5)
 {
  char VAR_9 = *VAR_5;
  int VAR_10;

  if (VAR_9 == VAR_2)
  {
   VAR_8 = 1;
   *VAR_7++ = VAR_2;
  }
  else if (VAR_9 == VAR_3)
  {
   VAR_8 = 1;
   *VAR_7++ = VAR_3;
  }
  else if (FUNC_4(VAR_1, VAR_9))
   VAR_8 = 1;

  VAR_10 = FUNC_1(VAR_5, VAR_4);
  while (VAR_10--)
   *VAR_7++ = *VAR_5++;
 }

 *VAR_7++ = VAR_2;
 *VAR_7 = '\0';

 if (!VAR_8)
 {
  FUNC_2(VAR_6);
  VAR_6 = ((void*)0);
 }

 return VAR_6;
}
