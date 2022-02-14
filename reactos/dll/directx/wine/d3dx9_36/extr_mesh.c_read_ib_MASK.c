
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t WORD ;
typedef size_t DWORD ;
typedef scalar_t__ BOOL ;



__attribute__((used)) static inline DWORD FUNC_0(void *VAR_0, BOOL VAR_1,
                            DWORD VAR_2)
{
    if (VAR_1)
    {
        DWORD *VAR_3 = VAR_0;
        return VAR_3[VAR_2];
    }
    else
    {
        WORD *VAR_4 = VAR_0;
        return VAR_4[VAR_2];
    }
}
