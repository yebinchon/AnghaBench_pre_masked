
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,size_t,char*,char const*) ;
 int FUNC_2 (char*,char*,size_t) ;

__attribute__((used)) static inline char *FUNC_3(char *VAR_0, const char *VAR_1, size_t VAR_2) {
    if(VAR_0[0]) return VAR_0;

    if(VAR_1[0] == '\0' || (VAR_1[0] == '/' && VAR_1[1] == '\0'))
        FUNC_2(VAR_0, "cgroup_root", VAR_2);
    else
        FUNC_1(VAR_0, VAR_2, "cgroup_%s", VAR_1);

    FUNC_0(VAR_0);
    return VAR_0;
}
