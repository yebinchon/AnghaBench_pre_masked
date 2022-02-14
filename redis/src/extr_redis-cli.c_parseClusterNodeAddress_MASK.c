
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,char) ;

__attribute__((used)) static int FUNC_2(char *VAR_0, char **VAR_1, int *VAR_2,
                                   int *VAR_3)
{
    char *VAR_4 = FUNC_1(VAR_0, '@');
    if (VAR_4 != ((void*)0)) {
        *VAR_4 = '\0';
        if (VAR_3 != ((void*)0))
            *VAR_3 = FUNC_0(VAR_4 + 1);
    }
    VAR_4 = FUNC_1(VAR_0, ':');
    if (VAR_4 != ((void*)0)) {
        *VAR_4 = '\0';
        *VAR_1 = VAR_0;
        *VAR_2 = FUNC_0(++VAR_4);
    } else return 0;
    return 1;
}
