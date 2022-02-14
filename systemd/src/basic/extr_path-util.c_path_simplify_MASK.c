
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char,int ,char) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (char*) ;

char *FUNC_4(char *VAR_0, bool VAR_1) {
        char *VAR_2, *VAR_3;
        bool VAR_4 = 0, VAR_5 = 0, VAR_6;

        FUNC_1(VAR_0);
        if (FUNC_2(VAR_0))
                return VAR_0;

        VAR_6 = FUNC_3(VAR_0);

        VAR_2 = VAR_0;
        if (VAR_1 && *VAR_2 == '.' && FUNC_0(VAR_2[1], 0, '/')) {
                VAR_5 = 1;
                VAR_2++;
        }

        for (VAR_3 = VAR_0; *VAR_2; VAR_2++) {

                if (*VAR_2 == '/') {
                        VAR_4 = 1;
                        continue;
                }

                if (VAR_4) {
                        if (VAR_1 && *VAR_2 == '.' && FUNC_0(VAR_2[1], 0, '/'))
                                continue;

                        VAR_4 = 0;
                        if (VAR_5)
                                VAR_5 = 0;
                        else
                                *(VAR_3++) = '/';
                }

                *(VAR_3++) = *VAR_2;
        }



        if (VAR_3 == VAR_0) {
                if (VAR_6)
                        *(VAR_3++) = '/';
                else
                        *(VAR_3++) = '.';
        }

        *VAR_3 = 0;
        return VAR_0;
}
