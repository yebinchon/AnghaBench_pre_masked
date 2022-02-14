
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long ULONGLONG ;
typedef unsigned long long ULONG ;
typedef int* PULONGLONG ;
typedef int BOOLEAN ;


 int FUNC_0 (int) ;
 unsigned long long FUNC_1 (unsigned long long) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static ULONGLONG
FUNC_2(ULONGLONG VAR_1,
                  ULONGLONG VAR_2,
                  ULONGLONG VAR_3,
                  PULONGLONG VAR_4,
                  PULONGLONG VAR_5)
{
    ULONGLONG VAR_6 = VAR_1;
    ULONGLONG VAR_7 = VAR_2;
    ULONGLONG VAR_8 = 0ULL;
    ULONGLONG VAR_9 = VAR_3;
    ULONG VAR_10;

    FUNC_0(VAR_3 != 0ULL);


    *VAR_4 = *VAR_5 = 0ULL;


    if ((VAR_2 == 0ULL) && (VAR_1 < VAR_3)) return VAR_6;


    VAR_10 = FUNC_1(VAR_9);
    VAR_9 <<= VAR_10;

    while (VAR_0)
    {

        *VAR_5 <<= 1;
        *VAR_5 |= *VAR_4 >> 63;
        *VAR_4 <<= 1;


        if ((VAR_7 > VAR_9)
            || ((VAR_7 == VAR_9) && (VAR_6 >= VAR_8)))
        {
            BOOLEAN VAR_11 = VAR_6 < VAR_8;


            VAR_7 -= VAR_9;
            VAR_6 -= VAR_8;
            if (VAR_11) VAR_7--;


            *VAR_4 |= 1;


            if ((VAR_7 == 0ULL) && (VAR_6 < VAR_3)) break;
        }


        VAR_8 >>= 1;
        VAR_8 |= (VAR_9 & 1) << 63;
        VAR_9 >>= 1;
    }





    VAR_10 = FUNC_1(VAR_3);
    if (VAR_9 > 0ULL) VAR_10 += 64 - FUNC_1(VAR_9);
    else VAR_10 -= FUNC_1(VAR_8);

    if (VAR_10 >= 64)
    {
        *VAR_5 = *VAR_4;
        *VAR_4 = 0ULL;
        VAR_10 -= 64;
    }

    if (VAR_10)
    {

        *VAR_5 <<= VAR_10;
        *VAR_5 |= *VAR_4 >> (64 - VAR_10);
        *VAR_4 <<= VAR_10;
    }


    return VAR_6;
}
