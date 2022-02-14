
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WCHAR ;
typedef int LONG ;
typedef size_t DWORD ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;

__attribute__((used)) static LONG FUNC_1(const void* VAR_7, BOOL VAR_8, DWORD VAR_9,
 BYTE *VAR_10, DWORD *VAR_11, DWORD *VAR_12, DWORD *VAR_13)
{
    DWORD VAR_14, VAR_15, VAR_16, VAR_17;
    BYTE VAR_18[4];
    for (VAR_14 = VAR_15 = VAR_16 = VAR_17 = 0; VAR_14 < VAR_9; ++VAR_14)
    {
        int VAR_19 = VAR_8 ? (int)((WCHAR*)VAR_7)[VAR_14] : (int)((char*)VAR_7)[VAR_14];
        int VAR_20 = FUNC_0(VAR_19);
        if (VAR_20 == VAR_0)
            goto invalid;
        if (VAR_20 == VAR_2)
            continue;


        if (VAR_17 && VAR_20 != VAR_1)
            goto invalid;


        if (VAR_20 == VAR_1 && (VAR_15 & 3) == 0)
            break;

        VAR_15 += 1;

        if (VAR_20 == VAR_1)
        {
            VAR_17 = 1;

            if ((VAR_15 & 3) == 0)
                break;
            continue;
        }


        if ((VAR_15 & 3) != 2)
            VAR_16 += 1;
    }

    if ((VAR_15 & 3) != 0 && VAR_17)
        goto invalid;

    if (VAR_10 && *VAR_11 && VAR_16 > *VAR_11)
        goto overflow;

    if (VAR_10) for (VAR_14 = VAR_15 = VAR_16 = 0; VAR_14 < VAR_9; ++VAR_14)
    {
        int VAR_21 = VAR_8 ? (int)((WCHAR*)VAR_7)[VAR_14] : (int)((char*)VAR_7)[VAR_14];
        int VAR_22 = FUNC_0(VAR_21);
        if (VAR_22 == VAR_2)
            continue;
        if (VAR_22 == VAR_1)
            break;
        VAR_18[VAR_15 & 3] = VAR_22;
        VAR_15 += 1;
        switch (VAR_15 & 3) {
        case 1:
            VAR_10[VAR_16++] = (VAR_18[0] << 2);
            break;
        case 2:
            VAR_10[VAR_16-1] = (VAR_18[0] << 2) | (VAR_18[1] >> 4);
            break;
        case 3:
            VAR_10[VAR_16++] = (VAR_18[1] << 4) | (VAR_18[2] >> 2);
            break;
        case 0:
            VAR_10[VAR_16++] = (VAR_18[2] << 6) | (VAR_18[3] >> 0);
            break;
        }
    }
    *VAR_11 = VAR_16;
    if (VAR_12)
        *VAR_12 = 0;
    if (VAR_13)
        *VAR_13 = VAR_3;
    return VAR_6;
overflow:
    return VAR_4;
invalid:
    *VAR_11 = VAR_16;
    return VAR_5;
}
