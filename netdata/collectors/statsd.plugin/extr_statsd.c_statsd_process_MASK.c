
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,size_t,char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,char const*,size_t) ;
 int FUNC_3 (char const*,char*) ;
 char* FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*,char,char) ;
 int FUNC_6 (int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static inline size_t FUNC_8(char *VAR_1, size_t VAR_2, int VAR_3) {
    VAR_1[VAR_2] = '\0';
    FUNC_0(VAR_0, "RECEIVED: %zu bytes: '%s'", VAR_2, VAR_1);

    const char *VAR_4 = VAR_1;
    while(*VAR_4) {
        const char *VAR_5 = ((void*)0), *VAR_6 = ((void*)0), *VAR_7 = ((void*)0), *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
        char *VAR_10 = ((void*)0), *VAR_11 = ((void*)0), *VAR_12 = ((void*)0), *VAR_13 = ((void*)0), *VAR_14 = ((void*)0);

        VAR_4 = VAR_10 = (char *)FUNC_5(VAR_5 = VAR_4, ':', '|');
        if(VAR_5 == VAR_10) {
            VAR_4 = FUNC_4(VAR_4);
            continue;
        }

        if(FUNC_1(*VAR_4 == ':'))
            VAR_4 = VAR_11 = (char *) FUNC_5(VAR_6 = ++VAR_4, '|', '|');

        if(FUNC_1(*VAR_4 == '|'))
            VAR_4 = VAR_12 = (char *) FUNC_5(VAR_7 = ++VAR_4, '|', '@');

        if(FUNC_1(*VAR_4 == '|' || *VAR_4 == '@')) {
            VAR_4 = VAR_13 = (char *) FUNC_5(VAR_8 = ++VAR_4, '|', '#');
            if(*VAR_8 == '@') VAR_8++;
        }

        if(FUNC_1(*VAR_4 == '|' || *VAR_4 == '#')) {
            VAR_4 = VAR_14 = (char *) FUNC_5(VAR_9 = ++VAR_4, '|', '|');
            if(*VAR_9 == '#') VAR_9++;
        }


        while(*VAR_4 && *VAR_4 != '\n') VAR_4++;

        if(FUNC_7(VAR_3 && *VAR_4 != '\n' && VAR_4 > VAR_1)) {

            VAR_2 -= (VAR_5 - VAR_1);
            FUNC_2(VAR_1, VAR_5, VAR_2);
            return VAR_2;
        }
        else
            VAR_4 = FUNC_4(VAR_4);

        FUNC_6(
                  FUNC_3(VAR_5, VAR_10)
                , FUNC_3(VAR_6, VAR_11)
                , FUNC_3(VAR_7, VAR_12)
                , FUNC_3(VAR_8, VAR_13)
                , FUNC_3(VAR_9, VAR_14)
        );
    }

    return 0;
}
