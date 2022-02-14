
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**) ;
 char** FUNC_1 (int) ;
 char** FUNC_2 (char**,int) ;

char** FUNC_3 (char *VAR_0, int *VAR_1)
{
    char *VAR_2, *VAR_3;
    int VAR_4 = 8, VAR_5 = 0, VAR_6 = 0;
    char **VAR_7;

    if (VAR_0 == ((void*)0) || VAR_0[0] == '\0') {
        if (VAR_1 != ((void*)0)) {
          *VAR_1 = 0;
        }
        return ((void*)0);
    }

    VAR_7 = FUNC_1 (sizeof(char *) * VAR_4);
    if (VAR_7 == ((void*)0)) {
      return ((void*)0);
    }

    VAR_2 = VAR_0;
    while (!VAR_6) {
        for (VAR_3 = VAR_2; *VAR_3 != ' ' && *VAR_3 != '\0'; ++VAR_3) ;

        if (*VAR_3 == '\0')
            VAR_6 = 1;
        else
            *VAR_3 = '\0';

        VAR_7[VAR_5++] = VAR_2;
        if (!VAR_6 && VAR_5 == VAR_4) {
            VAR_4 <<= 1;
            char** VAR_8 = FUNC_2 (VAR_7, sizeof(char *) * VAR_4);
            if (VAR_8 == ((void*)0)) {
              FUNC_0(VAR_7);
              return ((void*)0);
            }
            VAR_7 = VAR_8;
        }

        VAR_2 = VAR_3 + 1;
    }

    if (VAR_1 != ((void*)0)) {
      *VAR_1 = VAR_5;
    }

    return VAR_7;
}
