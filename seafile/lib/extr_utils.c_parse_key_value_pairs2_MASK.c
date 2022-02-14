
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ (* KeyValueFunc2 ) (void*,char*,char*) ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*) ;

void FUNC_1 (char *VAR_1, KeyValueFunc2 VAR_2, void *VAR_3)
{
    char *VAR_4 = VAR_1, *VAR_5, *VAR_6;
    char *VAR_7, *VAR_8;

    while (*VAR_4) {

        if (*VAR_4 == '\n') {
            ++VAR_4;
            continue;
        }

        for (VAR_5 = VAR_4; *VAR_5 != '\n' && *VAR_5; ++VAR_5) ;
        *VAR_5 = '\0';

        for (VAR_6 = VAR_4; VAR_6 < VAR_5 && *VAR_6 != ' '; ++VAR_6) ;
        if (*VAR_6 != ' ') {
            FUNC_0 ("Bad key value format: %s\n", VAR_4);
            return;
        }
        *VAR_6 = '\0';
        VAR_7 = VAR_4;
        VAR_8 = VAR_6 + 1;

        if (VAR_2(VAR_3, VAR_7, VAR_8) == VAR_0)
            break;

        VAR_4 = VAR_5 + 1;
    }
}
