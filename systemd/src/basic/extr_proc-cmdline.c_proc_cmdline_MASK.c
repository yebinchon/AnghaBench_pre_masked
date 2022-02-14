
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char**) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int,int ,int ,char**) ;
 int FUNC_3 (char*,char**) ;
 char* FUNC_4 (char*) ;
 char* FUNC_5 (char const*) ;

int FUNC_6(char **VAR_2) {
        const char *VAR_3;
        FUNC_0(VAR_2);


        VAR_3 = FUNC_4("SYSTEMD_PROC_CMDLINE");
        if (VAR_3) {
                char *VAR_4;

                VAR_4 = FUNC_5(VAR_3);
                if (!VAR_4)
                        return -VAR_0;

                *VAR_2 = VAR_4;
                return 0;
        }

        if (FUNC_1() > 0)
                return FUNC_2(1, VAR_1, 0, VAR_2);
        else
                return FUNC_3("/proc/cmdline", VAR_2);
}
