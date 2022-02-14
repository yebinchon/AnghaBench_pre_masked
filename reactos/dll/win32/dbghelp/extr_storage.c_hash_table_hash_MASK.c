
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned FUNC_0(const char* VAR_0, unsigned VAR_1)
{
    unsigned VAR_2 = 0;
    while (*VAR_0)
    {
        VAR_2 += *VAR_0++;
        VAR_2 += (VAR_2 << 10);
        VAR_2 ^= (VAR_2 >> 6);
    }
    VAR_2 += (VAR_2 << 3);
    VAR_2 ^= (VAR_2 >> 11);
    VAR_2 += (VAR_2 << 15);
    return VAR_2 % VAR_1;
}
