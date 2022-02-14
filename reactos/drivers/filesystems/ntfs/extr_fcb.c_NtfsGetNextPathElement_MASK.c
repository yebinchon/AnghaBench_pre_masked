
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* PCWSTR ;



__attribute__((used)) static
PCWSTR
FUNC_0(PCWSTR VAR_0)
{
    if (*VAR_0 == L'\0')
    {
        return ((void*)0);
    }

    while (*VAR_0 != L'\0' && *VAR_0 != L'\\')
    {
        VAR_0++;
    }

    return VAR_0;
}
