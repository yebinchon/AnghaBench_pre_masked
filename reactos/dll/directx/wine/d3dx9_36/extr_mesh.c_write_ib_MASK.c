
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t WORD ;
typedef size_t DWORD ;
typedef scalar_t__ BOOL ;



__attribute__((used)) static inline void FUNC_0(void *VAR_0, BOOL VAR_1,
                            DWORD VAR_2, DWORD VAR_3)
{
    if (VAR_1)
    {
        DWORD *VAR_4 = VAR_0;
        VAR_4[VAR_2] = VAR_3;
    }
    else
    {
        WORD *VAR_5 = VAR_0;
        VAR_5[VAR_2] = VAR_3;
    }
}
