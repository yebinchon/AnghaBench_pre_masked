
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WCHAR ;
typedef scalar_t__* BSTR ;


 int FUNC_0 (scalar_t__*) ;
 scalar_t__* FUNC_1 (char const*) ;

__attribute__((used)) static const WCHAR *FUNC_2(const WCHAR *VAR_0, const char *VAR_1)
{
    BSTR VAR_2;
    const WCHAR *VAR_3 = ((void*)0);
    VAR_2 = FUNC_1(VAR_1);
    while (*VAR_0)
    {
        const WCHAR *VAR_4 = VAR_0, *VAR_5 = VAR_2;
        while (*VAR_4 && *VAR_5 && *VAR_4 == *VAR_5) { VAR_4++; VAR_5++; }
        if (!*VAR_5) {VAR_3 = VAR_0; break;}
        VAR_0++;
    }
    FUNC_0(VAR_2);
    return VAR_3;
}
