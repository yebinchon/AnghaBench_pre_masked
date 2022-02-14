
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int const) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;

__attribute__((used)) static BOOL FUNC_2(const BYTE *VAR_6, DWORD VAR_7,
 DWORD *VAR_8)
{
    BOOL VAR_9;

    if (VAR_7 <= 1)
    {
        FUNC_1(VAR_1);
        VAR_9 = VAR_4;
    }
    else if (VAR_6[1] <= 0x7f)
    {
        if (VAR_6[1] + 1 > VAR_7)
        {
            FUNC_1(VAR_2);
            VAR_9 = VAR_4;
        }
        else
        {
            *VAR_8 = VAR_6[1];
            VAR_9 = VAR_5;
        }
    }
    else if (VAR_6[1] == 0x80)
    {
        *VAR_8 = VAR_0;
        VAR_9 = VAR_5;
    }
    else
    {
        BYTE VAR_10 = FUNC_0(VAR_6[1]);

        if (VAR_10 > sizeof(DWORD) + 1)
        {
            FUNC_1(VAR_3);
            VAR_9 = VAR_4;
        }
        else if (VAR_10 + 2 > VAR_7)
        {
            FUNC_1(VAR_1);
            VAR_9 = VAR_4;
        }
        else
        {
            DWORD VAR_11 = 0;

            VAR_6 += 2;
            while (--VAR_10)
            {
                VAR_11 <<= 8;
                VAR_11 |= *VAR_6++;
            }
            if (VAR_11 + VAR_10 + 1 > VAR_7)
            {
                FUNC_1(VAR_2);
                VAR_9 = VAR_4;
            }
            else
            {
                *VAR_8 = VAR_11;
                VAR_9 = VAR_5;
            }
        }
    }
    return VAR_9;
}
