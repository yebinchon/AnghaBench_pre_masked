
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(unsigned char *VAR_0, size_t VAR_1, size_t VAR_2)
{
    if (VAR_0 == ((void*)0))
        return 1;

    for (VAR_0 += VAR_2 - 1; VAR_2 > 0; VAR_2--) {
        *VAR_0 = (unsigned char)(VAR_1 & 0xff);
        VAR_0--;
        VAR_1 >>= 8;
    }


    if (VAR_1 > 0)
        return 0;

    return 1;
}
