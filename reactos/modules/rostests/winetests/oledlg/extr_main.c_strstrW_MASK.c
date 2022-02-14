
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WCHAR ;



__attribute__((used)) static const WCHAR *FUNC_0( const WCHAR *VAR_0, const WCHAR *VAR_1 )
{
    while (*VAR_0)
    {
        const WCHAR *VAR_2 = VAR_0, *VAR_3 = VAR_1;
        while (*VAR_2 && *VAR_3 && *VAR_2 == *VAR_3) { VAR_2++; VAR_3++; }
        if (!*VAR_3) return VAR_0;
        VAR_0++;
    }
    return ((void*)0);
}
