
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;



uint32_t
FUNC_0 (uint64_t VAR_0)
{
    const uint64_t VAR_1 = 1073741824;
    const uint64_t VAR_2 = 1048576;

    if (VAR_0 >= (8 * VAR_1)) return 8 * VAR_2;
    if (VAR_0 >= (4 * VAR_1)) return 4 * VAR_2;
    if (VAR_0 >= (2 * VAR_1)) return 2 * VAR_2;

    return 1 * VAR_2;
}
