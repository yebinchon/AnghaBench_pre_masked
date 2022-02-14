
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline size_t FUNC_1(char *VAR_0, const char *VAR_1, size_t VAR_2) {
    size_t VAR_3;


    VAR_2--;

    for(VAR_3 = 0; *VAR_1 && VAR_3 < VAR_2 ; VAR_0++, VAR_1++, VAR_3++) {
        register char VAR_4 = *VAR_1;

        if(FUNC_0(VAR_4 == '"' || VAR_4 == '\\' || VAR_4 == '\n')) {
            *VAR_0++ = '\\';
            VAR_3++;
        }
        *VAR_0 = VAR_4;
    }
    *VAR_0 = '\0';

    return VAR_3;
}
