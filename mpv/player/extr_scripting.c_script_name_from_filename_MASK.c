
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*) ;
 char* FUNC_1 (char*,char) ;
 char* FUNC_2 (void*,char*,char*) ;
 char* FUNC_3 (void*,char const*) ;

__attribute__((used)) static char *FUNC_4(void *VAR_0, const char *VAR_1)
{
    VAR_1 = FUNC_0(VAR_1);
    if (VAR_1[0] == '@')
        VAR_1 += 1;
    char *VAR_2 = FUNC_3(VAR_0, VAR_1);

    char *VAR_3 = FUNC_1(VAR_2, '.');
    if (VAR_3)
        *VAR_3 = '\0';


    for (int VAR_4 = 0; VAR_2[VAR_4]; VAR_4++) {
        char VAR_5 = VAR_2[VAR_4];
        if (!(VAR_5 >= 'A' && VAR_5 <= 'Z') && !(VAR_5 >= 'a' && VAR_5 <= 'z') &&
            !(VAR_5 >= '0' && VAR_5 <= '9'))
            VAR_2[VAR_4] = '_';
    }
    return FUNC_2(VAR_0, "%s", VAR_2);
}
