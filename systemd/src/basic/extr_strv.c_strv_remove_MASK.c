
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char const*) ;

char **FUNC_3(char **VAR_0, const char *VAR_1) {
        char **VAR_2, **VAR_3;

        if (!VAR_0)
                return ((void*)0);

        FUNC_0(VAR_1);




        for (VAR_2 = VAR_3 = VAR_0; *VAR_2; VAR_2++)
                if (FUNC_2(*VAR_2, VAR_1))
                        FUNC_1(*VAR_2);
                else
                        *(VAR_3++) = *VAR_2;

        *VAR_3 = ((void*)0);
        return VAR_0;
}
