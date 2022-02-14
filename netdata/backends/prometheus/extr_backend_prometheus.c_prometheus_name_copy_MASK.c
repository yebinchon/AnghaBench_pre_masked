
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;

__attribute__((used)) static inline size_t FUNC_1(char *VAR_0, const char *VAR_1, size_t VAR_2) {
    size_t VAR_3;

    for(VAR_3 = 0; *VAR_1 && VAR_3 < VAR_2 ; VAR_0++, VAR_1++, VAR_3++) {
        register char VAR_4 = *VAR_1;

        if(!FUNC_0(VAR_4)) *VAR_0 = '_';
        else *VAR_0 = VAR_4;
    }
    *VAR_0 = '\0';

    return VAR_3;
}
