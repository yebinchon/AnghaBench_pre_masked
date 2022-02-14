
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
typedef scalar_t__ gid_t ;
typedef int UserCredsFlags ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 scalar_t__ FUNC_1 (char const*,char*,char*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static int FUNC_3(
                const char **VAR_6,
                uid_t *VAR_7, gid_t *VAR_8,
                const char **VAR_9,
                const char **VAR_10,
                UserCredsFlags VAR_11) {




        if (FUNC_1(*VAR_6, "root", "0")) {
                *VAR_6 = "root";

                if (VAR_7)
                        *VAR_7 = 0;
                if (VAR_8)
                        *VAR_8 = 0;

                if (VAR_9)
                        *VAR_9 = "/root";

                if (VAR_10)
                        *VAR_10 = "/bin/sh";

                return 0;
        }

        if (FUNC_2() &&
            FUNC_1(*VAR_6, VAR_2, "65534")) {
                *VAR_6 = VAR_2;

                if (VAR_7)
                        *VAR_7 = VAR_4;
                if (VAR_8)
                        *VAR_8 = VAR_1;

                if (VAR_9)
                        *VAR_9 = FUNC_0(VAR_11, VAR_5) ? ((void*)0) : "/";

                if (VAR_10)
                        *VAR_10 = FUNC_0(VAR_11, VAR_5) ? ((void*)0) : VAR_3;

                return 0;
        }

        return -VAR_0;
}
