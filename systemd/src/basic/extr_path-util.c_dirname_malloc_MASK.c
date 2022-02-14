
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*) ;

char* FUNC_4(const char *VAR_0) {
        char *VAR_1, *VAR_2, *VAR_3;

        FUNC_0(VAR_0);

        VAR_1 = FUNC_3(VAR_0);
        if (!VAR_1)
                return ((void*)0);

        VAR_2 = FUNC_1(VAR_1);
        FUNC_0(VAR_2);

        if (VAR_2 == VAR_1)
                return VAR_1;

        VAR_3 = FUNC_3(VAR_2);
        FUNC_2(VAR_1);

        return VAR_3;
}
