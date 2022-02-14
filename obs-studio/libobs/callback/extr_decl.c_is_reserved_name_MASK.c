
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static bool FUNC_1(const char *VAR_0)
{
 return (FUNC_0(VAR_0, "int") == 0) || (FUNC_0(VAR_0, "float") == 0) ||
        (FUNC_0(VAR_0, "bool") == 0) || (FUNC_0(VAR_0, "ptr") == 0) ||
        (FUNC_0(VAR_0, "string") == 0) || (FUNC_0(VAR_0, "void") == 0) ||
        (FUNC_0(VAR_0, "return") == 0);
}
