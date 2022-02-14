
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int64_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;

u_int64_t FUNC_2 (u_int64_t VAR_1, u_int64_t VAR_2, u_int64_t VAR_3)
{
    int VAR_4 = 0;
    int VAR_5 = FUNC_1 (VAR_3) - 1;

    VAR_3 <<= 63 - VAR_5;

    if (VAR_1) {
        if (VAR_1 & VAR_0)
            VAR_1 ^= VAR_3;
        for (VAR_4 = 62; VAR_4 >= 0; VAR_4--)
            if (VAR_1 & ((u_int64_t) 1) << VAR_4) {
                VAR_1 ^= VAR_3 >> (63 - VAR_4);
                VAR_2 ^= VAR_3 << (VAR_4 + 1);
            }
    }
    for (VAR_4 = 63; VAR_4 >= VAR_5; VAR_4--)
    {
        if (VAR_2 & FUNC_0 (1) << VAR_4)
            VAR_2 ^= VAR_3 >> (63 - VAR_4);
    }

    return VAR_2;
}
