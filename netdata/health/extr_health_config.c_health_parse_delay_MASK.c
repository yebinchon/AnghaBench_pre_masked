
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int*) ;
 int FUNC_1 (char*,size_t,char const*,char*,...) ;
 scalar_t__ FUNC_2 (float) ;
 scalar_t__ FUNC_3 (float,int ) ;
 scalar_t__ FUNC_4 (float) ;
 scalar_t__ FUNC_5 (char) ;
 int FUNC_6 (char*,char*) ;
 float FUNC_7 (char*,int *) ;

__attribute__((used)) static inline int FUNC_8(
        size_t VAR_0, const char *VAR_1, char *VAR_2,
        int *VAR_3,
        int *VAR_4,
        int *VAR_5,
        float *VAR_6) {

    char VAR_7 = 0;
    char VAR_8 = 0;
    char VAR_9 = 0;
    char VAR_10 = 0;

    char *VAR_11 = VAR_2;
    while(*VAR_11) {
        char *VAR_12 = VAR_11;

        while(*VAR_11 && !FUNC_5(*VAR_11)) VAR_11++;
        while(*VAR_11 && FUNC_5(*VAR_11)) *VAR_11++ = '\0';

        if(!*VAR_12) break;

        char *VAR_13 = VAR_11;
        while(*VAR_11 && !FUNC_5(*VAR_11)) VAR_11++;
        while(*VAR_11 && FUNC_5(*VAR_11)) *VAR_11++ = '\0';

        if(!FUNC_6(VAR_12, "up")) {
            if (!FUNC_0(VAR_13, VAR_3)) {
                FUNC_1("Health configuration at line %zu of file '%s': invalid value '%s' for '%s' keyword",
                        VAR_0, VAR_1, VAR_13, VAR_12);
            }
            else VAR_7 = 1;
        }
        else if(!FUNC_6(VAR_12, "down")) {
            if (!FUNC_0(VAR_13, VAR_4)) {
                FUNC_1("Health configuration at line %zu of file '%s': invalid value '%s' for '%s' keyword",
                        VAR_0, VAR_1, VAR_13, VAR_12);
            }
            else VAR_8 = 1;
        }
        else if(!FUNC_6(VAR_12, "multiplier")) {
            *VAR_6 = FUNC_7(VAR_13, ((void*)0));
            if(FUNC_4(*VAR_6) || FUNC_2(*VAR_6) || FUNC_3(*VAR_6, 0)) {
                FUNC_1("Health configuration at line %zu of file '%s': invalid value '%s' for '%s' keyword",
                        VAR_0, VAR_1, VAR_13, VAR_12);
            }
            else VAR_10 = 1;
        }
        else if(!FUNC_6(VAR_12, "max")) {
            if (!FUNC_0(VAR_13, VAR_5)) {
                FUNC_1("Health configuration at line %zu of file '%s': invalid value '%s' for '%s' keyword",
                        VAR_0, VAR_1, VAR_13, VAR_12);
            }
            else VAR_9 = 1;
        }
        else {
            FUNC_1("Health configuration at line %zu of file '%s': unknown keyword '%s'",
                    VAR_0, VAR_1, VAR_12);
        }
    }

    if(!VAR_7)
        *VAR_3 = 0;

    if(!VAR_8)
        *VAR_4 = 0;

    if(!VAR_10)
        *VAR_6 = 1.0;

    if(!VAR_9) {
        if((*VAR_5) < (*VAR_3) * (*VAR_6))
            *VAR_5 = (int)((*VAR_3) * (*VAR_6));

        if((*VAR_5) < (*VAR_4) * (*VAR_6))
            *VAR_5 = (int)((*VAR_4) * (*VAR_6));
    }

    return 1;
}
