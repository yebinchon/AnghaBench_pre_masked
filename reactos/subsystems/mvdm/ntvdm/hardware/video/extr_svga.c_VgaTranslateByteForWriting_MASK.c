
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;
typedef int BYTE ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;

__attribute__((used)) static inline BYTE FUNC_1(BYTE VAR_7, BYTE VAR_8)
{
    BYTE VAR_9 = VAR_5[VAR_2] & 0x03;
    BYTE VAR_10 = VAR_5[VAR_0];

    if (VAR_9 == 1)
    {

        return VAR_6[VAR_8];
    }

    if (VAR_9 != 2)
    {

        BYTE VAR_11 = VAR_5[VAR_4] & 0x07;
        VAR_7 = FUNC_0(((DWORD)VAR_7 >> VAR_11) | ((DWORD)VAR_7 << (8 - VAR_11)));
    }
    else
    {

        VAR_7 = (VAR_7 & (1 << VAR_8)) ? 0xFF : 0x00;
    }

    if (VAR_9 == 0)
    {




        if (VAR_5[VAR_1] & (1 << VAR_8))
        {

            VAR_7 = (VAR_5[VAR_3] & (1 << VAR_8)) ? 0xFF : 0x00;
        }
    }

    if (VAR_9 != 3)
    {

        BYTE VAR_12 = (VAR_5[VAR_4] >> 3) & 0x03;

        if (VAR_12 == 1) VAR_7 &= VAR_6[VAR_8];
        else if (VAR_12 == 2) VAR_7 |= VAR_6[VAR_8];
        else if (VAR_12 == 3) VAR_7 ^= VAR_6[VAR_8];
    }
    else
    {

        VAR_10 &= VAR_7;


        VAR_7 = (VAR_5[VAR_3] & (1 << VAR_8)) ? 0xFF : 0x00;
    }


    VAR_7 = (VAR_7 & VAR_10) | (VAR_6[VAR_8] & (~VAR_10));


    return VAR_7;
}
