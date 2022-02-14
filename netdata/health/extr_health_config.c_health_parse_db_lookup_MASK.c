
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int RRDR_GROUPING ;


 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int*) ;
 int FUNC_2 (int ,char*,size_t,char const*,char*) ;
 int FUNC_3 (char*,size_t,char const*,char*,...) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 char* FUNC_7 (char*,char*) ;
 char* FUNC_8 (char*) ;
 int FUNC_9 (char*,int ) ;

__attribute__((used)) static inline int FUNC_10(
        size_t VAR_11, const char *VAR_12, char *VAR_13,
        RRDR_GROUPING *VAR_14, int *VAR_15, int *VAR_16, int *VAR_17,
        uint32_t *VAR_18, char **VAR_19, char **VAR_20
) {
    FUNC_2(VAR_0, "Health configuration parsing database lookup %zu@%s: %s", VAR_11, VAR_12, VAR_13);

    if(*VAR_19) FUNC_4(*VAR_19);
    if(*VAR_20) FUNC_4(*VAR_20);
    *VAR_19 = ((void*)0);
    *VAR_20 = ((void*)0);
    *VAR_15 = 0;
    *VAR_16 = 0;
    *VAR_17 = 0;
    *VAR_18 = 0;

    char *VAR_21 = VAR_13, *VAR_22;


    VAR_22 = VAR_21;
    while(*VAR_21 && !FUNC_5(*VAR_21)) VAR_21++;
    while(*VAR_21 && FUNC_5(*VAR_21)) *VAR_21++ = '\0';
    if(!*VAR_21) {
        FUNC_3("Health configuration invalid chart calculation at line %zu of file '%s': expected group method followed by the 'after' time, but got '%s'",
                VAR_11, VAR_12, VAR_22);
        return 0;
    }

    if((*VAR_14 = FUNC_9(VAR_22, VAR_3)) == VAR_3) {
        FUNC_3("Health configuration at line %zu of file '%s': invalid group method '%s'",
                VAR_11, VAR_12, VAR_22);
        return 0;
    }


    VAR_22 = VAR_21;
    while(*VAR_21 && !FUNC_5(*VAR_21)) VAR_21++;
    while(*VAR_21 && FUNC_5(*VAR_21)) *VAR_21++ = '\0';

    if(!FUNC_1(VAR_22, VAR_15)) {
        FUNC_3("Health configuration at line %zu of file '%s': invalid duration '%s' after group method",
                VAR_11, VAR_12, VAR_22);
        return 0;
    }


    *VAR_17 = FUNC_0(*VAR_15);


    while(*VAR_21) {
        VAR_22 = VAR_21;
        while(*VAR_21 && !FUNC_5(*VAR_21)) VAR_21++;
        while(*VAR_21 && FUNC_5(*VAR_21)) *VAR_21++ = '\0';
        if(!*VAR_22) break;

        if(!FUNC_6(VAR_22, "at")) {
            char *VAR_23 = VAR_21;
            while(*VAR_21 && !FUNC_5(*VAR_21)) VAR_21++;
            while(*VAR_21 && FUNC_5(*VAR_21)) *VAR_21++ = '\0';

            if (!FUNC_1(VAR_23, VAR_16)) {
                FUNC_3("Health configuration at line %zu of file '%s': invalid duration '%s' for '%s' keyword",
                        VAR_11, VAR_12, VAR_23, VAR_22);
            }
        }
        else if(!FUNC_6(VAR_22, VAR_1)) {
            char *VAR_24 = VAR_21;
            while(*VAR_21 && !FUNC_5(*VAR_21)) VAR_21++;
            while(*VAR_21 && FUNC_5(*VAR_21)) *VAR_21++ = '\0';

            if (!FUNC_1(VAR_24, VAR_17)) {
                FUNC_3("Health configuration at line %zu of file '%s': invalid duration '%s' for '%s' keyword",
                        VAR_11, VAR_12, VAR_24, VAR_22);
            }
        }
        else if(!FUNC_6(VAR_22, "absolute") || !FUNC_6(VAR_22, "abs") || !FUNC_6(VAR_22, "absolute_sum")) {
            *VAR_18 |= VAR_4;
        }
        else if(!FUNC_6(VAR_22, "min2max")) {
            *VAR_18 |= VAR_7;
        }
        else if(!FUNC_6(VAR_22, "null2zero")) {
            *VAR_18 |= VAR_9;
        }
        else if(!FUNC_6(VAR_22, "percentage")) {
            *VAR_18 |= VAR_10;
        }
        else if(!FUNC_6(VAR_22, "unaligned")) {
            *VAR_18 |= VAR_8;
        }
        else if(!FUNC_6(VAR_22, "match-ids") || !FUNC_6(VAR_22, "match_ids")) {
            *VAR_18 |= VAR_5;
        }
        else if(!FUNC_6(VAR_22, "match-names") || !FUNC_6(VAR_22, "match_names")) {
            *VAR_18 |= VAR_6;
        }
        else if(!FUNC_6(VAR_22, "of")) {
            char *VAR_25 = ((void*)0);
            if(*VAR_21 && FUNC_6(VAR_21, "all") != 0) {
                VAR_25 = FUNC_7(VAR_21, " foreach");
                if(VAR_25) {
                    *VAR_25 = '\0';
                }
                *VAR_19 = FUNC_8(VAR_21);
            }

            if(!VAR_25) {
                break;
            }
            VAR_21 = ++VAR_25;
        }
        else if(!FUNC_6(VAR_22, VAR_2 )) {
            *VAR_20 = FUNC_8(VAR_21);
            break;
        }
        else {
            FUNC_3("Health configuration at line %zu of file '%s': unknown keyword '%s'",
                    VAR_11, VAR_12, VAR_22);
        }
    }

    return 1;
}
