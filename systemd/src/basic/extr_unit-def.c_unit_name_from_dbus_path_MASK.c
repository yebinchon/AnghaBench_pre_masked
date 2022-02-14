
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char const*) ;
 char* FUNC_1 (char const*,char*) ;

int FUNC_2(const char *VAR_2, char **VAR_3) {
        const char *VAR_4;
        char *VAR_5;

        VAR_4 = FUNC_1(VAR_2, "/org/freedesktop/systemd1/unit/");
        if (!VAR_4)
                return -VAR_0;

        VAR_5 = FUNC_0(VAR_4);
        if (!VAR_5)
                return -VAR_1;

        *VAR_3 = VAR_5;
        return 0;
}
