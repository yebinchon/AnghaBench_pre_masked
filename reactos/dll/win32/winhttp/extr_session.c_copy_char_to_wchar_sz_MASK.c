
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WCHAR ;
typedef int DWORD ;
typedef scalar_t__ BYTE ;



__attribute__((used)) static inline void FUNC_0(const BYTE *VAR_0, DWORD VAR_1, WCHAR *VAR_2)
{
    const BYTE *VAR_3;

    for (VAR_3 = VAR_0; VAR_0 - VAR_3 < VAR_1; VAR_0++, VAR_2++)
        *VAR_2 = *VAR_0;
    *VAR_2 = 0;
}
