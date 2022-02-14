
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const) ;

int FUNC_2(const char *VAR_0, const char *VAR_1)
{
    while (VAR_0[0] && VAR_1[0]) {
        if (FUNC_0(VAR_0[0]) && FUNC_0(VAR_1[0])) {
            while (VAR_0[0] == '0')
                VAR_0++;
            while (VAR_1[0] == '0')
                VAR_1++;
            const char *VAR_2 = VAR_0, *VAR_3 = VAR_1;
            while (FUNC_0(*VAR_2))
                VAR_2++;
            while (FUNC_0(*VAR_3))
                VAR_3++;

            if ((VAR_2 - VAR_0) < (VAR_3 - VAR_1))
                return -1;
            if ((VAR_2 - VAR_0) > (VAR_3 - VAR_1))
                return 1;

            while (VAR_0 < VAR_2) {
                if (VAR_0[0] < VAR_1[0])
                    return -1;
                if (VAR_0[0] > VAR_1[0])
                    return 1;
                VAR_0++;
                VAR_1++;
            }
        } else {
            if (FUNC_1(VAR_0[0]) < FUNC_1(VAR_1[0]))
                return -1;
            if (FUNC_1(VAR_0[0]) > FUNC_1(VAR_1[0]))
                return 1;
            VAR_0++;
            VAR_1++;
        }
    }
    if (VAR_1[0])
        return -1;
    if (VAR_0[0])
        return 1;
    return 0;
}
