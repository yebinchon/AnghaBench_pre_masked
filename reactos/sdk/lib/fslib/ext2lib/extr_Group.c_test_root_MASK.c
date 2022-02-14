
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(int VAR_0, int VAR_1)
{
    if (VAR_0 == 0)
        return 1;
    while (1)
    {
        if (VAR_0 == 1)
            return 1;
        if (VAR_0 % VAR_1)
            return 0;
        VAR_0 = VAR_0 / VAR_1;
    }
}
