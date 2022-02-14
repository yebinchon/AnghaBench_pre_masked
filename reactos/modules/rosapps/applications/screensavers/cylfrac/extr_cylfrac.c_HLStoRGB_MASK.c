
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (float,float,float) ;

void FUNC_1(float VAR_0, float VAR_1, float VAR_2,
              float* VAR_3, float* VAR_4, float* VAR_5)
{
    float VAR_6, VAR_7;
    if(VAR_2 <= 0.5) VAR_7 = VAR_2 * (1 + VAR_1);
        else VAR_7 = VAR_2 * (1 - VAR_1) + VAR_1;
    VAR_6 = 2 * VAR_2 - VAR_7;
    if (VAR_1 == 0.0)
    {
        *VAR_3 = VAR_2;
        *VAR_4 = VAR_2;
        *VAR_5 = VAR_2;
    } else {
        *VAR_3 = FUNC_0(VAR_0 + 120.0, VAR_6, VAR_7);
        *VAR_4 = FUNC_0(VAR_0 , VAR_6, VAR_7);
        *VAR_5 = FUNC_0(VAR_0 - 120.0, VAR_6, VAR_7);
    }
}
