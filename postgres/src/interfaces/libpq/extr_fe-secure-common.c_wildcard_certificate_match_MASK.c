
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char const*) ;
 char const* FUNC_1 (char const*,char) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static bool
FUNC_3(const char *VAR_0, const char *VAR_1)
{
 int VAR_2 = FUNC_2(VAR_0);
 int VAR_3 = FUNC_2(VAR_1);


 if (VAR_2 < 3 ||
  VAR_0[0] != '*' ||
  VAR_0[1] != '.')
  return 0;


 if (VAR_2 > VAR_3)
  return 0;




 if (FUNC_0(VAR_0 + 1, VAR_1 + VAR_3 - VAR_2 + 1) != 0)
  return 0;





 if (FUNC_1(VAR_1, '.') < VAR_1 + VAR_3 - VAR_2)
  return 0;


 return 1;
}
