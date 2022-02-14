
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char**) ;
 int FUNC_1 (char*,char*) ;
 size_t FUNC_2 (char*) ;
 char* FUNC_3 (char const*,size_t) ;
 scalar_t__ FUNC_4 (char*,char const*,size_t) ;

int FUNC_5(char **VAR_1, const char *VAR_2, size_t VAR_3) {
        char *VAR_4;

        FUNC_0(VAR_1);
        FUNC_0(VAR_2 || VAR_3 == 0);




        if (!*VAR_1 && !VAR_2)
                return 0;

        if (*VAR_1 && VAR_2 && FUNC_4(*VAR_1, VAR_2, VAR_3) && (VAR_3 > FUNC_2(*VAR_1) || (*VAR_1)[VAR_3] == '\0'))
                return 0;

        if (VAR_2) {
                VAR_4 = FUNC_3(VAR_2, VAR_3);
                if (!VAR_4)
                        return -VAR_0;
        } else
                VAR_4 = ((void*)0);

        FUNC_1(*VAR_1, VAR_4);
        return 1;
}
