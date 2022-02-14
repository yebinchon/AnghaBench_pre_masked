
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;
typedef int FILE ;


 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,char*) ;
 char* FUNC_4 (char*,int,int *) ;
 int FUNC_5 (char*,scalar_t__,char const*) ;
 int FUNC_6 (char const*,int ) ;
 int VAR_0 ;

pid_t FUNC_7(const char *VAR_1) {
    int VAR_2 = FUNC_6(VAR_1, VAR_0);
    if(VAR_2 == -1) {
        FUNC_1("Cannot open pid_from_cgroup() file '%s'.", VAR_1);
        return 0;
    }

    FILE *VAR_3 = FUNC_3(VAR_2, "r");
    if(!VAR_3) {
        FUNC_1("Cannot upgrade fd to fp for file '%s'.", VAR_1);
        return 0;
    }

    char VAR_4[100 + 1];
    pid_t VAR_5 = 0;
    char *VAR_6;
    while((VAR_6 = FUNC_4(VAR_4, 100, VAR_3))) {
        VAR_4[100] = '\0';
        VAR_5 = FUNC_0(VAR_6);
        if(VAR_5 > 0) break;
    }

    FUNC_2(VAR_3);





    return VAR_5;
}
