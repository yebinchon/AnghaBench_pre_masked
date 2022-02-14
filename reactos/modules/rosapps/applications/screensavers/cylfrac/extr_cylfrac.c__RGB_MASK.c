
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
float FUNC_0(float VAR_0, float VAR_1, float VAR_2)
{
    if(VAR_0 < 0.0) VAR_0 += 360.0;
        else if(VAR_0 > 360.0) VAR_0 -= 360.0;
    if(VAR_0 < 60) return VAR_1 + (VAR_2 - VAR_1) * VAR_0 / 60.0;
    if((VAR_0 >= 60 )&&(VAR_0 < 180)) return VAR_2;
    if((VAR_0 >= 180)&&(VAR_0 < 240)) return VAR_1 + (VAR_2 - VAR_1)*(240 - VAR_0) / 60.0;
    return VAR_1;
}
