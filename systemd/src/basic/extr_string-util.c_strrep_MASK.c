
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 char* FUNC_1 (size_t) ;
 char* FUNC_2 (char*,char const*) ;
 size_t FUNC_3 (char const*) ;

char *FUNC_4(const char *VAR_0, unsigned VAR_1) {
        size_t VAR_2;
        char *VAR_3, *VAR_4;
        unsigned VAR_5;

        FUNC_0(VAR_0);

        VAR_2 = FUNC_3(VAR_0);
        VAR_4 = VAR_3 = FUNC_1(VAR_2 * VAR_1 + 1);
        if (!VAR_3)
                return ((void*)0);

        for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
                VAR_4 = FUNC_2(VAR_4, VAR_0);

        *VAR_4 = 0;
        return VAR_3;
}
