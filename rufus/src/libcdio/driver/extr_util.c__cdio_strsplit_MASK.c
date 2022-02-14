
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*) ;
 char* FUNC_4 (char*,char*) ;

char **
FUNC_5(const char VAR_0[], char VAR_1)
{
  int VAR_2;
  char **VAR_3 = ((void*)0);
  char *VAR_4, *VAR_5;
  char VAR_6[2] = { 0, 0 };

  FUNC_1 (VAR_0 != ((void*)0));

  VAR_4 = FUNC_3(VAR_0);
  VAR_6[0] = VAR_1;

  FUNC_1 (VAR_4 != ((void*)0));

  VAR_2 = 1;
  VAR_5 = VAR_4;
  while(*VAR_5)
    if (*(VAR_5++) == VAR_1)
      VAR_2++;

  VAR_3 = FUNC_0 (VAR_2+1, sizeof (char *));
  FUNC_1 (VAR_3 != ((void*)0));

  VAR_2 = 0;
  while((VAR_5 = FUNC_4(VAR_2 ? ((void*)0) : VAR_4, VAR_6)) != ((void*)0))
    VAR_3[VAR_2++] = FUNC_3(VAR_5);

  FUNC_2(VAR_4);

  return VAR_3;
}
