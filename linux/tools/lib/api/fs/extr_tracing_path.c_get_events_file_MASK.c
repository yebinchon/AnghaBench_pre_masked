
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char**,char*,int ,char const*) ;
 int FUNC_1 () ;

char *FUNC_2(const char *VAR_0)
{
 char *VAR_1;

 if (FUNC_0(&VAR_1, "%d/events/%s", FUNC_1(), VAR_0) < 0)
  return ((void*)0);

 return VAR_1;
}
