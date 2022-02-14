
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char FUNC_0 (unsigned char) ;

unsigned int FUNC_1(const char *VAR_0, int VAR_1)
{
    unsigned int VAR_2 = 0x123;

    do {
        unsigned char VAR_3 = *VAR_0++;
        VAR_3 = FUNC_0(VAR_3);
        VAR_2 = VAR_2*101 + VAR_3;
    } while (--VAR_1);
    return VAR_2;
}
