
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**) ;
 char** FUNC_1 (int) ;
 char** FUNC_2 (char**,int) ;

char** FUNC_3 (char *VAR_0, int *VAR_1, char VAR_2)
{
    char *VAR_3, *VAR_4;
    int VAR_5 = 8, VAR_6 = 0, VAR_7 = 0;
    char **VAR_8;

    if (VAR_0 == ((void*)0) || VAR_0[0] == '\0') {
        *VAR_1 = 0;
        return ((void*)0);
    }

    VAR_8 = FUNC_1 (sizeof(char *) * VAR_5);
    if (VAR_8 == ((void*)0)) {
      return ((void*)0);
    }

    VAR_3 = VAR_0;
    while (!VAR_7) {
        for (VAR_4 = VAR_3; *VAR_4 != VAR_2 && *VAR_4 != '\0'; ++VAR_4) ;

        if (*VAR_4 == '\0')
            VAR_7 = 1;
        else
            *VAR_4 = '\0';

        VAR_8[VAR_6++] = VAR_3;
        if (!VAR_7 && VAR_6 == VAR_5) {
            VAR_5 <<= 1;
            char** VAR_9 = FUNC_2 (VAR_8, sizeof(char *) * VAR_5);
            if (VAR_9 == ((void*)0)) {
              FUNC_0(VAR_8);
              return ((void*)0);
            }
            VAR_8 = VAR_9;
        }

        VAR_3 = VAR_4 + 1;
    }

    if (VAR_1 != ((void*)0)) {
      *VAR_1 = VAR_6;
    }

    return VAR_8;
}
