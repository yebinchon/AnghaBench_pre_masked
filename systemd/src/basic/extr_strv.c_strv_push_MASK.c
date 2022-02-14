
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char** FUNC_0 (char**,size_t,int) ;
 size_t FUNC_1 (char**) ;

int FUNC_2(char ***VAR_1, char *VAR_2) {
        char **VAR_3;
        size_t VAR_4, VAR_5;

        if (!VAR_2)
                return 0;

        VAR_4 = FUNC_1(*VAR_1);


        VAR_5 = VAR_4 + 2;
        if (VAR_5 < VAR_4)
                return -VAR_0;

        VAR_3 = FUNC_0(*VAR_1, VAR_5, sizeof(char*));
        if (!VAR_3)
                return -VAR_0;

        VAR_3[VAR_4] = VAR_2;
        VAR_3[VAR_4+1] = ((void*)0);

        *VAR_1 = VAR_3;
        return 0;
}
