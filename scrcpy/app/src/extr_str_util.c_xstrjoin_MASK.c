
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char*,char const*,size_t) ;

size_t
FUNC_1(char *VAR_0, const char *const VAR_1[], char VAR_2, size_t VAR_3) {
    const char *const *VAR_4 = VAR_1;
    const char *VAR_5 = *VAR_4++;
    size_t VAR_6 = 0;
    while (VAR_5) {
        if (VAR_6) {
            VAR_0[VAR_6++] = VAR_2;
            if (VAR_6 == VAR_3)
                goto truncated;
        }
        size_t VAR_7 = FUNC_0(VAR_0 + VAR_6, VAR_5, VAR_3 - VAR_6);
        if (VAR_7 >= VAR_3 - VAR_6)
            goto truncated;
        VAR_6 += VAR_7;
        VAR_5 = *VAR_4++;
    }
    return VAR_6;

truncated:
    VAR_0[VAR_3 - 1] = '\0';
    return VAR_3;
}
