
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;

void
FUNC_2(char *VAR_0, char VAR_1, char VAR_2, int VAR_3)
{
 char *VAR_4;
 char *VAR_5;

 FUNC_0(VAR_0 != ((void*)0));
 FUNC_0(VAR_1 != '\0');

 VAR_4 = VAR_5 = VAR_0;

 if (*VAR_4 && *VAR_4 == VAR_1)
  VAR_4++;

 while (*VAR_4)
 {
  char VAR_6 = *VAR_4;
  int VAR_7;

  if (VAR_6 == VAR_1 && VAR_4[1] == '\0')
   break;
  else if (VAR_6 == VAR_1 && VAR_4[1] == VAR_1)
   VAR_4++;
  else if (VAR_6 == VAR_2 && VAR_4[1] != '\0')
   VAR_4++;

  VAR_7 = FUNC_1(VAR_4, VAR_3);
  while (VAR_7--)
   *VAR_5++ = *VAR_4++;
 }

 *VAR_5 = '\0';
}
