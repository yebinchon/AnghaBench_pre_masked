
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WCHAR ;



__attribute__((used)) static inline int FUNC_0( const WCHAR *VAR_0, const WCHAR *VAR_1, int VAR_2 )
{
    if (VAR_2 <= 0) return 0;
    while ((--VAR_2 > 0) && *VAR_0 && (*VAR_0 == *VAR_1)) { VAR_0++; VAR_1++; }
    return *VAR_0 - *VAR_1;
}
