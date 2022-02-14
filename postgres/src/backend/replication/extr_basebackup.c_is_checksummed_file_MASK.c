
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** VAR_0 ;
 scalar_t__ FUNC_0 (char const* const,char const*) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;

__attribute__((used)) static bool
FUNC_2(const char *VAR_1, const char *VAR_2)
{
 const char *const *VAR_3;


 if (FUNC_1(VAR_1, "./global/", 9) == 0 ||
  FUNC_1(VAR_1, "./base/", 7) == 0 ||
  FUNC_1(VAR_1, "/", 1) == 0)
 {

  for (VAR_3 = VAR_0; *VAR_3; VAR_3++)
   if (FUNC_0(*VAR_3, VAR_2) == 0)
    return 0;

  return 1;
 }
 else
  return 0;
}
