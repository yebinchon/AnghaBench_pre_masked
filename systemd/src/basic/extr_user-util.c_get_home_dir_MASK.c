
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
struct passwd {char const* pw_dir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char**) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 struct passwd* FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*) ;
 char* FUNC_6 (char*,int) ;
 char* FUNC_7 (char*) ;
 char* FUNC_8 (char const*) ;
 scalar_t__ FUNC_9 () ;

int FUNC_10(char **VAR_5) {
        struct passwd *VAR_6;
        const char *VAR_7;
        char *VAR_8;
        uid_t VAR_9;

        FUNC_0(VAR_5);


        VAR_7 = FUNC_7("HOME");
        if (VAR_7 && FUNC_5(VAR_7) && FUNC_4(VAR_7)) {
                VAR_8 = FUNC_8(VAR_7);
                if (!VAR_8)
                        return -VAR_1;

                *VAR_5 = FUNC_6(VAR_8, 1);
                return 0;
        }


        VAR_9 = FUNC_3();
        if (VAR_9 == 0) {
                VAR_8 = FUNC_8("/root");
                if (!VAR_8)
                        return -VAR_1;

                *VAR_5 = VAR_8;
                return 0;
        }
        if (FUNC_9() &&
            VAR_9 == VAR_3) {
                VAR_8 = FUNC_8("/");
                if (!VAR_8)
                        return -VAR_1;

                *VAR_5 = VAR_8;
                return 0;
        }


        VAR_4 = 0;
        VAR_6 = FUNC_2(VAR_9);
        if (!VAR_6)
                return FUNC_1(VAR_2);

        if (!FUNC_5(VAR_6->pw_dir) ||
            !FUNC_4(VAR_6->pw_dir))
                return -VAR_0;

        VAR_8 = FUNC_8(VAR_6->pw_dir);
        if (!VAR_8)
                return -VAR_1;

        *VAR_5 = FUNC_6(VAR_8, 1);
        return 0;
}
