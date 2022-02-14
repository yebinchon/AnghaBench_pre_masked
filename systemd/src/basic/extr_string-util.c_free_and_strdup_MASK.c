
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char**) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char*,char const*) ;

int FUNC_4(char **VAR_1, const char *VAR_2) {
        char *VAR_3;

        FUNC_0(VAR_1);




        if (FUNC_3(*VAR_1, VAR_2))
                return 0;

        if (VAR_2) {
                VAR_3 = FUNC_2(VAR_2);
                if (!VAR_3)
                        return -VAR_0;
        } else
                VAR_3 = ((void*)0);

        FUNC_1(*VAR_1);
        *VAR_1 = VAR_3;

        return 1;
}
