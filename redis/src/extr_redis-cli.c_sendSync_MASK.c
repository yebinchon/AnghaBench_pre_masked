
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,char*,scalar_t__) ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (int,char*,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;
 unsigned long long FUNC_7 (char*,int *,int) ;
 int FUNC_8 (int,char*,int) ;

unsigned long long FUNC_9(int VAR_2, char *VAR_3) {




    char VAR_4[4096], *VAR_5;
    ssize_t VAR_6;


    if (FUNC_8(VAR_2,"SYNC\r\n",6) != 6) {
        FUNC_1(VAR_1,"Error writing to master\n");
        FUNC_0(1);
    }


    VAR_5 = VAR_4;
    while(1) {
        VAR_6 = FUNC_4(VAR_2,VAR_5,1);
        if (VAR_6 <= 0) {
            FUNC_1(VAR_1,"Error reading bulk length while SYNCing\n");
            FUNC_0(1);
        }
        if (*VAR_5 == '\n' && VAR_5 != VAR_4) break;
        if (*VAR_5 != '\n') VAR_5++;
    }
    *VAR_5 = '\0';
    if (VAR_4[0] == '-') {
        FUNC_3("SYNC with master failed: %s\n", VAR_4);
        FUNC_0(1);
    }
    if (FUNC_6(VAR_4+1,"EOF:",4) == 0 && FUNC_5(VAR_4+5) >= VAR_0) {
        FUNC_2(VAR_3, VAR_4+5, VAR_0);
        return 0;
    }
    return FUNC_7(VAR_4+1,((void*)0),10);
}
