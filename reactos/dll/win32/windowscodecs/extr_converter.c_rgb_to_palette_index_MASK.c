
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WICColor ;
typedef size_t UINT ;
typedef size_t DWORD ;
typedef size_t BYTE ;



__attribute__((used)) static UINT FUNC_0(BYTE VAR_0, BYTE VAR_1, BYTE VAR_2, WICColor *VAR_3, UINT VAR_4)
{
    UINT VAR_5, VAR_6, VAR_7;

    VAR_5 = ~0;
    VAR_6 = 0;

    for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
    {
        BYTE VAR_8, VAR_9, VAR_10;
        DWORD VAR_11, VAR_12, VAR_13, VAR_14;

        VAR_8 = VAR_3[VAR_7] >> 16;
        VAR_9 = VAR_3[VAR_7] >> 8;
        VAR_10 = VAR_3[VAR_7];

        VAR_11 = VAR_0 - VAR_8;
        VAR_12 = VAR_1 - VAR_9;
        VAR_13 = VAR_2 - VAR_10;

        VAR_14 = VAR_11 * VAR_11 + VAR_12 * VAR_12 + VAR_13 * VAR_13;
        if (VAR_14 == 0) return VAR_7;

        if (VAR_14 < VAR_5)
        {
            VAR_5 = VAR_14;
            VAR_6 = VAR_7;
        }
    }

    return VAR_6;
}
