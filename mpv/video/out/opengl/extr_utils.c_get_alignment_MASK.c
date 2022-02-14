
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(int VAR_0)
{
    if (VAR_0 % 8 == 0)
        return 8;
    if (VAR_0 % 4 == 0)
        return 4;
    if (VAR_0 % 2 == 0)
        return 2;
    return 1;
}
