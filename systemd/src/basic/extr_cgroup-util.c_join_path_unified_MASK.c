
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char**) ;
 scalar_t__ FUNC_1 (char const*) ;
 char* FUNC_2 (char*,char const*,...) ;
 char* FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_1, const char *VAR_2, char **VAR_3) {
        char *VAR_4;

        FUNC_0(VAR_3);

        if (FUNC_1(VAR_1) && FUNC_1(VAR_2))
                VAR_4 = FUNC_3("/sys/fs/cgroup");
        else if (FUNC_1(VAR_1))
                VAR_4 = FUNC_2("/sys/fs/cgroup", VAR_2);
        else if (FUNC_1(VAR_2))
                VAR_4 = FUNC_2("/sys/fs/cgroup", VAR_1);
        else
                VAR_4 = FUNC_2("/sys/fs/cgroup", VAR_1, VAR_2);
        if (!VAR_4)
                return -VAR_0;

        *VAR_3 = VAR_4;
        return 0;
}
