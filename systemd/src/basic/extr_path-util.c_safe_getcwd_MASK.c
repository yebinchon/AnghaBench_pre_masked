
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 () ;
 int FUNC_2 () ;

int FUNC_3(char **VAR_1) {
        char *VAR_2;

        VAR_2 = FUNC_1();
        if (!VAR_2)
                return FUNC_2();



        if (VAR_2[0] != '/') {
                FUNC_0(VAR_2);
                return -VAR_0;
        }

        *VAR_1 = VAR_2;
        return 0;
}
