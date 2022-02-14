
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;

void FUNC_1(char *VAR_0, const char *VAR_1, size_t VAR_2) {
    const char *VAR_3;
    char *VAR_4 = VAR_0, *VAR_5 = &VAR_0[VAR_2 - 1];

    for(VAR_3 = VAR_1; *VAR_3 && VAR_4 < VAR_5 ;VAR_3++) {
        if(FUNC_0(*VAR_3 == '\\' || *VAR_3 == '"')) {
            if(FUNC_0(VAR_4 + 1 >= VAR_5)) break;
            *VAR_4++ = '\\';
        }
        *VAR_4++ = *VAR_3;
    }

    *VAR_4 = '\0';
}
