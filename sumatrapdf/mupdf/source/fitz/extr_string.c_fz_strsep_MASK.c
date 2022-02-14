
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char const*) ;

char *
FUNC_1(char **VAR_0, const char *VAR_1)
{
 char *VAR_2 = *VAR_0;
 if (!VAR_2) return ((void*)0);
 if ((*VAR_0 = FUNC_0(*VAR_0, VAR_1)) != ((void*)0))
  *((*VAR_0)++) = '\0';
 return VAR_2;
}
