
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 int * FUNC_1 (char*,int,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (int) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (int *,int ) ;
 int * FUNC_7 (char*,int *) ;
 int VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int FUNC_8 (char*,char*,char*,char const*,...) ;
 int FUNC_9 (char const*) ;
 scalar_t__ FUNC_10 (int) ;

void FUNC_11( const char *VAR_4, const char *VAR_5, const char *VAR_6) {
    static char *VAR_7;
    if (VAR_1 == -1) {
        char *VAR_8 = FUNC_5(sizeof(char) * (FUNC_9(VAR_3) +FUNC_9(".opt-out-from-anonymous-statistics") + 2));
        FUNC_8(VAR_8, "%s/%s", VAR_3, ".opt-out-from-anonymous-statistics");
        if (FUNC_4(FUNC_0(VAR_8, VAR_0) != 0)) {
            VAR_7 = FUNC_5(sizeof(char) * (FUNC_9(VAR_2) + FUNC_9("anonymous-statistics.sh") + 2));
            FUNC_8(VAR_7, "%s/%s", VAR_2, "anonymous-statistics.sh");
            if (FUNC_10(FUNC_0(VAR_7, VAR_0) != 0)) {
               VAR_1=0;
               FUNC_3("Anonymous statistics script %s not found.",VAR_7);
               FUNC_2(VAR_7);
            } else {
               VAR_1=1;
            }
        } else {
            VAR_1 = 0;
            VAR_7 = ((void*)0);
        }
        FUNC_2(VAR_8);
    }
    if(!VAR_1) return;
    if (!VAR_4) return;
    if (!VAR_5) VAR_5="";
    if (!VAR_6) VAR_6="";
    char *VAR_9=FUNC_5(sizeof(char) * (FUNC_9(VAR_4) + FUNC_9(VAR_5) + FUNC_9(VAR_6) + FUNC_9(VAR_7) + 10));
    pid_t VAR_10;

    FUNC_8(VAR_9,"%s '%s' '%s' '%s'", VAR_7, VAR_4, VAR_5, VAR_6);
    FUNC_3("%s", VAR_9);

    FILE *VAR_11 = FUNC_7(VAR_9, &VAR_10);
    if(VAR_11) {
        char VAR_12[100 + 1];
        while (FUNC_1(VAR_12, 100, VAR_11) != ((void*)0));
        FUNC_6(VAR_11, VAR_10);
    }
    FUNC_2(VAR_9);
}
