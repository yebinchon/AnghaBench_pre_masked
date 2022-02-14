
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_ULONG ;



BN_ULONG FUNC_0(BN_ULONG *VAR_0, const BN_ULONG *VAR_1, const BN_ULONG *VAR_2,
                      int VAR_3)
{
    BN_ULONG VAR_4;
    size_t VAR_5 = 0;

    if (VAR_3 <= 0)
        return 0;

    asm volatile ("       subq    %0,%0           \n"
                  "       jmp     1f              \n"
                  ".p2align 4                     \n"
                  "1:     movq    (%4,%2,8),%0    \n"
                  "       adcq    (%5,%2,8),%0    \n"
                  "       movq    %0,(%3,%2,8)    \n"
                  "       lea     1(%2),%2        \n"
                  "       dec     %1              \n"
                  "       jnz     1b              \n"
                  "       sbbq    %0,%0           \n"
                  :"=&r" (VAR_4), "+c"(VAR_3), "+r"(VAR_5)
                  :"r"(VAR_0), "r"(VAR_1), "r"(VAR_2)
                  :"cc", "memory");

    return VAR_4 & 1;
}
