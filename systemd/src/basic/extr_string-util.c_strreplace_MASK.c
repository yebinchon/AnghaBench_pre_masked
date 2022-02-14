
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,size_t,size_t) ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char const*,char const*) ;
 char* FUNC_4 (char*,char const*) ;
 size_t FUNC_5 (char const*) ;

char *FUNC_6(const char *VAR_0, const char *VAR_1, const char *VAR_2) {
        size_t VAR_3, VAR_4, VAR_5, VAR_6 = 0;
        char *VAR_7, *VAR_8 = ((void*)0);
        const char *VAR_9;

        FUNC_1(VAR_1);
        FUNC_1(VAR_2);

        if (!VAR_0)
                return ((void*)0);

        VAR_4 = FUNC_5(VAR_1);
        VAR_5 = FUNC_5(VAR_2);

        VAR_3 = FUNC_5(VAR_0);
        if (!FUNC_0(VAR_8, VAR_6, VAR_3+1))
                return ((void*)0);

        VAR_9 = VAR_0;
        VAR_7 = VAR_8;
        while (*VAR_9) {
                size_t VAR_10, VAR_11;

                if (!FUNC_3(VAR_9, VAR_1)) {
                        *(VAR_7++) = *(VAR_9++);
                        continue;
                }

                VAR_10 = VAR_7 - VAR_8;
                VAR_11 = VAR_3 - VAR_4 + VAR_5;

                if (!FUNC_0(VAR_8, VAR_6, VAR_11 + 1))
                        return FUNC_2(VAR_8);

                VAR_3 = VAR_11;
                VAR_7 = VAR_8 + VAR_10;

                VAR_7 = FUNC_4(VAR_7, VAR_2);
                VAR_9 += VAR_4;
        }

        *VAR_7 = 0;
        return VAR_8;
}
