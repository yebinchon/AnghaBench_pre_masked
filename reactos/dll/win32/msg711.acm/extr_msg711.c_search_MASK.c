
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static short
FUNC_0(
    int VAR_0,
    const short *VAR_1,
    int VAR_2)
{
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
        if (VAR_0 <= *VAR_1++)
            return (VAR_3);
    }
    return (VAR_2);
}
