
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 int FUNC_0 (char*,int*) ;
 int FUNC_1 (char*,size_t,char const*,char*,char*) ;
 scalar_t__ FUNC_2 (char) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static inline int FUNC_4(
        size_t VAR_0,
        const char *VAR_1,
        char *VAR_2,
        uint32_t *VAR_3,
        uint32_t *VAR_4
) {

    char *VAR_5 = VAR_2;
    while(*VAR_5) {
        char *VAR_6 = VAR_5;

        while(*VAR_5 && !FUNC_2(*VAR_5)) VAR_5++;
        while(*VAR_5 && FUNC_2(*VAR_5)) *VAR_5++ = '\0';

        if(!*VAR_6) break;

        char *VAR_7 = VAR_5;
        while(*VAR_5 && !FUNC_2(*VAR_5)) VAR_5++;
        while(*VAR_5 && FUNC_2(*VAR_5)) *VAR_5++ = '\0';

        if(!FUNC_3(VAR_6, "off")) {
            *VAR_3 = 0;
            *VAR_4 = 0;
            return 1;
        }
        if(!FUNC_3(VAR_6, "warning")) {
            if (!FUNC_0(VAR_7, (int*)VAR_3)) {
                FUNC_1("Health configuration at line %zu of file '%s': invalid value '%s' for '%s' keyword",
                      VAR_0, VAR_1, VAR_7, VAR_6);
            }
        }
        else if(!FUNC_3(VAR_6, "critical")) {
            if (!FUNC_0(VAR_7, (int*)VAR_4)) {
                FUNC_1("Health configuration at line %zu of file '%s': invalid value '%s' for '%s' keyword",
                      VAR_0, VAR_1, VAR_7, VAR_6);
            }
        }
    }

    return 1;
}
