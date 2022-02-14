
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char const*) ;
 char* FUNC_6 (char*,int) ;
 char* FUNC_7 (char const*,char) ;
 char* FUNC_8 (char const*) ;
 char* FUNC_9 (char const*,int) ;

int FUNC_10(const char *VAR_2, char **VAR_3, char **VAR_4) {
        char *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
        const char *VAR_7;

        FUNC_0(VAR_2);

        if (*VAR_2 == '/') {
                if (!FUNC_5(VAR_2))
                        return -VAR_0;

                if (VAR_4) {
                        VAR_5 = FUNC_8(VAR_2);
                        if (!VAR_5)
                                return -VAR_1;

                        *VAR_4 = FUNC_6(VAR_5, 0);
                }

                if (VAR_3)
                        *VAR_3 = ((void*)0);

                return 0;
        }

        VAR_7 = FUNC_7(VAR_2, ':');
        if (!VAR_7) {
                if (!FUNC_1(VAR_2))
                        return -VAR_0;

                if (VAR_3) {
                        VAR_5 = FUNC_8(VAR_2);
                        if (!VAR_5)
                                return -VAR_1;

                        *VAR_3 = VAR_5;
                }

                if (VAR_4)
                        *VAR_4 = ((void*)0);

                return 0;
        }

        VAR_5 = FUNC_9(VAR_2, VAR_7-VAR_2);
        if (!VAR_5)
                return -VAR_1;
        if (!FUNC_1(VAR_5)) {
                FUNC_2(VAR_5);
                return -VAR_0;
        }

        if (FUNC_3(VAR_7+1))
                VAR_6 = ((void*)0);
        else {
                VAR_6 = FUNC_8(VAR_7+1);
                if (!VAR_6) {
                        FUNC_2(VAR_5);
                        return -VAR_1;
                }

                if (!FUNC_5(VAR_6) ||
                    !FUNC_4(VAR_6)) {
                        FUNC_2(VAR_5);
                        FUNC_2(VAR_6);
                        return -VAR_0;
                }

                FUNC_6(VAR_6, 0);
        }

        if (VAR_3)
                *VAR_3 = VAR_5;
        else
                FUNC_2(VAR_5);

        if (VAR_4)
                *VAR_4 = VAR_6;
        else
                FUNC_2(VAR_6);

        return 0;
}
