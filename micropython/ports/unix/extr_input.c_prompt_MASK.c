
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 char* FUNC_0 (char*,int,int ) ;
 int FUNC_1 (char*,int ) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (char*) ;

char *FUNC_5(char *VAR_2) {

    static char VAR_3[256];
    FUNC_1(VAR_2, VAR_1);
    char *VAR_4 = FUNC_0(VAR_3, sizeof(VAR_3), VAR_0);
    if (!VAR_4) {
        return ((void*)0);
    }
    int VAR_5 = FUNC_4(VAR_3);
    if (VAR_3[VAR_5 - 1] == '\n') {
        VAR_3[VAR_5 - 1] = 0;
    } else {
        VAR_5++;
    }
    char *VAR_6 = FUNC_2(VAR_5);
    FUNC_3(VAR_6, VAR_3, VAR_5);
    return VAR_6;
}
