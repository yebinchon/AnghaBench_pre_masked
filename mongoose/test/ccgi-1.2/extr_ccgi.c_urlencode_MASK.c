
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const*,char const) ;

__attribute__((used)) static char *
FUNC_2(const char *VAR_0, char *VAR_1, const char *VAR_2) {
    const char VAR_3[] = "0123456789ABCDEF";

    for (; *VAR_0 != 0; VAR_0++) {
        if (FUNC_0(*VAR_0) ||
            (VAR_2 != 0 && FUNC_1(VAR_2, *VAR_0) != 0))
        {
            *VAR_1++ = *VAR_0;
        }
        else if (*VAR_0 == ' ') {
            *VAR_1++ = '+';
        }
        else {
            *VAR_1++ = '%';
            *VAR_1++ = VAR_3[(*VAR_0 >> 4) & 0xf];
            *VAR_1++ = VAR_3[*VAR_0 & 0xf];
        }
    }
    *VAR_1 = 0;
    return VAR_1;
}
