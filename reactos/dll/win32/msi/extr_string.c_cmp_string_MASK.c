
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WCHAR ;



__attribute__((used)) static inline int FUNC_0( const WCHAR *VAR_0, int VAR_1, const WCHAR *VAR_2, int VAR_3 )
{
    if (VAR_1 < VAR_3) return -1;
    else if (VAR_1 > VAR_3) return 1;
    while (VAR_1)
    {
        if (*VAR_0 == *VAR_2) { VAR_0++; VAR_2++; }
        else return *VAR_0 - *VAR_2;
        VAR_1--;
    }
    return 0;
}
