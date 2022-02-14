
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,int *) ;
 int * VAR_0 ;

int FUNC_2(FILE *VAR_1, const char *VAR_2, const char *VAR_3, bool *VAR_4) {
        int VAR_5;

        FUNC_0(VAR_2);






        if (!VAR_1)
                VAR_1 = VAR_0;

        if (VAR_4) {
                if (!VAR_3)
                        VAR_3 = " ";

                if (*VAR_4) {
                        VAR_5 = FUNC_1(VAR_3, VAR_1);
                        if (VAR_5 < 0)
                                return VAR_5;
                }

                *VAR_4 = 1;
        }

        return FUNC_1(VAR_2, VAR_1);
}
