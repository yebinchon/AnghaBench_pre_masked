
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*,int ,char***,int *) ;
 int FUNC_1 (char**) ;

int FUNC_2(FILE *VAR_1, const char *VAR_2, char ***VAR_3) {
        char **VAR_4 = ((void*)0);
        int VAR_5;

        VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_0, &VAR_4, ((void*)0));
        if (VAR_5 < 0) {
                FUNC_1(VAR_4);
                return VAR_5;
        }

        *VAR_3 = VAR_4;
        return 0;
}
