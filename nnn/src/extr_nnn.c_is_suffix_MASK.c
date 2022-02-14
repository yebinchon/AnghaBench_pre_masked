
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 size_t FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char const*) ;

__attribute__((used)) static bool FUNC_2(const char *VAR_1, const char *VAR_2)
{
 if (!VAR_1 || !VAR_2)
  return VAR_0;

 size_t VAR_3 = FUNC_0(VAR_1);
 size_t VAR_4 = FUNC_0(VAR_2);

 if (VAR_4 > VAR_3)
  return VAR_0;

 return (FUNC_1(VAR_1 + (VAR_3 - VAR_4), VAR_2) == 0);
}
