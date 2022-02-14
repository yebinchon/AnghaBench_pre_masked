
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;

__attribute__((used)) static int FUNC_0(const unsigned char **VAR_1, int *VAR_2, long *VAR_3,
                           long VAR_4)
{
    const unsigned char *VAR_5 = *VAR_1;
    unsigned long VAR_6 = 0;
    int VAR_7;

    if (VAR_4-- < 1)
        return 0;
    if (*VAR_5 == 0x80) {
        *VAR_2 = 1;
        VAR_5++;
    } else {
        *VAR_2 = 0;
        VAR_7 = *VAR_5 & 0x7f;
        if (*VAR_5++ & 0x80) {
            if (VAR_4 < VAR_7 + 1)
                return 0;

            while (VAR_7 > 0 && *VAR_5 == 0) {
                VAR_5++;
                VAR_7--;
            }
            if (VAR_7 > (int)sizeof(long))
                return 0;
            while (VAR_7 > 0) {
                VAR_6 <<= 8;
                VAR_6 |= *VAR_5++;
                VAR_7--;
            }
            if (VAR_6 > VAR_0)
                return 0;
        } else
            VAR_6 = VAR_7;
    }
    *VAR_1 = VAR_5;
    *VAR_3 = (long)VAR_6;
    return 1;
}
