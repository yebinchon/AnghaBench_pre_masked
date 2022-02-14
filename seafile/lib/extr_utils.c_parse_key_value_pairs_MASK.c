
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* KeyValueFunc ) (void*,char*,char*) ;


 int FUNC_0 (char*,char*) ;

void FUNC_1 (char *VAR_0, KeyValueFunc VAR_1, void *VAR_2)
{
    char *VAR_3 = VAR_0, *VAR_4, *VAR_5;
    char *VAR_6, *VAR_7;

    while (*VAR_3) {

        if (*VAR_3 == '\n') {
            ++VAR_3;
            continue;
        }

        for (VAR_4 = VAR_3; *VAR_4 != '\n' && *VAR_4; ++VAR_4) ;
        *VAR_4 = '\0';

        for (VAR_5 = VAR_3; VAR_5 < VAR_4 && *VAR_5 != ' '; ++VAR_5) ;
        if (*VAR_5 != ' ') {
            FUNC_0 ("Bad key value format: %s\n", VAR_3);
            return;
        }
        *VAR_5 = '\0';
        VAR_6 = VAR_3;
        VAR_7 = VAR_5 + 1;

        VAR_1 (VAR_2, VAR_6, VAR_7);

        VAR_3 = VAR_4 + 1;
    }
}
