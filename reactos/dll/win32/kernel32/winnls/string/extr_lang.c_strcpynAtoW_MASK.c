
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WCHAR ;



__attribute__((used)) static inline void FUNC_0( WCHAR *VAR_0, const char *VAR_1, size_t VAR_2 )
{
    while (VAR_2 > 1 && *VAR_1)
    {
        *VAR_0++ = (unsigned char)*VAR_1++;
        VAR_2--;
    }
    if (VAR_2) *VAR_0 = 0;
}
