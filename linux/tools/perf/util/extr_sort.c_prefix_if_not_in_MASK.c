
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char**,char*,char const*,char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char const*) ;

__attribute__((used)) static char *FUNC_3(const char *VAR_0, char *VAR_1)
{
 char *VAR_2;

 if (!VAR_1 || FUNC_2(VAR_1, VAR_0))
  return VAR_1;

 if (FUNC_0(&VAR_2, "%s,%s", VAR_0, VAR_1) < 0)
  return ((void*)0);

 FUNC_1(VAR_1);
 return VAR_2;
}
