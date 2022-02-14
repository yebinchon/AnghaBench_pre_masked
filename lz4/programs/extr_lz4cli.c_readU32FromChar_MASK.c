
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned FUNC_0(const char** VAR_0)
{
    unsigned VAR_1 = 0;
    while ((**VAR_0 >='0') && (**VAR_0 <='9')) {
        VAR_1 *= 10;
        VAR_1 += (unsigned)(**VAR_0 - '0');
        (*VAR_0)++ ;
    }
    if ((**VAR_0=='K') || (**VAR_0=='M')) {
        VAR_1 <<= 10;
        if (**VAR_0=='M') VAR_1 <<= 10;
        (*VAR_0)++ ;
        if (**VAR_0=='i') (*VAR_0)++;
        if (**VAR_0=='B') (*VAR_0)++;
    }
    return VAR_1;
}
