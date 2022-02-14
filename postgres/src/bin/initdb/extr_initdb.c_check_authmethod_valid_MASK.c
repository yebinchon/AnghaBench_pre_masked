
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,char const*) ;
 int FUNC_2 (char const*,char) ;
 scalar_t__ FUNC_3 (char const*,char const* const) ;
 scalar_t__ FUNC_4 (char const*,char const* const,char const*) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_0, const char *const *VAR_1, const char *VAR_2)
{
 const char *const *VAR_3;

 for (VAR_3 = VAR_1; *VAR_3; VAR_3++)
 {
  if (FUNC_3(VAR_0, *VAR_3) == 0)
   return;

  if (FUNC_2(VAR_0, ' '))
   if (FUNC_4(VAR_0, *VAR_3, (VAR_0 - FUNC_2(VAR_0, ' '))) == 0)
    return;
 }

 FUNC_1("invalid authentication method \"%s\" for \"%s\" connections",
     VAR_0, VAR_2);
 FUNC_0(1);
}
