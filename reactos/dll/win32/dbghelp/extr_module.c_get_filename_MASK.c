
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;


 int FUNC_0 (char const*) ;

__attribute__((used)) static const WCHAR* FUNC_1(const WCHAR* VAR_0, const WCHAR* VAR_1)
{
    const WCHAR* VAR_2;

    if (!VAR_1) VAR_1 = VAR_0 + FUNC_0(VAR_0);
    for (VAR_2 = VAR_1 - 1; VAR_2 >= VAR_0; VAR_2--)
    {
        if (*VAR_2 == '/' || *VAR_2 == '\\') break;
    }
    return ++VAR_2;
}
