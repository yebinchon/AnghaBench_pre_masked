
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;


 char const* FUNC_0 (char*,char,char,char,char) ;

__attribute__((used)) static const char *FUNC_1(DWORD VAR_0)
{
    if (!VAR_0) return "'null'";
    return FUNC_0 ("\'%c%c%c%c\'",
        (char)(VAR_0), (char)(VAR_0 >> 8),
        (char)(VAR_0 >> 16), (char)(VAR_0 >> 24));
}
