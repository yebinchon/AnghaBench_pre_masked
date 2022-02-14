
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**,size_t,char*,int ,char const*,char const*) ;
 int VAR_0 ;

char *FUNC_1(const char *VAR_1, char *VAR_2, size_t VAR_3)
{
 char *VAR_4 = VAR_2;
 int VAR_5 = FUNC_0(&VAR_2, VAR_3, "%s/.build-id/%.2s/%s", VAR_0,
       VAR_1, VAR_1 + 2);
 if (VAR_5 < 0 || (VAR_4 && VAR_3 < (unsigned int)VAR_5))
  return ((void*)0);
 return VAR_2;
}
