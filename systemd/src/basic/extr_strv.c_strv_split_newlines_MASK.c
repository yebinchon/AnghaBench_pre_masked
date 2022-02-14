
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 size_t FUNC_3 (char**) ;
 char** FUNC_4 (char const*,int ) ;

char **FUNC_5(const char *VAR_1) {
        char **VAR_2;
        size_t VAR_3;

        FUNC_0(VAR_1);




        VAR_2 = FUNC_4(VAR_1, VAR_0);
        if (!VAR_2)
                return ((void*)0);

        VAR_3 = FUNC_3(VAR_2);
        if (VAR_3 <= 0)
                return VAR_2;

        if (FUNC_1(VAR_2[VAR_3 - 1]))
                VAR_2[VAR_3 - 1] = FUNC_2(VAR_2[VAR_3 - 1]);

        return VAR_2;
}
