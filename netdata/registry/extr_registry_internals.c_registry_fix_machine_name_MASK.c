
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (size_t*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static inline char *FUNC_3(char *VAR_0, size_t *VAR_1) {
    char *VAR_2 = VAR_0?VAR_0:"";


    while(*VAR_2 && FUNC_0(*VAR_2)) VAR_2++;


    char *VAR_3 = VAR_2;
    while(*VAR_3) {
        if(FUNC_2(FUNC_0(*VAR_3)))
            *VAR_3 = ' ';

        VAR_3++;
    }


    while(--VAR_3 >= VAR_2) {
        if(*VAR_3 == ' ')
            *VAR_3 = '\0';
        else
            break;
    }
    VAR_3++;

    if(FUNC_1(VAR_1))
        *VAR_1 = (VAR_3 - VAR_2);

    return VAR_2;
}
