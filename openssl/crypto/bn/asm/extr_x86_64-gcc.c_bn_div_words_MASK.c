
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_ULONG ;



BN_ULONG FUNC_0(BN_ULONG VAR_0, BN_ULONG VAR_1, BN_ULONG VAR_2)
{
    BN_ULONG VAR_3, VAR_4;

 asm("divq      %4":"=a"(VAR_3), "=d"(VAR_4)
 : "a"(VAR_1), "d"(VAR_0), "r"(VAR_2)
 : "cc");

    return VAR_3;
}
