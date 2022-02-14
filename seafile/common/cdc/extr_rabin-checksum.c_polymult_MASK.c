
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int64_t ;


 int FUNC_0 (int) ;

void FUNC_1 (u_int64_t *VAR_0, u_int64_t *VAR_1, u_int64_t VAR_2, u_int64_t VAR_3)
{
    int VAR_4;
    u_int64_t VAR_5 = 0, VAR_6 = 0;
    if (VAR_2 & 1)
        VAR_6 = VAR_3;
    for (VAR_4 = 1; VAR_4 < 64; VAR_4++)
        if (VAR_2 & (FUNC_0 (1) << VAR_4)) {
            VAR_5 ^= VAR_3 >> (64 - VAR_4);
            VAR_6 ^= VAR_3 << VAR_4;
        }
    if (VAR_0)
        *VAR_0 = VAR_5;
    if (VAR_1)
        *VAR_1 = VAR_6;
}
