
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;



__attribute__((used)) static size_t FUNC_0(unsigned char VAR_0[sizeof(uint64_t)], uint64_t VAR_1)
{
    size_t VAR_2 = sizeof(uint64_t);

    do {
        VAR_0[--VAR_2] = (unsigned char)VAR_1;
    } while (VAR_1 >>= 8);

    return VAR_2;
}
