
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 char const** VAR_1 ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int) ;

void FUNC_4(void) {


    FUNC_3(250);
    for (int VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
        char VAR_3 = ' ';
        FUNC_1(VAR_2, &VAR_3, 10);
        const char *VAR_4 = &VAR_3;
        FUNC_2(VAR_4);
        FUNC_0(". ");
        FUNC_2(VAR_1[VAR_2]);
        FUNC_0("\n");
    }
}
