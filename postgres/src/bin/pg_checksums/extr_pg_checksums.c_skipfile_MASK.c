
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** VAR_0 ;
 scalar_t__ FUNC_0 (char const* const,char const*) ;

__attribute__((used)) static bool
FUNC_1(const char *VAR_1)
{
 const char *const *VAR_2;

 for (VAR_2 = VAR_0; *VAR_2; VAR_2++)
  if (FUNC_0(*VAR_2, VAR_1) == 0)
   return 1;

 return 0;
}
