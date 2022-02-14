
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 size_t FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,size_t) ;

int FUNC_3(char *VAR_0, size_t VAR_1, char **VAR_2, int VAR_3) {
    if(!VAR_3) {
        return 0;
    }

    int VAR_4, VAR_5;
    size_t VAR_6;
    char *VAR_7;
    char *VAR_8 = VAR_2[0];
    char VAR_9;
    size_t VAR_10 = 0;
    for(VAR_4 = 0, VAR_5=1 ; VAR_5 <= VAR_3 ; ++VAR_4, ++VAR_5) {
        if (VAR_5 != VAR_3) {
            VAR_7 = VAR_2[VAR_5];
            VAR_6 = (size_t) (VAR_7 - VAR_8);
            VAR_9 = *VAR_7;
            *VAR_7 = 0x00;
        } else {
            VAR_6 = FUNC_1(VAR_8);
            VAR_7 = ((void*)0);
        }
        VAR_6++;

        if (VAR_6 > (VAR_1 - VAR_10)) {
            FUNC_0("Parsing query string: we cannot parse a query string so big");
            break;
        }

        if(!FUNC_2(VAR_0, VAR_8, VAR_6)) {
            return -1;
        }
        VAR_6 = FUNC_1(VAR_0);
        VAR_10 += VAR_6;
        VAR_0 += VAR_6;

        VAR_8 = VAR_7;
        if (VAR_8) {
            *VAR_8 = VAR_9;
        }
    }

    return 0;
}
