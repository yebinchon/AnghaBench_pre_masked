
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char**,char*,char const*,unsigned int) ;
 char* FUNC_1 (char const*) ;
 int VAR_0 ;

__attribute__((used)) static char *FUNC_2(const char *VAR_1, unsigned int VAR_2)
{
 char *VAR_3;

 if (!VAR_1)
  return ((void*)0);

 if (!VAR_0)
  VAR_1 = FUNC_1(VAR_1);

 if (FUNC_0(&VAR_3, "%s:%u", VAR_1, VAR_2) < 0)
  return ((void*)0);

 return VAR_3;
}
