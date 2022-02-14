
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;

__attribute__((used)) static inline unsigned int FUNC_0(const void *VAR_1)
{

    unsigned int VAR_2 = (unsigned int)(long)VAR_1;
    unsigned int VAR_3 = VAR_0;

    VAR_2 = (VAR_2 ^ 61) ^ (VAR_2 >> 16);
    VAR_2 += VAR_2 << 3;
    VAR_2 ^= VAR_2 >> 4;
    VAR_2 *= VAR_3;
    VAR_2 ^= VAR_2 >> 15;
    return VAR_2;
}
