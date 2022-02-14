
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unicode_linestyle ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,char const*,size_t) ;

__attribute__((used)) static bool
FUNC_1(const char *VAR_2, size_t VAR_3,
        unicode_linestyle *VAR_4)
{
 if (FUNC_0("single", VAR_2, VAR_3) == 0)
  *VAR_4 = VAR_1;
 else if (FUNC_0("double", VAR_2, VAR_3) == 0)
  *VAR_4 = VAR_0;
 else
  return 0;
 return 1;
}
