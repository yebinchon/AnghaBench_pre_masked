
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int ,char*,char const*,int,char const*) ;

int FUNC_3(const char *VAR_2, const char *VAR_3, pid_t VAR_4) {
    if(!VAR_2) VAR_2 = "";

    char VAR_5[VAR_0 + 1];
    FUNC_2(VAR_5, VAR_0, "%s/proc/%d/%s", VAR_2, (int)VAR_4, VAR_3);
    int VAR_6 = FUNC_1(VAR_5, VAR_1);

    if(VAR_6 == -1)
        FUNC_0("Cannot open proc_pid_fd() file '%s'", VAR_5);

    return VAR_6;
}
