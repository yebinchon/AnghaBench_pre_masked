
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* PBYTE ;
typedef int DWORD ;
typedef int BYTE ;



__attribute__((used)) static __inline void
FUNC_0(PBYTE VAR_0, DWORD VAR_1)
{
    const PBYTE VAR_2 = &VAR_0[VAR_1 / sizeof(BYTE) - 1];
    PBYTE VAR_3 = VAR_0;

    while (*VAR_3)
    {
        if (VAR_3 == VAR_2)
        {
            *VAR_3 = 0;
            break;
        }

        VAR_3++;
    }
}
