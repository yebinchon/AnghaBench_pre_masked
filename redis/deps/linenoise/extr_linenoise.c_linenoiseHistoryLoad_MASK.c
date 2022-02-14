
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,char) ;

int FUNC_5(const char *VAR_1) {
    FILE *VAR_2 = FUNC_2(VAR_1,"r");
    char VAR_3[VAR_0];

    if (VAR_2 == ((void*)0)) return -1;

    while (FUNC_1(VAR_3,VAR_0,VAR_2) != ((void*)0)) {
        char *VAR_4;

        VAR_4 = FUNC_4(VAR_3,'\r');
        if (!VAR_4) VAR_4 = FUNC_4(VAR_3,'\n');
        if (VAR_4) *VAR_4 = '\0';
        FUNC_3(VAR_3);
    }
    FUNC_0(VAR_2);
    return 0;
}
