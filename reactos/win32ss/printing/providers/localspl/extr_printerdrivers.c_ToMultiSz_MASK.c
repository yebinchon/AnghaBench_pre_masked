
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* LPWSTR ;



__attribute__((used)) static void
FUNC_0(LPWSTR VAR_0)
{
    while (*VAR_0)
    {
        if (*VAR_0 == '|')
            *VAR_0 = '\0';
        VAR_0++;
    }
}
