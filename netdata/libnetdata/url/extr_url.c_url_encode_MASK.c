
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char) ;
 char* FUNC_2 (int) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 void* FUNC_5 (char) ;

char *FUNC_6(char *VAR_0) {
    char *VAR_1, *VAR_2;

    VAR_2 = VAR_1 = FUNC_2(FUNC_4(VAR_0) * 3 + 1);

    while (*VAR_0) {
        if (FUNC_1(*VAR_0) || *VAR_0 == '-' || *VAR_0 == '_' || *VAR_0 == '.' || *VAR_0 == '~')
            *VAR_2++ = *VAR_0;

        else if (*VAR_0 == ' ')
            *VAR_2++ = '+';

        else
            *VAR_2++ = '%', *VAR_2++ = FUNC_5(*VAR_0 >> 4), *VAR_2++ = FUNC_5(*VAR_0 & 15);

        VAR_0++;
    }
    *VAR_2 = '\0';

    VAR_2 = FUNC_3(VAR_1);
    FUNC_0(VAR_1);
    return VAR_2;
}
