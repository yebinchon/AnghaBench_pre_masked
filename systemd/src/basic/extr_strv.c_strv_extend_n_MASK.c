
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char***) ;
 int FUNC_1 (char*) ;
 char** FUNC_2 (char**,size_t,int) ;
 char* FUNC_3 (char const*) ;
 size_t FUNC_4 (char**) ;

int FUNC_5(char ***VAR_1, const char *VAR_2, size_t VAR_3) {
        size_t VAR_4, VAR_5, VAR_6;
        char **VAR_7;

        FUNC_0(VAR_1);

        if (!VAR_2)
                return 0;
        if (VAR_3 == 0)
                return 0;



        VAR_6 = FUNC_4(*VAR_1);

        VAR_7 = FUNC_2(*VAR_1, VAR_6 + VAR_3 + 1, sizeof(char *));
        if (!VAR_7)
                return -VAR_0;

        *VAR_1 = VAR_7;

        for (VAR_4 = VAR_6; VAR_4 < VAR_6 + VAR_3; VAR_4++) {
                VAR_7[VAR_4] = FUNC_3(VAR_2);
                if (!VAR_7[VAR_4])
                        goto rollback;
        }

        VAR_7[VAR_4] = ((void*)0);
        return 0;

rollback:
        for (VAR_5 = VAR_6; VAR_5 < VAR_4; VAR_5++)
                FUNC_1(VAR_7[VAR_5]);

        VAR_7[VAR_6] = ((void*)0);
        return -VAR_0;
}
