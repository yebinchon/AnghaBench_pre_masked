
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,char*,char const*) ;

pid_t FUNC_2(const char *VAR_1) {
    char VAR_2[VAR_0 + 1];

    FUNC_1(VAR_2, VAR_0, "%s/cgroup.procs", VAR_1);
    pid_t VAR_3 = FUNC_0(VAR_2);
    if(VAR_3 > 0) return VAR_3;

    FUNC_1(VAR_2, VAR_0, "%s/tasks", VAR_1);
    return FUNC_0(VAR_2);
}
