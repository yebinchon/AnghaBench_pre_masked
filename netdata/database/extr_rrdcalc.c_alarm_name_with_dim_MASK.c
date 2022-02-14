
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (size_t) ;
 int FUNC_1 (char*,char const*,size_t) ;

char *FUNC_2(char *VAR_0, size_t VAR_1, const char *VAR_2, size_t VAR_3) {
    char *VAR_4,*VAR_5;

    VAR_4 = FUNC_0(VAR_1 + VAR_3 + 2);
    if(VAR_4) {
        VAR_5 = VAR_4;
        FUNC_1(VAR_5, VAR_0, VAR_1);
        VAR_5 += VAR_1;

        *VAR_5++ = '_';
        FUNC_1(VAR_5, VAR_2, VAR_3);
        VAR_5 += VAR_3;
        *VAR_5 = '\0';
    } else {
        VAR_4 = VAR_0;
    }

    return VAR_4;
}
