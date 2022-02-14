
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
struct passwd {char const* pw_shell; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char**) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ) ;
 struct passwd* FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*) ;
 char* FUNC_6 (char*,int) ;
 char* FUNC_7 (char*) ;
 char* FUNC_8 (char const*) ;
 scalar_t__ FUNC_9 () ;

int FUNC_10(char **VAR_6) {
        struct passwd *VAR_7;
        const char *VAR_8;
        char *VAR_9;
        uid_t VAR_10;

        FUNC_0(VAR_6);


        VAR_8 = FUNC_7("SHELL");
        if (VAR_8 && FUNC_5(VAR_8) && FUNC_4(VAR_8)) {
                VAR_9 = FUNC_8(VAR_8);
                if (!VAR_9)
                        return -VAR_1;

                *VAR_6 = FUNC_6(VAR_9, 1);
                return 0;
        }


        VAR_10 = FUNC_3();
        if (VAR_10 == 0) {
                VAR_9 = FUNC_8("/bin/sh");
                if (!VAR_9)
                        return -VAR_1;

                *VAR_6 = VAR_9;
                return 0;
        }
        if (FUNC_9() &&
            VAR_10 == VAR_4) {
                VAR_9 = FUNC_8(VAR_3);
                if (!VAR_9)
                        return -VAR_1;

                *VAR_6 = VAR_9;
                return 0;
        }


        VAR_5 = 0;
        VAR_7 = FUNC_2(VAR_10);
        if (!VAR_7)
                return FUNC_1(VAR_2);

        if (!FUNC_5(VAR_7->pw_shell) ||
            !FUNC_4(VAR_7->pw_shell))
                return -VAR_0;

        VAR_9 = FUNC_8(VAR_7->pw_shell);
        if (!VAR_9)
                return -VAR_1;

        *VAR_6 = FUNC_6(VAR_9, 1);
        return 0;
}
