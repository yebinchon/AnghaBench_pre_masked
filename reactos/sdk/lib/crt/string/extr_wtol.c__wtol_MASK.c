
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int const,int ) ;

long
FUNC_1(const wchar_t *VAR_1)
{
    unsigned long VAR_2 = 0;
    char VAR_3 = 0;

    if (VAR_1 == ((void*)0))
        return 0;

    while (FUNC_0(*VAR_1, VAR_0) ) {
        VAR_1++;
    }

    if (*VAR_1 == L'+') {
        VAR_1++;
    } else if (*VAR_1 == L'-') {
        VAR_3 = 1;
        VAR_1++;
    }

    while (*VAR_1 >= L'0' && *VAR_1 <= L'9') {
        VAR_2 = VAR_2 * 10 + *VAR_1 - L'0';
        VAR_1++;
    }

    return VAR_3 ? 0-VAR_2 : VAR_2;
}
