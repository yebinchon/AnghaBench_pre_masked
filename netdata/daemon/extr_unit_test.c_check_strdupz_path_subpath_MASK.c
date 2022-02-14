
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (char*,char const*) ;
 char* FUNC_3 (char const*,char const*) ;

int FUNC_4() {

    struct strdupz_path_subpath_checks {
        const char *path;
        const char *subpath;
        const char *result;
    } VAR_1[] = {
            { "", "", "." },
            { "/", "", "/" },
            { "/etc/netdata", "", "/etc/netdata" },
            { "/etc/netdata///", "", "/etc/netdata" },
            { "/etc/netdata///", "health.d", "/etc/netdata/health.d" },
            { "/etc/netdata///", "///health.d", "/etc/netdata/health.d" },
            { "/etc/netdata", "///health.d", "/etc/netdata/health.d" },
            { "", "///health.d", "./health.d" },
            { "/", "///health.d", "/health.d" },


            { ((void*)0), ((void*)0), ((void*)0) }
    };

    size_t VAR_2;
    for(VAR_2 = 0; VAR_1[VAR_2].result ; VAR_2++) {
        char *VAR_3 = FUNC_3(VAR_1[VAR_2].path, VAR_1[VAR_2].subpath);
        FUNC_0(VAR_0, "strdupz_path_subpath(\"%s\", \"%s\") = \"%s\": ", VAR_1[VAR_2].path, VAR_1[VAR_2].subpath, VAR_3);
        if(!VAR_3 || FUNC_2(VAR_3, VAR_1[VAR_2].result) != 0) {
            FUNC_1(VAR_3);
            FUNC_0(VAR_0, "FAILED\n");
            return 1;
        }
        else {
            FUNC_1(VAR_3);
            FUNC_0(VAR_0, "OK\n");
        }
    }

    return 0;
}
