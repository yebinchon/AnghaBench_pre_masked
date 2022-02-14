
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;



DWORD FUNC_0(DWORD VAR_0, DWORD VAR_1)
{
    if (VAR_0 <= 12800)
        return 128 * VAR_1;

    if (VAR_0 <= 25600)
        return 256 * VAR_1;

    if (VAR_0 <= 51200)
        return 512 * VAR_1;

    return 1024 * VAR_1;
}
