
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char***) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char**,char**,size_t) ;
 char** FUNC_3 (char**,size_t,int) ;
 char* FUNC_4 (char const*) ;
 size_t FUNC_5 (char**) ;

int FUNC_6(char ***VAR_1, const char *VAR_2) {
        size_t VAR_3, VAR_4;
        char *VAR_5, **VAR_6;

        FUNC_0(VAR_1);



        if (!VAR_2)
                return 0;

        VAR_3 = FUNC_5(*VAR_1);


        VAR_4 = VAR_3 + 2;
        if (VAR_4 < VAR_3)
                return -VAR_0;

        VAR_5 = FUNC_4(VAR_2);
        if (!VAR_5)
                return -VAR_0;

        VAR_6 = FUNC_3(*VAR_1, VAR_4, sizeof(char*));
        if (!VAR_6) {
                FUNC_1(VAR_5);
                return -VAR_0;
        }

        FUNC_2(VAR_6+1, VAR_6, VAR_3 * sizeof(char*));
        VAR_6[0] = VAR_5;
        VAR_6[VAR_3+1] = ((void*)0);

        *VAR_1 = VAR_6;
        return 0;
}
