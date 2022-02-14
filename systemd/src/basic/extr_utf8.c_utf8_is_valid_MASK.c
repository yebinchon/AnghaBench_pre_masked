
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,size_t) ;

char *FUNC_2(const char *VAR_0) {
        const char *VAR_1;

        FUNC_0(VAR_0);

        VAR_1 = VAR_0;
        while (*VAR_1) {
                int VAR_2;

                VAR_2 = FUNC_1(VAR_1, (size_t) -1);
                if (VAR_2 < 0)
                        return ((void*)0);

                VAR_1 += VAR_2;
        }

        return (char*) VAR_0;
}
