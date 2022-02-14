
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;


 int FUNC_0 (int) ;
 char* FUNC_1 (char*,char*) ;
 int FUNC_2 (char const*,char**) ;
 char* FUNC_3 (scalar_t__,char*) ;

int FUNC_4(pid_t VAR_0, char **VAR_1) {
        const char *VAR_2;
        char *VAR_3;
        int VAR_4;

        FUNC_0(VAR_0 >= 0);

        VAR_2 = FUNC_3(VAR_0, "exe");
        VAR_4 = FUNC_2(VAR_2, VAR_1);
        if (VAR_4 < 0)
                return VAR_4;

        VAR_3 = FUNC_1(*VAR_1, " (deleted)");
        if (VAR_3)
                *VAR_3 = '\0';

        return 0;
}
