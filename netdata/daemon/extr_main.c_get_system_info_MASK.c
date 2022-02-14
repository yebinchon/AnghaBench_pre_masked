
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rrdhost_system_info {int dummy; } ;
typedef int pid_t ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 int * FUNC_1 (char*,int,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,...) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (int *,int ) ;
 int * FUNC_6 (char*,int *) ;
 char* VAR_1 ;
 int FUNC_7 (struct rrdhost_system_info*,char*,char*) ;
 int FUNC_8 (char*,char*,int) ;
 int FUNC_9 (char*,int,char*,char*) ;
 int FUNC_10 (char*,char*,char*,char*) ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (int) ;

int FUNC_13(struct rrdhost_system_info *VAR_2) {
    char *VAR_3;
    VAR_3 = FUNC_4(sizeof(char) * (FUNC_11(VAR_1) + FUNC_11("system-info.sh") + 2));
    FUNC_10(VAR_3, "%s/%s", VAR_1, "system-info.sh");
    if (FUNC_12(FUNC_0(VAR_3, VAR_0) != 0)) {
        FUNC_3("System info script %s not found.",VAR_3);
        FUNC_2(VAR_3);
        return 1;
    }

    pid_t VAR_4;

    FUNC_3("Executing %s", VAR_3);

    FILE *VAR_5 = FUNC_6(VAR_3, &VAR_4);
    if(VAR_5) {
        char VAR_6[200 + 1];
        while (FUNC_1(VAR_6, 200, VAR_5) != ((void*)0)) {
            char *VAR_7=VAR_6;
            char *VAR_8=VAR_6;
            while (*VAR_8 && *VAR_8 != '=') VAR_8++;
            if (*VAR_8=='=') {
                *VAR_8='\0';
                VAR_8++;
                if (FUNC_11(VAR_8)>1) {
                    char *VAR_9 = VAR_8 + FUNC_11(VAR_8) - 1;
                    (*VAR_9) = '\0';
                }
                char VAR_10[51], VAR_11[101];
                FUNC_9(VAR_10, 50,"%s",VAR_7);
                FUNC_9(VAR_11, 100,"%s",VAR_8);
                if(FUNC_12(FUNC_7(VAR_2, VAR_10, VAR_11))) {
                    FUNC_3("Unexpected environment variable %s=%s", VAR_10, VAR_11);
                }
                else {
                    FUNC_3("%s=%s", VAR_10, VAR_11);
                    FUNC_8(VAR_10, VAR_11, 1);
                }
            }
        }
        FUNC_5(VAR_5, VAR_4);
    }
    FUNC_2(VAR_3);
    return 0;
}
