
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;


 int FUNC_0 (int) ;

ULONG
FUNC_1(ULONG VAR_0)
{
    ULONG VAR_1 = 0;

    FUNC_0(VAR_0 > 0);

    while (VAR_0) {
        VAR_1++;
        VAR_0 >>= 1;
    }

    return (VAR_1 - 1);
}
