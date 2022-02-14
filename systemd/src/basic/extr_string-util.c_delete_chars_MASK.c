
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char) ;

char *FUNC_1(char *VAR_1, const char *VAR_2) {
        char *VAR_3, *VAR_4;



        if (!VAR_1)
                return ((void*)0);

        if (!VAR_2)
                VAR_2 = VAR_0;

        for (VAR_3 = VAR_1, VAR_4 = VAR_1; *VAR_3; VAR_3++) {
                if (FUNC_0(VAR_2, *VAR_3))
                        continue;

                *(VAR_4++) = *VAR_3;
        }

        *VAR_4 = 0;

        return VAR_1;
}
