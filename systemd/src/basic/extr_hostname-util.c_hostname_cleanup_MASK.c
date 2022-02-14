
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char,char,char) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char) ;

char* FUNC_3(char *VAR_1) {
        char *VAR_2, *VAR_3;
        bool VAR_4, VAR_5;

        FUNC_1(VAR_1);

        for (VAR_2 = VAR_1, VAR_3 = VAR_1, VAR_4 = VAR_5 = 1; *VAR_2 && VAR_3 - VAR_1 < VAR_0; VAR_2++)
                if (*VAR_2 == '.') {
                        if (VAR_4 || VAR_5)
                                continue;

                        *(VAR_3++) = '.';
                        VAR_4 = 1;
                        VAR_5 = 0;

                } else if (*VAR_2 == '-') {
                        if (VAR_4)
                                continue;

                        *(VAR_3++) = '-';
                        VAR_4 = 0;
                        VAR_5 = 1;

                } else if (FUNC_2(*VAR_2)) {
                        *(VAR_3++) = *VAR_2;
                        VAR_4 = 0;
                        VAR_5 = 0;
                }

        if (VAR_3 > VAR_1 && FUNC_0(VAR_3[-1], '-', '.'))


                VAR_3--;
        *VAR_3 = 0;

        return VAR_1;
}
