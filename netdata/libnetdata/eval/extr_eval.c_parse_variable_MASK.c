
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;

__attribute__((used)) static inline int FUNC_1(const char **VAR_0, char *VAR_1, size_t VAR_2) {
    const char *VAR_3 = *VAR_0;


    if(*VAR_3 == '$') {
        size_t VAR_4 = 0;
        VAR_3++;

        if(*VAR_3 == '{') {


            VAR_3++;
            while (*VAR_3 && *VAR_3 != '}' && VAR_4 < VAR_2)
                VAR_1[VAR_4++] = *VAR_3++;

            if(*VAR_3 == '}')
                VAR_3++;
        }
        else {


            while (*VAR_3 && !FUNC_0(*VAR_3) && VAR_4 < VAR_2)
                VAR_1[VAR_4++] = *VAR_3++;
        }

        VAR_1[VAR_4] = '\0';

        if (VAR_1[0]) {
            *VAR_0 = VAR_3;
            return 1;
        }
    }

    return 0;
}
