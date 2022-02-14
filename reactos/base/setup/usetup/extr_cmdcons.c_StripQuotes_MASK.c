
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef char* LPSTR ;



__attribute__((used)) static
VOID
FUNC_0(
    LPSTR VAR_0)
{
    LPSTR VAR_1 = VAR_0;

    for (; *VAR_0; VAR_0++)
    {
        if (*VAR_0 != '"')
            *VAR_1++ = *VAR_0;
    }

    *VAR_1 = '\0';
}
