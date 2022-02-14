
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline short FUNC_0(short VAR_0, short VAR_1)
{
    int VAR_2 = VAR_0 + VAR_1;


    if (VAR_2 > 32767)
        VAR_2 = 32767;
    else if (VAR_2 < -32768)
        VAR_2 = -32768;

    return VAR_2;
}
