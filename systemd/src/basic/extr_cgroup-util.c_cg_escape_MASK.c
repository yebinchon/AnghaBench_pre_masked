
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ CGroupController ;


 scalar_t__ FUNC_0 (char const,int ,char,char) ;
 scalar_t__ FUNC_1 (char const*,char*,char*,char*) ;
 scalar_t__ VAR_0 ;
 char* FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (char const*,char const*,size_t) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 char* FUNC_5 (char const*) ;
 char* FUNC_6 (char*,char const*) ;
 size_t FUNC_7 (char const*) ;
 char* FUNC_8 (char const*,char) ;

char *FUNC_9(const char *VAR_1) {
        bool VAR_2 = 0;
        if (FUNC_0(VAR_1[0], 0, '_', '.') ||
            FUNC_1(VAR_1, "notify_on_release", "release_agent", "tasks") ||
            FUNC_4(VAR_1, "cgroup."))
                VAR_2 = 1;
        else {
                const char *VAR_3;

                VAR_3 = FUNC_8(VAR_1, '.');
                if (VAR_3) {
                        CGroupController VAR_4;
                        size_t VAR_5 = VAR_3 - VAR_1;

                        for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
                                const char *VAR_6;

                                VAR_6 = FUNC_2(VAR_4);

                                if (VAR_5 != FUNC_7(VAR_6))
                                        continue;

                                if (FUNC_3(VAR_1, VAR_6, VAR_5) != 0)
                                        continue;

                                VAR_2 = 1;
                                break;
                        }
                }
        }

        if (VAR_2)
                return FUNC_6("_", VAR_1);

        return FUNC_5(VAR_1);
}
