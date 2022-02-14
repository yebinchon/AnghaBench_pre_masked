
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ BN_ULONG ;



int FUNC_0(const BN_ULONG *VAR_0, const BN_ULONG *VAR_1, int VAR_2)
{
    int VAR_3;
    BN_ULONG VAR_4, VAR_5;

    if (VAR_2 == 0)
        return 0;

    VAR_4 = VAR_0[VAR_2 - 1];
    VAR_5 = VAR_1[VAR_2 - 1];
    if (VAR_4 != VAR_5)
        return ((VAR_4 > VAR_5) ? 1 : -1);
    for (VAR_3 = VAR_2 - 2; VAR_3 >= 0; VAR_3--) {
        VAR_4 = VAR_0[VAR_3];
        VAR_5 = VAR_1[VAR_3];
        if (VAR_4 != VAR_5)
            return ((VAR_4 > VAR_5) ? 1 : -1);
    }
    return 0;
}
