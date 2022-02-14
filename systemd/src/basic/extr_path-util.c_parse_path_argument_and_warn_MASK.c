
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (int,char*,char const*) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (char const*,char**) ;
 int FUNC_6 (char*,int) ;

int FUNC_7(const char *VAR_0, bool VAR_1, char **VAR_2) {
        char *VAR_3;
        int VAR_4;
        if (FUNC_2(VAR_0)) {
                *VAR_2 = FUNC_4(*VAR_2);
                return 0;
        }

        VAR_4 = FUNC_5(VAR_0, &VAR_3);
        if (VAR_4 < 0)
                return FUNC_3(VAR_4, "Failed to parse path \"%s\" and make it absolute: %m", VAR_0);

        FUNC_6(VAR_3, 0);
        if (VAR_1 && FUNC_0(VAR_3))
                VAR_3 = FUNC_4(VAR_3);

        FUNC_1(*VAR_2, VAR_3);

        return 0;
}
